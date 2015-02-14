/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <ToneKit/TKTonePickerContentViewControllerDelegate.h>
#import <ToneKit/TKTonePickerViewDelegate.h>

@protocol TKTonePickerViewControllerDelegate, TKTonePickerContentViewController;
@class TKTonePickerController, NSString, NSResponder;

@interface TKTonePickerViewController : NSViewController <TKTonePickerContentViewControllerDelegate, TKTonePickerViewDelegate> {

	char _monitoringHostingWindowClosing;
	id<TKTonePickerViewControllerDelegate> _delegate;
	unsigned long long _style;
	TKTonePickerController* _tonePickerController;
	id<TKTonePickerContentViewController> _tonePickerContentViewController;

}

@property (nonatomic,readonly) int alertType; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,readonly) unsigned long long style; 
@property (assign,nonatomic) char showsDefault; 
@property (nonatomic,copy) NSString * defaultToneIdentifier; 
@property (assign,nonatomic) char showsNone; 
@property (assign,getter=isNoneAtTop,nonatomic) char noneAtTop; 
@property (nonatomic,copy) NSString * selectedToneIdentifier; 
@property (assign,nonatomic) id<TKTonePickerViewControllerDelegate> delegate;                                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSResponder * tonePickerResponder; 
@property (assign,setter=_setStyle:,nonatomic) unsigned long long _style;                                                                                           //@synthesize style=_style - In the implementation block
@property (setter=_setTonePickerController:,nonatomic,retain) TKTonePickerController * _tonePickerController;                                                       //@synthesize tonePickerController=_tonePickerController - In the implementation block
@property (setter=_setTonePickerContentViewController:,nonatomic,retain) id<TKTonePickerContentViewController> _tonePickerContentViewController;                    //@synthesize tonePickerContentViewController=_tonePickerContentViewController - In the implementation block
@property (assign,setter=_setMonitoringHostingWindowClosing:,getter=_isMonitoringHostingWindowClosing,nonatomic) char _monitoringHostingWindowClosing;              //@synthesize monitoringHostingWindowClosing=_monitoringHostingWindowClosing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_tonePickerContentViewControllerClassForStyle:(unsigned long long)arg1 ;
-(id)initWithAlertType:(int)arg1 style:(unsigned long long)arg2 ;
-(void)setShowsDefault:(char)arg1 ;
-(NSResponder *)tonePickerResponder;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setSelectedToneIdentifier:(NSString *)arg1 ;
-(NSString *)defaultToneIdentifier;
-(unsigned long long)_style;
-(int)alertType;
-(id)initWithAlertType:(int)arg1 ;
-(void)_setStyle:(unsigned long long)arg1 ;
-(void)_setTonePickerController:(id)arg1 ;
-(void)_setTonePickerContentViewController:(id)arg1 ;
-(id<TKTonePickerContentViewController>)_tonePickerContentViewController;
-(void)_endMonitoringHostingWindowWillClose;
-(TKTonePickerController *)_tonePickerController;
-(char)showsDefault;
-(void)setDefaultToneIdentifier:(NSString *)arg1 ;
-(char)showsNone;
-(void)setShowsNone:(char)arg1 ;
-(char)isNoneAtTop;
-(void)setNoneAtTop:(char)arg1 ;
-(NSString *)selectedToneIdentifier;
-(void)_beginMonitoringHostingWindowWillClose;
-(char)_isMonitoringHostingWindowClosing;
-(void)_setMonitoringHostingWindowClosing:(char)arg1 ;
-(void)_hostingWindowWillClose:(id)arg1 ;
-(void)tonePickerContentViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(id)viewForBaselineLayoutOfTonePickerView:(id)arg1 ;
-(id)viewForSizingTonePickerView:(id)arg1 ;
-(void)setDelegate:(id<TKTonePickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)style;
-(id<TKTonePickerViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear;
-(void)viewDidAppear;
@end

