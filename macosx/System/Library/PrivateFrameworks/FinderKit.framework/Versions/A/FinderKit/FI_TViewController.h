/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@interface FI_TViewController : NSViewController {

	BOOL _callingLoadView;
	BOOL _loadingFromNib;
	BOOL _isViewLoaded;

}

@property (readonly) BOOL isViewLoaded;              //@synthesize isViewLoaded=_isViewLoaded - In the implementation block
-(void)initCommon;
-(void)viewLoaded;
-(id)viewNoLoad;
-(id)initWithNibName:(id)arg1 ;
-(BOOL)applyExtraKeyboardShortcuts:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)nibBundle;
-(BOOL)isViewLoaded;
@end
