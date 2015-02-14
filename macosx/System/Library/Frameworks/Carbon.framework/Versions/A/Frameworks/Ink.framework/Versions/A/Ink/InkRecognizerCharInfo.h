/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/Ink.framework/Versions/A/Ink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Ink/Ink-Structs.h>
#import <Ink/NSCopying.h>
#import <Ink/NSCoding.h>

@class NSMutableArray;

@interface InkRecognizerCharInfo : NSObject <NSCopying, NSCoding> {

	NSMutableArray* _strokeIndexes;

}
-(unsigned long long)numStrokes;
-(id)initWithInkCharInfo:(InkCharInfo*)arg1 ;
-(void)copyInkCharInfoTo:(InkCharInfo*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

