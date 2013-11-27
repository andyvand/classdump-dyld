/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextViewInteractableItem.h>

@class NSURL;

@interface _UITextViewInteractableLink : _UITextViewInteractableItem {

	NSURL* _link;

}

@property (nonatomic,retain) NSURL * link;              //@synthesize link=_link - In the implementation block
+(id)interactableLinkWithURL:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(BOOL)allowInteraction;
-(id)defaultAction;
-(id)localizedTitle;
-(id)actions;
-(void)setLink:(id)arg1 ;
-(id)link;
-(id)dataDetectorActionsForTextView:(id)arg1 ;
-(id)linkActions;
-(void)_linkInteractionOpenURL;
-(void)_linkInteractionAddToReadingList;
-(void)_linkInteractionCopyLink;
-(void)_dataDetectorAction:(id)arg1 ;
@end
