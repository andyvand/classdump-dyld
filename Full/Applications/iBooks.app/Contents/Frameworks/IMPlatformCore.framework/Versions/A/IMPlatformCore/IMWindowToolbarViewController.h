/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/Versions/A/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol IMBookshelfController;
@class NSString, NSMutableDictionary, IMWindowToolbarBackgroundView;

@interface IMWindowToolbarViewController : NSViewController {

	unsigned long long _toolbarItemMask;
	char _sample;
	char _development;
	char _supportsStudyCards;
	char _supportsSearchPageNumber;
	NSString* _tocTitle;
	id<IMBookshelfController> _bookshelfController;
	NSMutableDictionary* _buttonViews;

}

@property (readonly) IMWindowToolbarBackgroundView * toolbarView; 
@property (assign,nonatomic) unsigned long long toolbarItemMask;                                //@synthesize toolbarItemMask=_toolbarItemMask - In the implementation block
@property (nonatomic,retain) NSString * tocTitle;                                               //@synthesize tocTitle=_tocTitle - In the implementation block
@property (assign,nonatomic) char sample;                                                       //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) char development;                                                  //@synthesize development=_development - In the implementation block
@property (assign,nonatomic) char supportsStudyCards;                                           //@synthesize supportsStudyCards=_supportsStudyCards - In the implementation block
@property (assign,nonatomic) char supportsSearchPageNumber;                                     //@synthesize supportsSearchPageNumber=_supportsSearchPageNumber - In the implementation block
@property (assign,nonatomic,__weak) id<IMBookshelfController> bookshelfController;              //@synthesize bookshelfController=_bookshelfController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * buttonViews;                                 //@synthesize buttonViews=_buttonViews - In the implementation block
-(NSString *)tocTitle;
-(char)development;
-(void)setButtonViews:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)buttonViews;
-(void)displayPopover:(id)arg1 forToolbarItemWithId:(unsigned long long)arg2 ;
-(void)setToolbarItemMask:(unsigned long long)arg1 ;
-(void)setTocTitle:(NSString *)arg1 ;
-(void)setSample:(char)arg1 ;
-(void)setDevelopment:(char)arg1 ;
-(void)setSupportsStudyCards:(char)arg1 ;
-(void)setSupportsSearchPageNumber:(char)arg1 ;
-(void)registerToolbarButtonView:(id)arg1 forType:(unsigned long long)arg2 ;
-(char)supportsStudyCards;
-(char)supportsSearchPageNumber;
-(char)sample;
-(unsigned long long)toolbarItemMask;
-(id<IMBookshelfController>)bookshelfController;
-(void)setBookshelfController:(id<IMBookshelfController>)arg1 ;
-(IMWindowToolbarBackgroundView *)toolbarView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

