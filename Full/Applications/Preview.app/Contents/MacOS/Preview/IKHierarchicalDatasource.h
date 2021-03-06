/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IKHierarchicalDatasource
@optional
-(id)freshPasteboardContentAggregatorForImageBrowser:(id)arg1;
-(unsigned long long)imageBrowser:(id)arg1 addChildren:(id)arg2 ofItem:(id)arg3 toPasteboardDictionary:(id)arg4;
-(void)imageBrowser:(id)arg1 writeItemsFromPasteboardDictionary:(id)arg2 toPasteboard:(id)arg3;
-(id)imageBrowser:(id)arg1 removeItemsAtIndexes:(id)arg2 ofItem:(id)arg3;
-(void)imageBrowserWillBeginEditingItems:(id)arg1;
-(char)imageBrowser:(id)arg1 itemAllowsChildAddAndRemove:(id)arg2;
-(void)imageBrowserDidEndEditingItems:(id)arg1;
-(unsigned long long)imageBrowser:(id)arg1 addItems:(id)arg2 atIndex:(unsigned long long)arg3 ofItem:(id)arg4;
-(id)imageBrowser:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2;
-(id)undoManager;

@required
-(unsigned long long)imageBrowser:(id)arg1 numberOfChildrenOfItem:(id)arg2;
-(id)imageBrowser:(id)arg1 child:(unsigned long long)arg2 ofItem:(id)arg3;
-(char)imageBrowser:(id)arg1 itemHasChildren:(id)arg2;
-(id)imageBrowser:(id)arg1 groupForItem:(id)arg2;
-(id)imageBrowser:(id)arg1 parentOfChild:(id)arg2;
-(unsigned long long)imageBrowser:(id)arg1 indexOfChild:(id)arg2 ofItem:(id)arg3;

@end

