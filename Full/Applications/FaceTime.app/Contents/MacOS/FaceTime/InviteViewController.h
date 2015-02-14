/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol InviteViewControllerDelegate;
@interface InviteViewController : NSViewController {

	char _showsMouseOverState;
	char _ignoreMouseOver;
	id<InviteViewControllerDelegate> _delegate;
	double _cImageWidth;
	double _cMainTextTop;
	double _cMainTextLeading;
	double _cSubTextLeading;
	double _cMouseOverTextCenterY;

}

@property (assign,nonatomic) id<InviteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsMouseOverState;                               //@synthesize showsMouseOverState=_showsMouseOverState - In the implementation block
@property (assign,nonatomic) double cImageWidth;                                     //@synthesize cImageWidth=_cImageWidth - In the implementation block
@property (assign,nonatomic) double cMainTextTop;                                    //@synthesize cMainTextTop=_cMainTextTop - In the implementation block
@property (assign,nonatomic) double cMainTextLeading;                                //@synthesize cMainTextLeading=_cMainTextLeading - In the implementation block
@property (assign,nonatomic) double cSubTextLeading;                                 //@synthesize cSubTextLeading=_cSubTextLeading - In the implementation block
@property (assign,nonatomic) double cMouseOverTextCenterY;                           //@synthesize cMouseOverTextCenterY=_cMouseOverTextCenterY - In the implementation block
@property (assign,nonatomic) char ignoreMouseOver;                                   //@synthesize ignoreMouseOver=_ignoreMouseOver - In the implementation block
+(double)replyHeight;
+(double)standardHeight;
+(id)redColor:(char)arg1 ;
+(id)greenColor:(char)arg1 ;
+(id)whiteColor:(char)arg1 ;
-(void)setShowsMouseOverState:(char)arg1 ;
-(void)updateForCall:(id)arg1 ;
-(void)dismissMenus;
-(id)_textColor;
-(void)_updatePicture:(id)arg1 ;
-(id)_subFont;
-(id)_mainFont;
-(void)_updateAcceptButton;
-(void)_configureButtonText:(id)arg1 color:(id)arg2 alternateColor:(id)arg3 alignment:(unsigned long long)arg4 ;
-(void)_configureDeclinePopupMenu;
-(void)_configureTextField:(id)arg1 withText:(id)arg2 font:(id)arg3 color:(id)arg4 lineHeight:(double)arg5 ;
-(void)setCImageWidth:(double)arg1 ;
-(void)setCMainTextTop:(double)arg1 ;
-(void)setCMainTextLeading:(double)arg1 ;
-(void)setCSubTextLeading:(double)arg1 ;
-(void)setCMouseOverTextCenterY:(double)arg1 ;
-(void)remoteiMessageAddressChanged:(id)arg1 ;
-(char)showsMouseOverState;
-(char)ignoreMouseOver;
-(char)_pointButtonArea:(id)arg1 ;
-(void)_showMouseOverState:(char)arg1 forceNameDisplay:(char)arg2 ;
-(void)_showReplyWithMessage:(id)arg1 ;
-(void)_remindMeLater:(id)arg1 ;
-(double)cImageWidth;
-(double)cMainTextLeading;
-(double)cSubTextLeading;
-(void)setIgnoreMouseOver:(char)arg1 ;
-(double)cMouseOverTextCenterY;
-(double)cMainTextTop;
-(void)_configureTextField:(id)arg1 withText:(id)arg2 font:(id)arg3 color:(id)arg4 ;
-(void)decline:(id)arg1 ;
-(void)accept:(id)arg1 ;
-(void)cancelMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)_textDidChange:(id)arg1 ;
-(void)setDelegate:(id<InviteViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<InviteViewControllerDelegate>)delegate;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)mouseMoved:(id)arg1 ;
@end

