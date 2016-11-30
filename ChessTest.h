#ifndef __CHESSTEST_H__
#define __CHESSTEST_H__

#include "BoardGameTest.h"
#include <iostream>

template<class GAMECLASS> 
class ChessTest : public BoardGameTest<GAMECLASS> 
{
  CPPUNIT_TEST_SUB_SUITE( ChessTest, BoardGameTest<GAMECLASS> );
  CPPUNIT_TEST( testNumberOfPieces );
  CPPUNIT_TEST_SUITE_END();
public:
  ChessTest() 
  {
  }
  
  void testNumberOfPieces()
  { 
    std::cout << "THIS IS RUNNING";
    CPPUNIT_ASSERT( this->m_game->getNumberOfPieces () == 32 );
    CPPUNIT_ASSERT( this->m_game->getNumberOfPieces () == 1337 );
  }
};



#endif
