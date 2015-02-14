/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABCardViewMultiValue.h>

@protocol ABCardViewMultiValue <NSObject,NSCopying,NSMutableCopying>
@required
-(id)identifierAtIndex:(unsigned long long)arg1;
-(char)isValueEmptyAtIndex:(unsigned long long)arg1;
-(ABCardActionMultiValueIdentifier*)cardActionIdentifierForMultiValueIdentifier:(id)arg1;
-(char)isReadOnlyIndex:(unsigned long long)arg1;
-(id)availableLabels;
-(id)accountBadgeAtIndex:(unsigned long long)arg1;
-(char)isPrivateValueIndex:(unsigned long long)arg1;
-(id)multiValueByUpdatingWithBlock:(/*^block*/id)arg1;
-(char)customLabelsSupportedAtIndex:(unsigned long long)arg1;
-(id)localizedLabelAtIndex:(unsigned long long)arg1;
-(id)availableLabelsAtIndex:(unsigned long long)arg1;
-(id)defaultLabel;
-(char)hasEmptyValue;
-(id)initialLabels;
-(char)isDuplicateIndex:(unsigned long long)arg1;
-(unsigned long long)indexOfValueForIdentifier:(id)arg1;
-(id)labelAtIndex:(unsigned long long)arg1;
-(id)labels;
-(id)identifiers;
-(unsigned long long)count;
-(id)values;
-(id)key;
-(id)valueAtIndex:(unsigned long long)arg1;

@end


@protocol ABCardViewProperty;
@class NSMutableArray, NSArray, ABCardViewPersonMapper, NSString;

@interface ABCardViewMultiValue : NSObject <ABCardViewMultiValue> {

	NSMutableArray* _entries;
	NSMutableArray* _removedEntryIdentifiers;
	NSArray* _personIdentifiers;
	id<ABCardViewProperty> _property;
	ABCardViewPersonMapper* _personMapper;

}

@property (nonatomic,retain) ABCardViewPersonMapper * personMapper;              //@synthesize personMapper=_personMapper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)multiValueWithLabel:(id)arg1 value:(id)arg2 property:(id)arg3 ;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(id)labelForIdentifier:(id)arg1 ;
-(char)isValueEmptyAtIndex:(unsigned long long)arg1 ;
-(ABCardActionMultiValueIdentifier)cardActionIdentifierForMultiValueIdentifier:(id)arg1 ;
-(char)isReadOnlyIndex:(unsigned long long)arg1 ;
-(id)availableLabels;
-(id)accountBadgeAtIndex:(unsigned long long)arg1 ;
-(char)isPrivateValueIndex:(unsigned long long)arg1 ;
-(id)multiValueByUpdatingWithBlock:(/*^block*/id)arg1 ;
-(char)customLabelsSupportedAtIndex:(unsigned long long)arg1 ;
-(id)localizedLabelAtIndex:(unsigned long long)arg1 ;
-(id)availableLabelsAtIndex:(unsigned long long)arg1 ;
-(id)defaultLabel;
-(id)initWithMultiValue:(id)arg1 ;
-(char)hasEmptyValue;
-(id)initialLabels;
-(char)isDuplicateIndex:(unsigned long long)arg1 ;
-(id)personIdentifiersAtIndex:(unsigned long long)arg1 ;
-(id)removedEntryIdentifiers;
-(void)setPersonMapper:(ABCardViewPersonMapper *)arg1 ;
-(unsigned long long)indexOfValueForIdentifier:(id)arg1 ;
-(id)multiValueIdentifiersAtIndex:(unsigned long long)arg1 ;
-(id)personIdentifierAtIndex:(unsigned long long)arg1 ;
-(id)multiValueIdentifierAtIndex:(unsigned long long)arg1 ;
-(id)availableLabelsForPersonIdentifier:(id)arg1 ;
-(id)initialLabelsForPersonIdentifier:(id)arg1 ;
-(id)constraintForPersonIdentifier:(id)arg1 ;
-(char)containsValue:(id)arg1 ;
-(id)firstValueForLabel:(id)arg1 ;
-(id)valuesForLabel:(id)arg1 ;
-(void)eachEntry:(/*^block*/id)arg1 ;
-(ABCardViewPersonMapper *)personMapper;
-(id)entries;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(id)labels;
-(id)initWithProperty:(id)arg1 ;
-(id)identifiers;
-(id)entryAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(NSString *)description;
-(id)values;
-(char)isEqual:(id)arg1 ;
-(id)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)valueForIdentifier:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
@end

