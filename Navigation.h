//
// Created by 24260 on 2024/1/2.
//

#ifndef NAVIGATION_NAVIGATION_H
#define NAVIGATION_NAVIGATION_H

#include <iostream>
#include <vector>
//智能指针
#include <memory>

//基于哪种单体算法
enum {
    AStar,      //A*算法
    Dijkstra,   //Dijkstra算法
    RRT         //RRT算法
};

struct Point {
    int x;
    int y;
    int z;
};

struct Path {
    Point start;
    Point end;
    std::vector<Point> points;
};

struct Map3D {
    //地图大小
    int width;
    int height;
    int depth;
    //地图分辨率
    double resolution;
    //全局静态地图使用三维智能指针
    std::shared_ptr<std::shared_ptr<std::shared_ptr<int>>> globalMap;
    //膨胀层地图使用三维智能指针
    std::shared_ptr<std::shared_ptr<std::shared_ptr<int>>> inflateMap;

};

struct Map2D {
    //地图大小
    int width;
    int height;
    //地图分辨率
    double resolution;
    //全局静态地图使用二维智能指针
    std::shared_ptr<std::shared_ptr<int>> globalMap;
    //膨胀层地图使用二维智能指针
    std::shared_ptr<std::shared_ptr<int>> inflateMap;
};


//集群机器人路径规划算法
class Navigation {
    //定义导航算法的基本参数
    Map3D myMap3D;
    Map2D myMap2D;

    //是否以队列顺序为优先级
    bool isQueue = false;
    //是否允许路径穿过未知区域
    bool isUnknown = false;
    //允许路径终点与实际终点的偏差
    int deviation = 0;
    //使用的单体算法
    int algorithm = AStar;



    //起点队列
    std::vector<Point> startQueue;
    //终点队列
    std::vector<Point> endQueue;











};


#endif //NAVIGATION_NAVIGATION_H
