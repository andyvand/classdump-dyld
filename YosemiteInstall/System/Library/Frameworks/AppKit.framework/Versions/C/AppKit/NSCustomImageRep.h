/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImageRep.h>

@interface NSCustomImageRep : NSImageRep {

	SEL _drawMethod;
	id _drawObject;
	unsigned _reserved;

}

@property (copy,readonly) id drawingHandler; 
@property (readonly) SEL drawSelector; 
@property (readonly) id delegate; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFlipped:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)delegate;
-(char)isFlipped;
-(char)draw;
-(char)_wantsToBeCached;
-(id)initWithDrawSelector:(SEL)arg1 delegate:(id)arg2 ;
-(/*^block*/id)drawHandler;
-(id)_imageRepsForEncodingWithCoder:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 flipped:(char)arg2 drawingHandler:(/*^block*/id)arg3 ;
-(id)drawingHandler;
-(SEL)drawSelector;
-(id)initWithSize:(CGSize)arg1 flipped:(char)arg2 drawHandler:(/*^block*/id)arg3 ;
-(id)initWithDrawSelector:(SEL)arg1 delegate:(id)arg2 flipped:(char)arg3 ;
-(id)initWithSize:(CGSize)arg1 drawHandler:(/*^block*/id)arg2 ;
@end
