/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSearchField, NSMenu;

@interface FBSearchController : NSObject {

	NSSearchField* searchField;
	NSMenu* searchPopupMenu;

}
+(id)sharedSearchController;
-(id)filterFaces:(id)arg1 ;
-(long long)searchMode;
-(void)triggerSearch:(id)arg1 ;
-(void)_setSearchMode:(long long)arg1 ;
-(char)_isValidSearchMode:(long long)arg1 ;
-(void)searchPopupChanged:(id)arg1 ;
-(id)searchField;
-(void)_updateMenu;
-(id)init;
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
-(void)awakeFromNib;
-(id)searchString;
-(void)cancelSearch;
@end

