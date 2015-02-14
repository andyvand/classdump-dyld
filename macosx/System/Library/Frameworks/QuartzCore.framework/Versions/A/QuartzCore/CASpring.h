/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCopying.h>
#import <QuartzCore/NSMutableCopying.h>
#import <QuartzCore/NSCoding.h>

@class NSString, CALayer, CAValueFunction;

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	NSString* _name;
	CALayer* _layerA;
	CALayer* _layerB;
	CGPoint _attachmentPointA;
	CGPoint _attachmentPointB;
	CAValueFunction* _function;
	double _stiffness;
	double _damping;
	double _restLength;
	char _enabled;
	id _delegate;
	void* _priv;

}

@property (copy) NSString * name; 
@property (getter=isEnabled) char enabled; 
@property (retain) CALayer * layerA; 
@property (retain) CALayer * layerB; 
@property (assign) CGPoint attachmentPointA; 
@property (assign) CGPoint attachmentPointB; 
@property (retain) CAValueFunction * function; 
@property (assign) double restLength; 
@property (assign) double stiffness; 
@property (assign) double damping; 
@property (__weak) id delegate; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)attributesForKey:(id)arg1 ;
+(id)spring;
+(id)properties;
+(id)defaultValueForKey:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(id)attributesForKeyPath:(id)arg1 ;
-(void)setFunction:(CAValueFunction *)arg1 ;
-(CALayer *)layerA;
-(void)setLayerA:(CALayer *)arg1 ;
-(CALayer *)layerB;
-(void)setLayerB:(CALayer *)arg1 ;
-(CGPoint)attachmentPointA;
-(void)setAttachmentPointA:(CGPoint)arg1 ;
-(CGPoint)attachmentPointB;
-(void)setAttachmentPointB:(CGPoint)arg1 ;
-(double)restLength;
-(void)setRestLength:(double)arg1 ;
-(CAValueFunction *)function;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)delegate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(double)stiffness;
-(double)damping;
@end

