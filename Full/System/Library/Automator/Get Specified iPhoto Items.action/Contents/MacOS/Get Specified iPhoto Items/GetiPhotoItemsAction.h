/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:22:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Get Specified iPhoto Items.action/Contents/MacOS/Get Specified iPhoto Items
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMGetItemsAction.h>

@class ILMediaManager;

@interface GetiPhotoItemsAction : AMGetItemsAction {

	ILMediaManager* _mediaManager;

}

@property (retain) ILMediaManager * mediaManager;              //@synthesize mediaManager=_mediaManager - In the implementation block
-(id)itemsFromSavedItems:(id)arg1 ;
-(void)addSelectedItems:(id)arg1 ;
-(ILMediaManager *)mediaManager;
-(id)_itemsForMediaGroups:(id)arg1 ;
-(id)_itemsForMediaObjects:(id)arg1 ;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)updateParameters;
-(void)parametersUpdated;
-(id)initWithDefinition:(id)arg1 fromArchive:(char)arg2 ;
-(id)itemsPasteboardTypes;
-(id)itemsFromPanelController:(id)arg1 ;
-(Class)itemsPanelControllerClass;
-(id)itemsPanelNibName;
-(id)itemsFromPasteboard:(id)arg1 forTypes:(id)arg2 ;
-(void)setMediaManager:(ILMediaManager *)arg1 ;
-(id)script;
-(void)dealloc;
@end
