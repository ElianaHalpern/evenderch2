cmake_minimum_required(VERSION 3.13)
project(evenderch2)

set(CMAKE_CXX_STANDARD 14)

add_executable(evenderch2 Main.cpp Server.h MySerialServer.cpp MySerialServer.h MyParallelServer.cpp MyParallelServer.h ClientHandler.h MyTestClientHandler.cpp MyTestClientHandler.h Solver.h CacheManager.h FileCacheManager.cpp FileCacheManager.h StringReverser.cpp StringReverser.h Data.cpp Data.h Searcher.h Searchable.h State.cpp State.h BestFirstSearch.cpp BestFirstSearch.h DFS.cpp DFS.h BFS.cpp BFS.h Astar.cpp Astar.h Matrix.cpp Matrix.h Point.cpp Point.h MatrixSolver.cpp MatrixSolver.h Lexer.cpp Lexer.h)