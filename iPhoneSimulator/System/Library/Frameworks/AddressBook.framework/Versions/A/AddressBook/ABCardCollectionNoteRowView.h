/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABCardCollectionRowView.h>
#import <AddressBook/ABNoteTextViewDelegate.h>
#import <AddressBook/NSTextViewDelegate.h>

@class NSArray, NSString;

@interface ABCardCollectionNoteRowView : ABCardCollectionRowView <ABNoteTextViewDelegate, NSTextViewDelegate> {

	NSArray* _noteConstraints;

}

@property (assign,nonatomic) unsigned long long noteInsertionPoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)rangeComparator;
-(void)highlightSearchTerms:(id)arg1 ;
-(void)setValueView:(id)arg1 ;
-(void)textViewDidBecomeFirstResponder:(id)arg1 ;
-(void)textViewDidResignFirstResponder:(id)arg1 ;
-(id)noteTextView;
-(id)topAlignmentConstraints;
-(id)pinTrailingEdgeConstraints;
-(char)isValidRange:(NSRange)arg1 ;
-(id)valueTextView;
-(unsigned long long)maxInsertionPoint;
-(id)rangesMatchingSearchTerms:(id)arg1 ;
-(id)unionedRangeValues:(id)arg1 ;
-(void)updateValueFontWithFont:(id)arg1 ;
-(void)applyValueTextColor:(id)arg1 ;
-(unsigned long long)noteInsertionPoint;
-(void)setNoteInsertionPoint:(unsigned long long)arg1 ;
-(void)setValueEditable:(char)arg1 ;
-(char)hasValue;
-(void)frameDidChange:(id)arg1 ;
-(void)dealloc;
-(void)updateConstraints;
-(void)mouseDown:(id)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)textDidEndEditing:(id)arg1 ;
-(void)setSelectedRanges:(id)arg1 ;
@end

