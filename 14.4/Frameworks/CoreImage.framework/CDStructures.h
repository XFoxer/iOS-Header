//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CIImage, MISSING_TYPE, NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGColorSpace;

struct CGContext;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CIBitmapContextPrivate {
    void *_field1;
    long long _field2;
    struct CGRect _field3;
    int _field4;
};

struct CIBurstSupportVector {
    double _field1;
    double _field2[7];
};

struct CIKernelReflection {
    int _field1;
    int _field2;
    char *_field3;
    char *_field4;
    struct vector<CI::KernelArgumentType, std::__1::allocator<CI::KernelArgumentType>> _field5;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field6;
    id _field7;
    unsigned int _field8;
    int _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    _Bool _field12;
};

struct CIPredictionModelImageFeatures {
    NSString *name;
    long long width;
    long long height;
    unsigned int format;
};

struct CIRenderDestinationInternal {
    struct RenderDestination *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    int _field5;
    struct {
        double _field1[3];
        double _field2[3];
        double _field3[3];
        double _field4;
        double _field5;
    } _field6;
    unsigned long long _field7;
    _Bool _field8;
    _Bool _field9;
    int _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    id _field14;
};

struct Context {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    struct CGColorSpace *_field3;
    struct CGColorSpace *_field4;
    int _field5;
    float _field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    struct CGContext *_field12;
    float _field13;
    _Bool _field14;
    struct CGRect _field15;
    struct CGAffineTransform _field16;
    unsigned int _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    int _field20;
    char _field21[64];
    _Bool _field22;
    struct ObjectCache<CI::MainProgram, false> *_field23;
    struct ObjectCache<CI::Node, false> *_field24;
    struct ObjectCache<CI::Node, false> *_field25;
    double _field26;
    double _field27;
    struct RenderTask *_field28;
    int _field29;
    int _field30;
    struct Context *_field31;
    unsigned long long _field32;
};

struct FastRegistration_Signatures {
    float *piRow;
    unsigned long long nPiRow;
    struct Projections_meanStdTable piRowTable;
    float *piCol;
    unsigned long long nPiCol;
    struct Projections_meanStdTable piColTable;
};

struct GridROI_t {
    int startX;
    int startY;
    int endX;
    int endY;
};

struct IPoint {
    long long _field1;
    long long _field2;
};

struct IRect {
    struct IPoint _field1;
    struct ISize _field2;
};

struct ISize {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct Image {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    struct CGRect _field3;
    struct __CFURL *_field4;
    void *_field5;
    void *_field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned long long _field9;
};

struct Kernel {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    char *_field3;
    char *_field4;
    _Bool _field5;
    struct SerialIntArray *_field6;
    struct SerialStringArray *_field7;
    struct __CFString *_field8;
    int _field9;
    int _field10;
    struct ISize _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
};

struct LineCostProxy;

struct Node;

struct ObjectCache<CI::MainProgram, false>;

struct ObjectCache<CI::Node, false>;

struct Projections_meanStdTable {
    float *sumTable;
    float *sumSqTable;
};

struct PseudoRand {
    unsigned int u;
    unsigned int v;
};

struct Rectangle {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct RenderDestination {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    struct __CFString *_field3;
    struct CGColorSpace *_field4;
};

struct RenderTask {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    char *_field3;
    char *_field4;
    char _field5[128];
    int _field6;
    _Bool _field7;
    unsigned long long _field8;
    int _field9;
    char _field10[64];
    unsigned long long _field11;
    struct Node *_field12;
    struct CGRect _field13;
    int _field14;
    unsigned long long _field15;
    struct __CFString *_field16;
    struct __CFString *_field17;
    struct vector<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>>, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>>>> _field18;
    double _field19;
    double _field20;
    unsigned long long _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
};

struct SerialIntArray;

struct SerialObjectPtrArray {
    int _field1;
    int _field2;
    int _field3;
    void **_field4;
};

struct SerialStringArray;

struct SharpnessGridElement_t {
    unsigned char _field1;
    unsigned char _field2;
    float _field3;
};

struct Solution {
    float rX;
    float rY;
    float rZ;
    float cost;
};

struct Texture {
    union {
        unsigned long long _field1;
        struct {
            unsigned int _field1;
            unsigned int _field2;
        } _field2;
        void *_field3;
    } _field1;
};

struct Trilean {
    char _field1;
};

struct WarpKernel {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    char *_field3;
    char *_field4;
    _Bool _field5;
    struct SerialIntArray *_field6;
    struct SerialStringArray *_field7;
    struct __CFString *_field8;
    int _field9;
    int _field10;
    struct ISize _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
    CDUnknownFunctionPointerType *_field18;
};

struct __CFString;

struct __SVMParameters {
    struct __SVMScaleOffset {
        float _field1;
        float _field2;
    } _field1[7];
    double _field2;
    double _field3;
    int _field4;
    int _field5;
    struct CIBurstSupportVector *_field6;
    struct CIBurstSupportVector *_field7;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct atomic<unsigned int> {
    struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>> {
        _Atomic unsigned int _field1;
    } _field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

struct filterShape {
    struct CGRect _field1;
};

struct float3x3 {
    MISSING_TYPE *columns[3];
};

struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>>;

struct vImage_Buffer {
    void *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct vec2 {
    float _field1;
    float _field2;
};

struct vec3 {
    float _field1;
    float _field2;
    float _field3;
};

struct vec4 {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct vector<CI::KernelArgumentType, std::__1::allocator<CI::KernelArgumentType>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<CI::KernelArgumentType *, std::__1::allocator<CI::KernelArgumentType>> {
        int *_field1;
    } _field3;
};

struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<CI::Perspective::Line *, std::__1::allocator<CI::Perspective::Line>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<LineCostProxy, std::__1::allocator<LineCostProxy>> {
    struct LineCostProxy *__begin_;
    struct LineCostProxy *__end_;
    struct __compressed_pair<LineCostProxy *, std::__1::allocator<LineCostProxy>> {
        struct LineCostProxy *__value_;
    } __end_cap_;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

struct vector<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>>, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>>>> {
    struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>> *_field1;
    struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>>*, std::__1::allocator<std::__1::unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>>>> {
        struct unique_ptr<CI::TileTask, CI::ObjectDeleter<CI::TileTask>> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6[3];
} CDStruct_31328b19;

typedef struct {
    _Bool _field1;
    int _field2;
    int _field3;
    float _field4;
    float _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    float _field10;
    float _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
} CDStruct_935079c3;

typedef struct {
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
} CDStruct_da2e99ad;

typedef struct {
    MISSING_TYPE *_field1[3];
} CDStruct_d80e62f2;

typedef struct {
    float _field1[4];
    float _field2[4];
    float _field3[4];
    int _field4[4];
} CDStruct_04c5c26d;

typedef struct {
    char *baseAddress;
    int width;
    int height;
    int rowSamples;
    int rowBytes;
    int size;
    int samplesPerPixel;
    int bytesPerSample;
    float resolution;
} CDStruct_c3faddef;

typedef struct {
    void *_field1;
    void *_field2;
    unsigned long long _field3[4];
    unsigned long long _field4[4];
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    int _field15;
} CDStruct_cf098810;

typedef struct {
    void *plan;
    int network_index;
} CDStruct_2bc666a5;

typedef struct {
    double focalLength;
    double lineSearchRangeV;
    double lineSearchRangeH;
    double pitchLimit;
    double yawLimit;
    double rollLimit;
    CIImage *saliencyHeatmap;
} CDStruct_58ac58eb;

typedef struct {
    double i;
    double q;
} CDStruct_bfe67ca5;

typedef struct {
    double variance;
    int nNonZero;
} CDStruct_fc6961d5;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    _Bool _field5;
} CDStruct_18e74ac9;

typedef struct {
    float skinval;
    float avgLuminance;
    float minLuminance;
    float maxLuminance;
    float darkPercent;
    float clipPercent;
} CDStruct_3882bc9d;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    float a;
    float b;
    float c;
} CDStruct_12b04d25;

typedef struct {
    int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
} CDStruct_c952897d;

typedef struct {
    int _field1;
    int _field2;
    _Bool _field3;
    _Bool _field4;
    float _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
} CDStruct_3edab2bb;

typedef struct CDStruct_183601bc;

typedef struct {
    _Bool _field1;
    int _field2;
    int _field3;
    struct CGPoint *_field4;
} CDStruct_d01ad076;

typedef struct {
    char _field1[256];
    char _field2[32];
    CDStruct_c3faddef _field3;
    int _field4;
    int _field5;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
    } _field6;
    struct CGColorSpace *_field7;
    unsigned int _field8;
    int _field9;
    int _field10;
    _Bool _field11;
    float _field12;
} CDStruct_79f2618e;

typedef struct {
    int _field1;
    CDStruct_c952897d _field2[20];
} CDStruct_b443dc70;

typedef struct {
    int _field1;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
        float _field5;
    } _field2[20];
} CDStruct_ccbddcce;

typedef struct {
    int _field1;
    struct {
        float _field1;
        int _field2;
        int _field3;
        float _field4;
        float _field5;
        float _field6;
        int _field7;
        int _field8;
        float _field9;
    } _field2[4];
} CDStruct_08ff8b76;

typedef struct {
    int _field1;
    int _field2;
    CDStruct_183601bc *_field3;
    int _field4;
    int _field5;
    int _field6;
} CDStruct_892ad059;

typedef struct {
    int width;
    int height;
    float scaleFactor;
    CDStruct_183601bc *grid;
    int nPoints;
    int maxPoints;
    CDStruct_183601bc *points;
    int nextNetNumber;
    int nThreads;
    int maxThreads;
    CDStruct_183601bc *threads;
    int nShapes;
    int maxShapes;
    CDStruct_183601bc *shapes;
} CDStruct_ea27cb70;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    float _field4;
    float _field5;
    int _field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    int _field10;
    int _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    CDStruct_818bb265 _field16;
    CDStruct_818bb265 _field17;
    float _field18;
    int _field19;
    int _field20;
} CDStruct_ed92ceb9;

typedef struct {
    int origHitX;
    int origHitY;
    int snapHitX;
    int snapHitY;
    int bitmaskSeedX;
    int bitmaskSeedY;
    int bitmaskThreshold;
    int cornealReflectionSeedX;
    int cornealReflectionSeedY;
    int cornealReflectionThreshold;
    _Bool align;
    CDStruct_6ca1d5c6 mTemplate;
    CDStruct_6ca1d5c6 existingTemplate;
    int averageSkinMapY;
    int characterizeCase;
    int finalEyeCase;
    float IOD;
    struct {
        void *bitmapproc_context;
        CDUnknownFunctionPointerType bproc;
        int orientation;
        float SNR;
        _Bool N90;
        int redBitmaskArea;
        float imageCenterX;
        float imageCenterY;
        float halfDiagonalSize;
    } O;
    CDStruct_5973fb4f CR;
} CDStruct_1c31e7e7;

typedef struct {
    CDStruct_818bb265 _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
} CDStruct_73443751;

typedef struct {
    CDStruct_5973fb4f FR;
    struct CGPoint leftEye;
    struct CGPoint rightEye;
    CDStruct_5973fb4f LR;
    CDStruct_5973fb4f RR;
    float leftDistMatrix[4];
    float rightDistMatrix[4];
    struct CGPoint LPoly[8];
    struct CGPoint RPoly[8];
    float IOD;
} CDStruct_7286a259;

typedef struct {
    struct CGPoint _field1;
    int _field2;
    float _field3;
} CDStruct_e958be04;

typedef struct {
    float xf;
    float yf;
    float xfi;
    float yfi;
    float ify;
    int ioffx;
    int ioffy;
    int downsampleType;
    float downsampleOversizeX;
    float downsampleOversizeY;
    int gradientChannel;
    int edgeFindingChannel;
    float minMagnitude;
    float regressionRadius;
    float capture;
    float alignmentTolerance;
    float connectThreshold;
    _Bool forceFail;
    struct CGRect inputImageExtent;
    int orientation;
    int cameraType;
    int faceIndex;
    int side;
    float scale;
    float IOD;
    struct CGAffineTransform transform;
    int height;
} CDStruct_242bf05f;

typedef struct {
    int tag;
    struct CGPoint pt2;
    int eyeCase;
    int forceCase;
    int npixels;
    int bignpixels;
    CDStruct_c3faddef fullNew;
    CDStruct_5973fb4f YR;
    CDStruct_6ca1d5c6 psTemplate;
    _Bool pupilShadeAlignment;
    CDStruct_6ca1d5c6 matchingTemplate;
    int faceIndex;
    _Bool left;
    float IOD;
    CDStruct_1c31e7e7 data;
    struct {
        struct CGPoint centroid;
        int area;
        float ovalness;
        float contrast;
        float mincontrast;
        int nborder;
        CDStruct_5973fb4f IR;
        float aspectRatio;
        _Bool touchingEdge;
        int localmax;
        int localmaxrow;
        int localmaxcol;
        int localfloor;
        float rgmean;
        float rgstd;
        float ymean;
        float ystd;
    } BI;
} CDStruct_8d997f87;

typedef struct {
    struct CGRect _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    struct CGPoint _field5;
    id _field6;
} CDStruct_1b0b1413;

// Ambiguous groups
typedef struct {
    MISSING_TYPE *a__b;
} CDStruct_ec37f00f;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
} CDStruct_a734b2e2;

typedef struct {
    int lo;
    int med;
    int hi;
    int average;
} CDStruct_6ca1d5c6;

typedef struct {
    int minrow;
    int maxrow;
    int mincol;
    int maxcol;
} CDStruct_5973fb4f;

