/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/NSSecureCoding.h>

@class NSString, CNLabelValuePair;

@interface CNLabeledValue : NSObject <NSSecureCoding> {

	NSString* _identifier;
	CNLabelValuePair* _labelValuePair;

}

@property (copy,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * label; 
@property (copy,readonly) id value; 
@property (readonly) CNLabelValuePair * labelValuePair;              //@synthesize labelValuePair=_labelValuePair - In the implementation block
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)emptyEntries;
+(char)isArrayOfEntries:(id)arg1 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg2 ;
+(/*^block*/id)testMatchingIdentifier:(id)arg1 ;
+(id)entryForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)labelForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)valueForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)entriesByUnifyingEntryArrays:(id)arg1 forProperty:(id)arg2 ;
+(id)entriesWithABMultiValue:(id)arg1 property:(id)arg2 ;
+(char)supportsSecureCoding;
-(id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(char)isEqualIgnoringIdentifiers:(id)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(id)labeledValueBySettingLabel:(id)arg1 ;
-(id)labeledValueBySettingValue:(id)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2 ;
-(CNLabelValuePair *)labelValuePair;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)label;
-(id)value;
@end

