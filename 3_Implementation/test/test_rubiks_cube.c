#include "unity.h"
#include <rubiks_cube.h>

#define PROJECT_NAME "RubiksCubeSolver"

/*function prototype*/
void _is_i_j_k_valid(void);
void _isIndexValid(void);
void _isPositionValid(void);
void _getSize(void);
void _getPosition(void);
void _getLocation(void);
void _get_index(void);
void _isNodeValid(void);
void _isRubiksCubeValid(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(_is_i_j_k_valid);
  RUN_TEST(_isIndexValid);
  RUN_TEST(_isPositionValid);
  RUN_TEST(_getSize);
  RUN_TEST(_getPosition);
  RUN_TEST(_getLocation);
  RUN_TEST(_get_index);
  RUN_TEST(_isNodeValid);
  RUN_TEST(_isRubiksCubeValid);
  return UNITY_END();
}

/*testing the functions of get_set_functions.c file*/
void _is_i_j_k_valid(void){
  TEST_ASSERT_EQUAL(1,is_i_j_k_valid(1,1,2));
  TEST_ASSERT_EQUAL(0,is_i_j_k_valid(1,1,-1));
  TEST_ASSERT_EQUAL(0,is_i_j_k_valid(1,1,3));
  TEST_ASSERT_EQUAL(0,is_i_j_k_valid(1,1,INT_MAX));
  TEST_ASSERT_EQUAL(0,is_i_j_k_valid(1,1,INT_MIN));
}

void _isIndexValid(void){
  TEST_ASSERT_EQUAL(1,isIndexValid(0,0,0,2));
  TEST_ASSERT_EQUAL(0,isIndexValid(0,0,1,2));
  TEST_ASSERT_EQUAL(0,isIndexValid(1,1,1,0));
  TEST_ASSERT_EQUAL(1,isIndexValid(0,1,1,0));
  TEST_ASSERT_EQUAL(1,isIndexValid(0,0,1,1));
}

void _isPositionValid(void){
  TEST_ASSERT_EQUAL(1,isPositionValid(FRONT));
  TEST_ASSERT_EQUAL(0,isPositionValid(MIDDLE));
  TEST_ASSERT_EQUAL(1,isPositionValid(UP));
  TEST_ASSERT_EQUAL(0,isPositionValid("XYZ"));
  TEST_ASSERT_EQUAL(1,isPositionValid(RIGHT));
}

void _getSize(void){
  TEST_ASSERT_EQUAL(2,getSize(1,0,2));
  TEST_ASSERT_EQUAL(0,getSize(1,1,1));
  TEST_ASSERT_EQUAL(-1,getSize(0,3,1));
  TEST_ASSERT_EQUAL(3,getSize(2,2,2));
  TEST_ASSERT_EQUAL(-1,getSize(-1,2,0));
}

void _getPosition(void){
  TEST_ASSERT_EQUAL_STRING(FRONT,getPosition(0,0,0,0));
  TEST_ASSERT_EQUAL_STRING(UP,getPosition(1,0,0,0));
  TEST_ASSERT_EQUAL_STRING(RIGHT,getPosition(2,2,2,2));
  TEST_ASSERT_EQUAL_STRING(NULL,getPosition(0,1,0,2));
  TEST_ASSERT_EQUAL_STRING(NULL,getPosition(1,1,1,0));
}

void _getLocation(void){
  TEST_ASSERT_EQUAL_STRING("FRONT_UP_LEFT",getLocation(0,0,0));
  TEST_ASSERT_EQUAL_STRING("MIDDLE_UP_LEFT",getLocation(1,0,0));
  TEST_ASSERT_EQUAL_STRING("BACK_DOWN_RIGHT",getLocation(2,2,2));
  TEST_ASSERT_EQUAL_STRING(NULL,getLocation(0,1,3));
  TEST_ASSERT_EQUAL_STRING("MIDDLE_MIDDLE_MIDDLE",getLocation(1,1,1));
}

void _get_index(void){
  TEST_ASSERT_EQUAL(0,get_index(0,0,0,FRONT));
  TEST_ASSERT_EQUAL(0,get_index(1,0,0,UP));
  TEST_ASSERT_EQUAL(2,get_index(2,2,2,RIGHT));
  TEST_ASSERT_EQUAL(-1,get_index(0,1,0,UP));
  TEST_ASSERT_EQUAL(-1,get_index(1,1,1,LEFT));
}

/*testing the functions of initialize.c file*/
void _isNodeValid(void){
  setRubixCubeAtOnce("GREEN RED WHITE GREEN ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
  TEST_ASSERT_EQUAL(1,isNodeValid());
  freeSpace();
  
  setRubixCubeAtOnce("RED RED WHITE GREEN ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
  TEST_ASSERT_EQUAL(0,isNodeValid());
  freeSpace();
  
  setRubixCubeAtOnce("GREEN RED WHITE GREEN GREEN GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
  TEST_ASSERT_EQUAL(0,isNodeValid());
  freeSpace();
  
  setRubixCubeAtOnce("GREEN RED BROWN GREEN ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
  TEST_ASSERT_EQUAL(1,isNodeValid());
  freeSpace();
  
  setRubixCubeAtOnce("GREEN RED WHITE GREEN ORANGE ORANGE ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
  TEST_ASSERT_EQUAL(0,isNodeValid());
  freeSpace();
}

void _isRubiksCubeValid(void){
  setRubixCubeAtOnce("GREEN RED BROWN GREEN ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
  TEST_ASSERT_EQUAL(0,isRubiksCubeValid());
  freeSpace();
  
  setRubixCubeAtOnce("GREEN RED WHITE GREEN ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
  TEST_ASSERT_EQUAL(1,isRubiksCubeValid());
  freeSpace();
  
  setRubixCubeAtOnce("WHITE RED GREEN GREEN ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
  TEST_ASSERT_EQUAL(1,isRubiksCubeValid());
  freeSpace();
  
  setRubixCubeAtOnce("BLUE RED WHITE GREEN ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
  TEST_ASSERT_EQUAL(0,isRubiksCubeValid());
  freeSpace();
  
  setRubixCubeAtOnce("GREEN RED WHITE ORANGE ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE");
  TEST_ASSERT_EQUAL(0,isRubiksCubeValid());
  freeSpace();
}
