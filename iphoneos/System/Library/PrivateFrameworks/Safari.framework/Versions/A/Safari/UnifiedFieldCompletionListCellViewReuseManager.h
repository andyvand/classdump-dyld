/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSCountedSet, NSNib;

@interface UnifiedFieldCompletionListCellViewReuseManager : NSObject {

	NSMutableDictionary* _viewArraysByClass;
	NSCountedSet* _viewIndicesByClass;
	NSNib* _parsecNib;
	NSMutableDictionary* _parsecViewsByIdentifier;

}
+(id)sharedManager;
-(id)_nextCellViewOfClass:(Class)arg1 ;
-(id)_identifierForParsecCellViewType:(int)arg1 ;
-(id)_parsecNib;
-(id)_createCellViewWithIdentifier:(id)arg1 fromNib:(id)arg2 ;
-(id)nextHeaderCellView;
-(id)nextImageAndTextCellView;
-(id)nextTextCellView;
-(id)parsecCellViewOfType:(int)arg1 ;
-(void)prepareForReload;
-(id)_test_headerCellViewIdentifier;
-(id)_test_tableCellViewIdentifier;
-(id)_test_viewArraysByClass;
-(id)_test_viewIndicesByClass;
-(id)_test_nextCellViewOfClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_init;
@end

