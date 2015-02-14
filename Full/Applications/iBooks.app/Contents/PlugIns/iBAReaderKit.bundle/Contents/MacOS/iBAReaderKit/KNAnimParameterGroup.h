/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBAReaderKit/iBAReaderKit-Structs.h>
@class NSMutableDictionary, NSString, NSArray;

@interface KNAnimParameterGroup : NSObject {

	NSMutableDictionary* _parametersDict;
	NSString* _fileName;
	NSString* _originalFileName;
	FSEventStreamRef mEventStream;
	NSString* _name;
	NSArray* _parameterArray;

}

@property (nonatomic,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * parameterArray;              //@synthesize parameterArray=_parameterArray - In the implementation block
+(id)parameterGroupForFile:(id)arg1 ;
-(void)writeAnimationCurvesToFile;
-(NSArray *)parameterArray;
-(id)mediaTimingFunctionForAnimationCurve:(id)arg1 ;
-(void)resetAnimationCurvesFromBundle;
-(void)readAnimationCurvesFromFile;
-(void)initializeEventStream;
-(double)valueForConstant:(id)arg1 ;
-(double)valueForAnimationCurve:(id)arg1 atPercent:(double)arg2 ;
-(id)initWithFileName:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
@end

