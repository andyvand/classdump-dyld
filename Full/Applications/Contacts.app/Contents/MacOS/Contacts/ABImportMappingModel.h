/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface ABImportMappingModel : NSObject {

	NSMutableArray* _importMappings;
	NSMutableDictionary* _dateFormattersForThreads;

}
-(id)initWithFirstCardData:(id)arg1 foundMapping:(char*)arg2 ;
-(id)addressMappingWithColumn:(long long)arg1 allColumns:(id)arg2 columnAlreadyMappedTable:(id)arg3 ;
-(id)mappingWithColumnName:(id)arg1 alreadyMapped:(id)arg2 ;
-(void)setMapping:(id)arg1 row:(long long)arg2 ;
-(id)mappingAtRow:(long long)arg1 ;
-(void)importMappingModified:(id)arg1 ;
-(void)notifyMapping:(id)arg1 changed:(id)arg2 row:(long long)arg3 ;
-(long long)rowWhereRowIsMappedInAddress:(long long)arg1 localizedAddressMappings:(id)arg2 ;
-(id)initWithFirstCardData:(id)arg1 ;
-(char)mappingIsUsed:(id)arg1 ;
-(unsigned long long)rowOfMapping:(id)arg1 ;
-(char)isMultiValueAtRow:(long long)arg1 ;
-(char)isAddressAtRow:(long long)arg1 ;
-(char)isRowMappedInAddress:(long long)arg1 localizedAddressMappings:(id)arg2 ;
-(id)columnDataForAddressMapping:(id)arg1 rowData:(id)arg2 mapping:(id)arg3 ;
-(void)addValue:(char)arg1 data:(id)arg2 inDictionary:(id)arg3 forMultiValue:(id)arg4 ;
-(id)addressDictionaryForMapping:(id)arg1 rowData:(id)arg2 localizedAddressMappings:(id)arg3 ;
-(id)instantMessageDictionaryForMapping:(id)arg1 data:(id)arg2 ;
-(id)socialProfileDictionaryForMapping:(id)arg1 data:(id)arg2 ;
-(id)personWithRowData:(id)arg1 localizedAddressMappings:(id)arg2 addressBook:(id)arg3 ;
-(id)addressLabelWithColumnName:(id)arg1 ;
-(long long)indexOfNextMatchingColumnWithProperty:(id)arg1 label:(id)arg2 startingWith:(long long)arg3 columns:(id)arg4 columnAlreadyMappedTable:(id)arg5 ;
-(char)property:(id)arg1 matchesColumnName:(id)arg2 alreadyMapped:(id)arg3 ;
-(id)phoneLabelWithColumnName:(id)arg1 ;
-(id)emailLabelWithColumnName:(id)arg1 ;
-(id)dateLabelWithColumnName:(id)arg1 ;
-(id)relatedLabelWithColumnName:(id)arg1 ;
-(id)dateFormatter;
-(void)finalize;
-(void)dealloc;
@end

