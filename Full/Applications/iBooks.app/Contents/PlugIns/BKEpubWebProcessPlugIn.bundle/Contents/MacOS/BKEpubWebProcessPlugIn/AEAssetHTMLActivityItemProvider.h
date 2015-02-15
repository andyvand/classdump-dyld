/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKEpubWebProcessPlugIn.bundle/Contents/MacOS/BKEpubWebProcessPlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCommonCore/AEAssetActivityItemProviderSource.h>
#import <BKEpubWebProcessPlugIn/NSPasteboardWriting.h>
#import <BKEpubWebProcessPlugIn/IMActivityItemSource.h>

@class NSString;

@interface AEAssetHTMLActivityItemProvider : AEAssetActivityItemProviderSource <NSPasteboardWriting, IMActivityItemSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * activityType; 
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)supportedActivityTypes;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
@end
