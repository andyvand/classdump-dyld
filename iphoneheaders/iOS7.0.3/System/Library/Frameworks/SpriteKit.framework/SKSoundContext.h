/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKSoundContext : NSObject {

	ALCdevice_structRef _device;
	ALCcontext_structRef _context;

}

@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint listenerPosition; 
+(id)context;
+(id)currentContext;
-(void)makeCurrentContext;
-(CGPoint)listenerPosition;
-(void)setListenerPosition:(CGPoint)arg1 ;
-(double)gain;
-(void)setGain:(double)arg1 ;
-(void)dealloc;
-(id)init;
@end
