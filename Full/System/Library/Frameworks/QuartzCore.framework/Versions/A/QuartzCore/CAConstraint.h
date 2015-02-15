/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/NSCoding.h>

@class NSString;

@interface CAConstraint : NSObject <NSCoding> {

	NSString* _srcId;
	unsigned _srcAttr : 16;
	unsigned _attr : 16;
	double _scale;
	double _offset;

}

@property (readonly) int attribute; 
@property (readonly) NSString * sourceName; 
@property (readonly) int sourceAttribute; 
@property (readonly) double scale; 
@property (readonly) double offset; 
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 scale:(double)arg4 offset:(double)arg5 ;
+(id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 offset:(double)arg4 ;
+(id)constraintWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)initWithAttribute:(int)arg1 relativeTo:(id)arg2 attribute:(int)arg3 scale:(double)arg4 offset:(double)arg5 ;
-(int)sourceAttribute;
-(NSString *)sourceName;
-(double)scale;
-(double)offset;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)attribute;
@end

