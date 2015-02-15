/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct TabletPointRec {
	int absX;
	int absY;
	int absZ;
	unsigned short buttons;
	unsigned short pressure;
	short tiltX;
	short tiltY;
	unsigned short rotation;
	short tangentialPressure;
	unsigned short deviceID;
	short vendor1;
	short vendor2;
	short vendor3;
} TabletPointRec;

typedef struct InkPoint {
	CGPoint point;
	TabletPointRec tabletPointData;
	unsigned keyModifiers;
} InkPoint;

typedef struct OpaqueInkStrokeRef* OpaqueInkStrokeRefRef;

typedef struct OpaqueInkTextRef* OpaqueInkTextRefRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct OpaqueEventRef* OpaqueEventRefRef;

typedef struct __CFString* CFStringRef;

typedef struct ProcessSerialNumber {
	unsigned highLongOfPSN;
	unsigned lowLongOfPSN;
} ProcessSerialNumber;

typedef struct __CFMessagePort* CFMessagePortRef;

typedef struct __EventLoopTimer* EventLoopTimerRef;

typedef struct _CGEventSourceData {
	int source;
	unsigned sourceUID;
	unsigned sourceGID;
	unsigned flags;
	unsigned long long userData;
	unsigned sourceState;
	unsigned short localEventSuppressionInterval;
	unsigned char suppressionIntervalFlags;
	unsigned char remoteMouseDragFlags;
	unsigned long long serviceID;
} CGEventSourceData;

typedef struct CGEventProcess {
	int pid;
	unsigned psnHi;
	unsigned psnLo;
	unsigned targetID;
	unsigned flags;
} CGEventProcess;

typedef struct {
	short x;
	short y;
} SCD_Struct_In15;

typedef struct CGSTabletProximityData {
	unsigned short vendorID;
	unsigned short tabletID;
	unsigned short pointerID;
	unsigned short deviceID;
	unsigned short systemTabletID;
	unsigned short vendorPointerType;
	unsigned pointerSerialNumber;
	unsigned long long uniqueID;
	unsigned capabilityMask;
	unsigned char pointerType;
	unsigned char enterProximity;
	short reserved1;
} CGSTabletProximityData;

typedef struct {
	unsigned short uniCharCount;
	short repeat;
	unsigned short charSet;
	unsigned short charCode;
	unsigned short keyCode;
	short keyData;
	short specialKey;
	char _padding;
	unsigned char uniCharFlags;
	unsigned keyboardType;
	unsigned usage;
	unsigned usagePage;
	unsigned uniKeyState;
	unsigned short uniChar[20];
} SCD_Struct_In17;

typedef struct {
	short reserved;
	short eventNum;
	int trackingNum;
	int userData;
	unsigned triggerType;
	long long userData64;
	long long trackingNum64;
	int _padding[8];
} SCD_Struct_In18;

typedef struct {
	unsigned short notifyCode;
	unsigned short flags;
	unsigned targetHiPSN;
	unsigned targetLoPSN;
	int status;
	int misc1;
	int misc2;
	int misc3;
	int misc4;
	int pid;
	int attributes;
	int flavor;
	int _padding[5];
} SCD_Struct_In19;

typedef struct {
	short deltaAxis1;
	short deltaAxis2;
	short deltaAxis3;
	short reserved1;
	int fixedDeltaAxis1;
	int fixedDeltaAxis2;
	int fixedDeltaAxis3;
	int pointDeltaAxis1;
	int pointDeltaAxis2;
	int pointDeltaAxis3;
	unsigned scrollPhase;
	int scrollCount;
	int hidDeviceEventID;
	unsigned momentumPhase;
	unsigned instantMouser : 1;
	unsigned isContinuous : 1;
	unsigned reverseDirection : 1;
	unsigned _bitPadding : 29;
	unsigned windowUnderMousePointer;
	unsigned windowUnderMousePointerThatCanHandleThisEvent;
	int _padding2[1];
} SCD_Struct_In20;

typedef struct {
	short reserved;
	short subtype;
	/*function pointer*/void* misc;
	float F[15];
	int L[15];
	short S[30];
	char C[60];
} SCD_Struct_In21;

typedef struct {
	short reserved;
	short subtype;
	unsigned hotKeyID;
	unsigned long long hotKeyID64;
	unsigned short keyCode;
	short keyData;
	int _padding[11];
} SCD_Struct_In22;

typedef struct {
	float value;
	float deltaX;
	float deltaY;
	int _padding1[8];
} SCD_Struct_In23;

typedef struct {
	float value;
	int _padding1[10];
} SCD_Struct_In24;

typedef struct {
	float X;
	float Y;
	float Z;
	unsigned flagBits;
	int _padding1[7];
} SCD_Struct_In25;

typedef struct {
	unsigned value;
	unsigned motion;
	unsigned swipeMask;
	float progress;
	float positionX;
	float positionY;
	float velocityX;
	float velocityY;
	float velocityZ;
	unsigned flagBits;
	unsigned flavor;
} SCD_Struct_In26;

typedef struct {
	unsigned symbolicHotKeyValue;
	unsigned treatAsKeyDown;
	int _padding1[9];
} SCD_Struct_In27;

typedef struct {
	unsigned value;
	int _padding1[10];
} SCD_Struct_In28;

typedef struct CGGestureData {
	unsigned hidType;
	unsigned long long gestureID;
	BOOL isPreflight;
	BOOL gestureEnded;
	unsigned char gesturePhase;
	unsigned char padding;
	unsigned gestureMask;
	float gestureProgress;
	unsigned short gestureStage;
	unsigned char gestureBehavior;
	/*function pointer*/void* hidData;
	SCD_Struct_In23 zoom;
	SCD_Struct_In24 rotation;
	SCD_Struct_In25 scroll;
	SCD_Struct_In26 swipe;
	SCD_Struct_In27 hotKey;
	SCD_Struct_In24 preflight;
	SCD_Struct_In28 startEnd;
	SCD_Struct_In28) stage;
} CGGestureData;

typedef struct CGSTabletPointData {
	int x;
	int y;
	int z;
	unsigned short buttons;
	unsigned short pressure;
	SCD_Struct_In15 tilt;
	unsigned short rotation;
	short tangentialPressure;
	unsigned short deviceID;
	short vendor1;
	short vendor2;
	short vendor3;
} CGSTabletPointData;

typedef struct {
	unsigned char subx;
	unsigned char suby;
	short eventNum;
	int click;
	unsigned char pressure;
	char buttonNumber;
	unsigned char subType;
	unsigned char _reserved2;
	short deltaX;
	short deltaY;
	/*function pointer*/void* tablet;
	CGSTabletPointData point;
	CGSTabletProximityData) proximity;
	unsigned instantMouser : 1;
	unsigned _bitPadding : 31;
	unsigned windowUnderMousePointer;
	unsigned windowUnderMousePointerThatCanHandleThisEvent;
	unsigned buttonStateBits;
} SCD_Struct_In31;

typedef struct CGSEventRecord {
	unsigned short major;
	unsigned short minor;
	unsigned length;
	unsigned type;
	CGPoint location;
	CGPoint windowLocation;
	unsigned long long time;
	unsigned flags;
	unsigned window;
	unsigned connection;
	CGEventSourceData eventSource;
	CGEventProcess target;
	/*function pointer*/void* data;
	SCD_Struct_In31 mouse;
	SCD_Struct_In31 move;
	SCD_Struct_In17 key;
	SCD_Struct_In18 tracking;
	SCD_Struct_In19 process;
	SCD_Struct_In20 scrollWheel;
	SCD_Struct_In20 zoom;
	CGSTabletPointData tablet;
	CGSTabletProximityData proximity;
	SCD_Struct_In21 compound;
	SCD_Struct_In22 hotkey;
	CGGestureData) gesture;
	void ioEventData;
	unsigned short windowHeight;
	unsigned short mainDisplayHeight;
	__CGSEventAppendix appendix;
	unsigned eventOwner;
	BOOL passedThrough;
	__CFData encodedEvent;
} CGSEventRecord;

