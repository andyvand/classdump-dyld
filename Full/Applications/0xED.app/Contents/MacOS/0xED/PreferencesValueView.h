/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:10:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/0xED.app/Contents/MacOS/0xED
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <0xED/0xED-Structs.h>
#import <AppKit/NSView.h>

@class NSButton;

@interface PreferencesValueView : NSView {

	NSButton* m_pLeftBtn;
	NSButton* m_pRightBtn;
	NSButton* requireSelectionForVisualizerCtl;
	vector<NSButton *, std::allocator<NSButton *> >* m_pBtnMap;

}
-(void)reinitInterface;
-(id)installNewButtonWithFrame:(CGRect)arg1 ;
-(void)requireSelectionForVisualizerClicked:(id)arg1 ;
-(void)buttonClicked:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
@end
