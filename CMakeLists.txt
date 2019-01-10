cmake_minimum_required(VERSION 3.13)
project(evenderch2)

set(CMAKE_CXX_STANDARD 14)

add_executable(evenderch2 Main.cpp server/Server.h server/MyParallelServer.cpp server/MyParallelServer.h server/ClientHandler.h server/MyTestClientHandler.cpp server/MyTestClientHandler.h Solver.h server/CacheManager.h server/FileCacheManager.cpp server/FileCacheManager.h Data.cpp Data.h Algorithms/Searcher.h Algorithms/Searchable.h Algorithms/State.h Algorithms/BestFirstSearch.cpp Algorithms/BestFirstSearch.h Algorithms/DFS.cpp Algorithms/DFS.h Algorithms/BFS.cpp Algorithms/BFS.h Algorithms/Astar.cpp Algorithms/Astar.h Algorithms/MatrixSearchable.cpp Algorithms/MatrixSearchable.h MatrixSolver.cpp MatrixSolver.h Lexer.cpp Lexer.h Algorithms/ISearcher.h)