/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TTableViewItem.h>

@class NSString, NSImage, NSColor;

@interface FI_TTaggingSuggestionsTableViewItem : FI_TTableViewItem {

	long long _labelColor;
	BOOL _userVisible;
	BOOL _pinned;
	long long _sidebarIndex;
	BOOL _isShowAll;
	BOOL _isCreateTag;
	BOOL _needsCustomSelect;
	BOOL _isMoveTag;
	NSString* _tagName;

}

@property (nonatomic,retain) NSImage * image; 
@property (nonatomic,retain) NSColor * textColor; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) long long labelColor;                //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,readonly) BOOL userVisible;                    //@synthesize userVisible=_userVisible - In the implementation block
@property (nonatomic,readonly) BOOL pinned;                         //@synthesize pinned=_pinned - In the implementation block
@property (nonatomic,readonly) long long sidebarIndex;              //@synthesize sidebarIndex=_sidebarIndex - In the implementation block
@property (nonatomic,readonly) BOOL isShowAll;                      //@synthesize isShowAll=_isShowAll - In the implementation block
@property (nonatomic,readonly) BOOL isTag; 
@property (nonatomic,readonly) BOOL isCreateTag;                    //@synthesize isCreateTag=_isCreateTag - In the implementation block
@property (nonatomic,readonly) BOOL isMoveTag;                      //@synthesize isMoveTag=_isMoveTag - In the implementation block
@property (nonatomic,readonly) BOOL needsCustomSelect;              //@synthesize needsCustomSelect=_needsCustomSelect - In the implementation block
@property (nonatomic,retain) NSString * tagName;                    //@synthesize tagName=_tagName - In the implementation block
+(id)itemForTag:(id)arg1 needsCustomSelect:(BOOL)arg2 ;
+(id)showAllItem;
+(id)itemForCreateNewTag:(const TString*)arg1 ;
+(id)itemForMoveTag:(const TString*)arg1 ;
-(id)initWithTag:(id)arg1 needsCustomSelect:(BOOL)arg2 ;
-(void)setTagName:(NSString *)arg1 ;
-(long long)sidebarIndex;
-(id)colorNumber;
-(void)setColorNumber:(id)arg1 ;
-(BOOL)isTag;
-(BOOL)userVisible;
-(BOOL)pinned;
-(BOOL)isShowAll;
-(BOOL)isCreateTag;
-(BOOL)isMoveTag;
-(BOOL)needsCustomSelect;
-(NSString *)tagName;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)labelColor;
-(void)setTextColor:(NSColor *)arg1 ;
-(NSColor *)textColor;
@end

