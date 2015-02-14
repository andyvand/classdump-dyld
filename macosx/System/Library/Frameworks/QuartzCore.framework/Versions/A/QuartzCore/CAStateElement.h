/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCopying.h>
#import <QuartzCore/NSCoding.h>

@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSCoding> {

	CALayer* _target;
	CAStateElement* _source;

}

@property (assign,nonatomic,__weak) CALayer * target;                //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) CAStateElement * source;                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath; 
+(void)CAMLParserStartElement:(id)arg1 ;
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(id)targetName;
-(char)matches:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTarget:(CALayer *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CALayer *)target;
-(NSString *)keyPath;
-(CAStateElement *)source;
-(void)setSource:(CAStateElement *)arg1 ;
-(void)apply:(id)arg1 ;
-(id)save;
@end

