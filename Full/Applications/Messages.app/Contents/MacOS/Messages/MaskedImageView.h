/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <AppKit/NSImageView.h>

@interface MaskedImageView : NSImageView {

	/*^block*/id _maskDrawingBlock;

}

@property (nonatomic,copy) id maskDrawingBlock;              //@synthesize maskDrawingBlock=_maskDrawingBlock - In the implementation block
-(id)maskDrawingBlock;
-(void)setMaskDrawingBlock:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
@end

