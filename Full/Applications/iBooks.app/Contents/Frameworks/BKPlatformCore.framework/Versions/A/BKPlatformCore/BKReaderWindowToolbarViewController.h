/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKPlatformCore.framework/Versions/A/BKPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKPlatformCore/BKPlatformCore-Structs.h>
#import <IMPlatformCore/IMWindowToolbarViewController.h>

@class IMFourStateImageButton, IMCustomButton;

@interface BKReaderWindowToolbarViewController : IMWindowToolbarViewController {

	IMFourStateImageButton* _bookmarkButton;
	IMCustomButton* _devices;
	char _bookstoreDisabled;
	long long _colorThemeCode;
	id _preferenceDidChangeObservation;

}

@property (assign,nonatomic) long long colorThemeCode;                       //@synthesize colorThemeCode=_colorThemeCode - In the implementation block
@property (assign,nonatomic) char bookstoreDisabled;                         //@synthesize bookstoreDisabled=_bookstoreDisabled - In the implementation block
@property (nonatomic,retain) id preferenceDidChangeObservation;              //@synthesize preferenceDidChangeObservation=_preferenceDidChangeObservation - In the implementation block
+(id)createControlWithImages:(id)arg1 size:(CGSize)arg2 target:(id)arg3 action:(SEL)arg4 dropDownAction:(SEL)arg5 lockOutFade:(char)arg6 toolTip:(id)arg7 dropDownToolTip:(id)arg8 ;
+(id)createControlWithImages:(id)arg1 height:(double)arg2 target:(id)arg3 action:(SEL)arg4 toolTip:(id)arg5 ;
+(id)createControlWithImages:(id)arg1 height:(double)arg2 target:(id)arg3 action:(SEL)arg4 dropDownAction:(SEL)arg5 lockOutFade:(char)arg6 toolTip:(id)arg7 dropDownToolTip:(id)arg8 ;
+(id)createControlWithImages:(id)arg1 size:(CGSize)arg2 target:(id)arg3 action:(SEL)arg4 toolTip:(id)arg5 ;
-(void)setToolbarItemMask:(unsigned long long)arg1 ;
-(void)setTocTitle:(id)arg1 ;
-(void)setSample:(char)arg1 ;
-(void)setDevelopment:(char)arg1 ;
-(void)setSupportsStudyCards:(char)arg1 ;
-(void)setSupportsSearchPageNumber:(char)arg1 ;
-(void)_updateStoreAvailability;
-(long long)colorThemeCode;
-(id)_fadedTitleColor;
-(id)_titleForString:(id)arg1 faded:(char)arg2 ;
-(void)_updateBuyButton;
-(void)updateColorTheme;
-(void)_updateToolbar;
-(char)bookstoreDisabled;
-(void)setBookstoreDisabled:(char)arg1 ;
-(void)setColorThemeCode:(long long)arg1 ;
-(id)preferenceDidChangeObservation;
-(void)setPreferenceDidChangeObservation:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

