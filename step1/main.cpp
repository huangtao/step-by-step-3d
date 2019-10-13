#include <Eigen/Dense>
#include <iostream>

// 演示Eigen基础代数库的使用
// 必须理解向量代表位移、速度、加速度...

using namespace Eigen;
using namespace std;

int main(int argc, char *argv[])
{
    // 零向量
    Vector3d v0 = Vector3d::Zero();
    cout << "零向量v0:\n" << v0 << endl;

    // 元素为1的向量
    Vector3d v1 = Vector3d::Ones();
    cout << "单位向量v1:\n" << v1 << endl;

    Vector3d va;
    va.setRandom();
    cout << "随机向量va:\n" << va << endl;
    Vector3d vb;
    vb.setRandom();
    cout << "随机向量vb:\n" << vb << endl;
    // 向量加法
    cout << "va + vb = \n" << va + vb << endl;

    // 向量和标量乘法
    cout << "va * 10 = \n" << va * 10 << endl;

    // 向量长度(模)
    va = Vector3d(3, 4, 0);
    cout << "va:\n" << va << endl; 
    cout << "va的长度|V|=\n" << va.norm() << endl;
    // 单位向量u
    cout << "va的单位向量U=\n" << va.normalized() << endl;
    // 任何向量都可以表示为V = |V|U
    cout << "|V|U = \n" << va.norm() * va.normalized() << endl;

    // 点积
    vb = Vector3d(1, 2, 9);
    cout << "[3, 4, 0]与[1, 2, 9]的点积 = " << va.dot(vb) << endl;

    // 叉积
    cout << "[3, 4, 0]与[1, 2, 9]的叉积 = \n" << va.cross(vb) << endl;

    return 0;
}
