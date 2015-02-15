/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:39:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Maps.app/Contents/MacOS/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned arrivalTime : 1;
	unsigned currentRouteIndex : 1;
	unsigned currentRouteStep : 1;
	unsigned departureTime : 1;
	unsigned displayMethod : 1;
} SCD_Struct_Di1;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_NV2;

typedef struct {
	unsigned businessID : 1;
	unsigned latitude : 1;
	unsigned longitude : 1;
	unsigned regionLatitude : 1;
	unsigned regionLatitudeDelta : 1;
	unsigned regionLongitude : 1;
	unsigned regionLongitudeDelta : 1;
	unsigned directionsMode : 1;
	unsigned providerID : 1;
} SCD_Struct_Sy3;

typedef struct {
	CGSize field1;
	double field2;
	double field3;
	double field4;
	CGSize field5;
	double field6;
	double field7;
	double field8;
	long long field9;
	double field10;
	double field11;
	double field12;
	double field13;
	double field14;
	double field15;
	double field16;
	double field17;
	double field18;
	double field19;
	double field20;
	double field21;
	double field22;
	double field23;
	double field24;
	double field25;
	char field26;
	double field27;
	double field28;
	double field29;
	char field30;
	char field31;
} SCD_Struct_MN4;

typedef struct {
	double x;
	double y;
} SCD_Struct_NV5;

typedef struct {
	SCD_Struct_NV5 origin;
	SCD_Struct_NV5 size;
} SCD_Struct_NV6;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_NV9;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	CGSize referenceSize;
	double arrowStemWidth;
	double intersectionStemWidth;
	double intersectionStrokeWidth;
	CGSize arrowHeadSize;
	double arrowStemCornerRadius;
	double arbitraryCurveRadius;
	double uTurnRadius;
	long long arrowStyle;
	double rightTurnCurveRadius;
	double rightTurnInnerCurveRadius;
	double rightTurnStemLengthBeforeTurn;
	double rightTurnStemLengthAfterTurn;
	double fortyFiveDegreeSouthAngleStemLengthBeforeTurn;
	double fortyFiveDegreeSouthAngleStemLengthAfterTurn;
	double fortyFiveDegreeSouthAngleCornerRadius;
	double fortyFiveDegreeNorthAngleStemLengthBeforeTurn;
	double fortyFiveDegreeNorthAngleStemLengthAfterTurn;
	double fortyFiveDegreeNorthAngleCornerRadius;
	double exitStemLengthBeforeTurn;
	double exitStemLengthAfterTurn;
	double exitRoadNotTakenStemLength;
	double arrivalOuterCircleWidth;
	double arrivalGapBetweenCircles;
	double arrivalGapBetweenArrowAndCircles;
	char arrivalCutOutArrowInInnerCircle;
	double mergeRightStemLengthBeforeTurn;
	double mergeRightStemLengthAfterTurn;
	double mergeRightCornerRadius;
	char junctionsDrawEntryExitRightAngles;
	char junctionsDrawEntryExitFortyFiveDegreeAngles;
} SCD_Struct_MN12;

typedef struct CGContext* CGContextRef;
