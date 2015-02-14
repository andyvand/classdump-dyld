/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <Automator/NSCopying.h>

@class NSImage, NSString, NSMutableArray, NSArray;

@interface AMGroup : NSObject <NSCopying> {

	NSImage* _smallIcon;
	NSImage* _largeIcon;
	NSString* _name;
	NSMutableArray* _assets;
	char _useSmallIcon;
	char _readOnly;
	char _isExpanded;
	AMGroup* _parentGroup;
	NSMutableArray* _childGroups;
	NSArray* _assetSortDescriptors;
	NSString* _type;

}
+(id)groupWithName:(id)arg1 smallIcon:(id)arg2 largeIcon:(id)arg3 ;
+(id)groupWithName:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)setLargeIcon:(id)arg1 ;
-(id)largeIcon;
-(id)initWithName:(id)arg1 smallIcon:(id)arg2 largeIcon:(id)arg3 ;
-(void)setSmallIcon:(id)arg1 ;
-(void)addChildGroup:(id)arg1 ;
-(id)childGroups;
-(void)removeChildGroup:(id)arg1 ;
-(id)assets;
-(void)setAssets:(id)arg1 ;
-(void)setChildGroups:(id)arg1 ;
-(id)assetSortDescriptors;
-(void)setAssetSortDescriptors:(id)arg1 ;
-(char)useSmallIcon;
-(void)setUseSmallIcon:(char)arg1 ;
-(void)willChangeAssets;
-(void)didChangeAssets;
-(void)willChangeGroups;
-(void)didChangeGroups;
-(void)insertChildGroup:(id)arg1 atIndex:(long long)arg2 ;
-(long long)numberOfAssets;
-(void)insertAsset:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeAsset:(id)arg1 ;
-(void)describeInto:(id)arg1 withDepth:(long long)arg2 ;
-(char)isLeafGroup;
-(id)lineage;
-(id)ancestors;
-(long long)indexOfGroup:(id)arg1 ;
-(id)firstChildGroupWithDisplayName:(id)arg1 ;
-(long long)numberOfChildGroups;
-(id)deepAssets;
-(void)addAsset:(id)arg1 ;
-(void)removeAllAssets;
-(char)containsAsset:(id)arg1 ;
-(char)containsAssetWithIdentifier:(id)arg1 ;
-(long long)localizedCaseInsensitiveCompareForActionCategories:(id)arg1 ;
-(long long)localizedCaseInsensitiveCompareForVariableCategories:(id)arg1 ;
-(void)setReadOnly:(char)arg1 ;
-(char)isReadOnly;
-(id)parentGroup;
-(id)smallIcon;
-(void)setParentGroup:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)icon;
-(id)type;
-(long long)compare:(id)arg1 ;
-(id)indexPath;
-(void)setType:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(char)isExpanded;
-(long long)depth;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(void)setIsExpanded:(char)arg1 ;
@end

