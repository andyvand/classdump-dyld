/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Ink/Ink-Structs.h>
#import <Ink/InkRecognizerBase.h>
#import <Ink/NSCopying.h>
#import <Ink/NSCoding.h>

@class NSMutableArray;

@interface InkRecognizerStroke : InkRecognizerBase <NSCopying, NSCoding> {

	unsigned char _terminationAfterStroke;
	int _hRes;
	int _vRes;
	NSMutableArray* _inkPointArray;

}
-(id)initWithInkStrokeRef:(OpaqueInkStrokeRefRef)arg1 ;
-(id)initWithInkStrokePtr:(InkStroke*)arg1 ;
-(OpaqueInkStrokeRefRef)createInkStrokeRef;
-(id)initWithInkRecognizerStroke:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

