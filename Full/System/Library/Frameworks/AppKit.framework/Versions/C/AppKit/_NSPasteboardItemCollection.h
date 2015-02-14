/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface _NSPasteboardItemCollection : NSObject {

	NSMapTable* _sparsePasteboardItems;
	long long _cachedItemGenerationCount;

}
-(id)init;
-(void)dealloc;
-(void)_addPasteboardItem:(id)arg1 atIndex:(unsigned long long)arg2 generationCount:(long long)arg3 ;
-(id)_pasteboardItemAtIndex:(unsigned long long)arg1 pasteboard:(id)arg2 generationCount:(long long)arg3 ;
-(id)_pasteboardItemsWithItemCount:(unsigned long long)arg1 pasteboard:(id)arg2 generationCount:(long long)arg3 ;
@end

