/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Suggestions/Suggestions-Structs.h>
#import <AppKit/NSTableView.h>

@interface SGTCompletionTableView : NSTableView {

	char _lastMousePositionWasOverList;

}
-(char)_rowIsSelectableByUser:(long long)arg1 ;
-(id)_accessibilityDescription;
-(long long)_rowFromMouseEvent:(id)arg1 ;
-(void)_performClickForCell:(id)arg1 ;
-(void)_performCancelForCell:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(char)selectionShouldUsePrimaryColor;
-(void)mouseExited:(id)arg1 ;
-(char)_accessibilityWantsToBeList;
-(void)mouseMoved:(id)arg1 ;
-(id)_searchField;
-(void)drawRow:(long long)arg1 clipRect:(CGRect)arg2 ;
-(id)_searchFieldCell;
@end

