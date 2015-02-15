/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:56 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/iTunes.app/Contents/MacOS/iTunes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunes/iTunes-Structs.h>
#import <AppKit/NSView.h>
#import <iTunes/ITViewAssociating.h>

@interface ITBackingHostView : NSView <ITViewAssociating> {

	weak_ptr<ITView>* _owner;
	unsigned long long _accessibilityCapacityHint;
	char _accessibilityIgnored;
	char _debugDrawing;

}

@property (assign,nonatomic) shared_ptr<ITView>* owner; 
@property (assign,nonatomic) char ignored;                           //@synthesize accessibilityIgnored=_accessibilityIgnored - In the implementation block
@property (assign,nonatomic) char debugDrawing;                      //@synthesize debugDrawing=_debugDrawing - In the implementation block
-(char)ignored;
-(void)setIgnored:(char)arg1 ;
-(unsigned long long)accessibilityCapacityHint;
-(shared_ptr<ITView>*)associatedITView;
-(char)debugDrawing;
-(void)setDebugDrawing:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityShouldUseUniqueId;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(char)isFlipped;
-(void)viewWillDraw;
-(char)isOpaque;
-(char)allowsVibrancy;
-(char)acceptsFirstMouse:(id)arg1 ;
-(CGRect)_opaqueRect;
-(char)mouseDownCanMoveWindow;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(void)setOwner:(shared_ptr<ITView>*)arg1 ;
-(shared_ptr<ITView>*)owner;
@end
