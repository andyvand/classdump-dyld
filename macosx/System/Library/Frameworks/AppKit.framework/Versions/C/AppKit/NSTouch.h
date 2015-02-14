/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCopying.h>

@class NSView;

@interface NSTouch : NSObject <NSCopying> {

	long long _index;
	id _identity;
	unsigned long long _phase;
	CGPoint _normalizedPosition;
	long long _privateFlags;
	NSView* _view;
	id _reserved1;
	id _device;
	CGSize _deviceSize;

}

@property (readonly) id<NSObject><NSCopying> identity;              //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long phase;                      //@synthesize phase=_phase - In the implementation block
@property (readonly) CGPoint normalizedPosition;                    //@synthesize normalizedPosition=_normalizedPosition - In the implementation block
@property (getter=isResting,readonly) char resting; 
@property (readonly) id device;                                     //@synthesize device=_device - In the implementation block
@property (readonly) CGSize deviceSize;                             //@synthesize deviceSize=_deviceSize - In the implementation block
-(void)dealloc;
-(id)description;
-(long long)_index;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)phase;
-(id)_view;
-(CGPoint)normalizedPosition;
-(char)isResting;
-(id)_initWithPreviousTouch:(id)arg1 newPhase:(unsigned long long)arg2 position:(CGPoint)arg3 isResting:(char)arg4 ;
-(id)_initWithIndex:(long long)arg1 phase:(unsigned long long)arg2 position:(CGPoint)arg3 isResting:(char)arg4 view:(id)arg5 device:(id)arg6 deviceSize:(CGSize)arg7 ;
-(id)device;
-(id<NSObject><NSCopying>)identity;
-(id)_initWithIdentity:(id)arg1 index:(long long)arg2 phase:(unsigned long long)arg3 position:(CGPoint)arg4 isResting:(char)arg5 view:(id)arg6 device:(id)arg7 deviceSize:(CGSize)arg8 ;
-(CGSize)deviceSize;
@end

