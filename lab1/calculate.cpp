#include"math.h"
#include"answer.h"
#include"values.h"
#include <cmath>
#include "testprint.h"

struct Answer calculate(struct Values value) {

    testPrint(value);

    int AminusBdelC = (value.ofNumberA - value.ofNumberB)/value.ofNumberC;
    int AplusB = value.ofNumberA + value.ofNumberB;
    int CminusD = value.ofNumberC - value.ofNumberD;

    int data = AminusBdelC + AplusB * CminusD * value.ofNumberE;

    float absoluteErrorAplusB = value.ofErrorA + value.ofErrorB; // 0.1
    float absoluteErrorAminusB = absoluteErrorAplusB;
    float absoluteErrorCminusD = value.ofErrorC + value.ofErrorD; // 1.8
    float relativeErrorAminusBdelC = absoluteErrorAminusB/(std::abs(value.ofNumberA - value.ofNumberB)) + value.ofErrorC/value.ofNumberC; // 0,4571
    float relativeErrorMultiplication = absoluteErrorAplusB/AplusB +
            absoluteErrorCminusD/(std::abs(CminusD)) +
            value.ofErrorE/value.ofNumberE; // 0.27

    float absoluteError = relativeErrorAminusBdelC * AminusBdelC + relativeErrorMultiplication*(AplusB)*(std::abs(CminusD))*value.ofNumberE;
    Answer answer;
    answer.absoluteError = absoluteError;
    answer.data = data;

    return answer;
}
