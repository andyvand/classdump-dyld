/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:39:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Grapher.app/Contents/MacOS/Grapher
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Grapher/CPModalDialog.h>

@class GSpace, NSMutableArray;

@interface CPSpaceAxisNameDialog : CPModalDialog {

	GSpace* mSpace;
	NSMutableArray* mAxes;
	NSMutableArray* mItems;

}
-(void)dialogDidOK;
-(char)dialogShouldOK;
-(void)dialogDidClose;
-(id)spaceAxisNameItems;
-(void)showWithSpace:(id)arg1 viewController:(id)arg2 ;
-(void)dealloc;
-(void)awakeFromNib;
@end
