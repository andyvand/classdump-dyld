/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIScrollView.h>

@class MFComposeHeaderView, MFComposeSubjectView;

@interface _MFMailComposePlaceholderView : UIScrollView {

	MFComposeHeaderView* _toField;
	MFComposeHeaderView* _multiView;
	MFComposeSubjectView* _subjectView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSubject:(id)arg1 ;
@end
