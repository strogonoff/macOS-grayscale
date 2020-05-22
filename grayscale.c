#include <stdio.h>
#include <ApplicationServices/ApplicationServices.h>

CG_EXTERN bool CGDisplayUsesForceToGray(void);
CG_EXTERN void CGDisplayForceToGray(bool forceToGray);

int main(int argc, char** argv) {
    bool isGrayscale = CGDisplayUsesForceToGray();
    CGDisplayForceToGray(!isGrayscale);
    return 0;
}
