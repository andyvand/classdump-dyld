/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView {

	BOOL _ignoresContentOffsetChanges;

}

@property (assign,nonatomic) BOOL ignoresContentOffsetChanges;              //@synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges - In the implementation block
-(void)reloadData;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setIgnoresContentOffsetChanges:(BOOL)arg1 ;
-(BOOL)ignoresContentOffsetChanges;
-(BOOL)isFastAnimationAvailableForContentOffset;
@end
