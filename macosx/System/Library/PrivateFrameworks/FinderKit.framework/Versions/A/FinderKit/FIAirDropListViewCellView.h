/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTableCellView.h>

@class FIAirDropProgressView, FI_TTextField;

@interface FIAirDropListViewCellView : NSTableCellView {

	FIAirDropProgressView* _progressView;
	FI_TTextField* _personNameTxtFld;
	TKeyValueBinder* _percentCompleteBinder;
	function<void (FIAirDropListViewCellView *)>* _clickHandler;

}

@property (retain,readonly) FI_TTextField * machineNameTxtFld; 
@property (retain,readonly) FI_TTextField * personNameTxtFld;               //@synthesize personNameTxtFld=_personNameTxtFld - In the implementation block
-(id)_hitTestWithLocalPoint:(const CGPoint*)arg1 ;
-(void)setClickHandler:(const function<void (FIAirDropListViewCellView *)>*)arg1 ;
-(FI_TTextField *)machineNameTxtFld;
-(FI_TTextField *)personNameTxtFld;
-(id)hitTest:(CGPoint)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)awakeFromNib;
-(void)mouseUp:(id)arg1 ;
@end

