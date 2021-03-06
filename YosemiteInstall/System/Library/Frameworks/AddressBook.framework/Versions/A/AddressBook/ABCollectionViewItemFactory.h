/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABCardViewStyleProvider, ABCollectionRowViewFactory;

@interface ABCollectionViewItemFactory : NSObject {

	char _shouldFormatURLs;
	char _shouldShowActionMenu;
	ABCardViewStyleProvider* _styleProvider;
	ABCollectionRowViewFactory* _rowViewFactory;
	ABCollectionRowViewFactory* _rowViewEditModeFactory;

}

@property (assign,nonatomic) char shouldFormatURLs;                                //@synthesize shouldFormatURLs=_shouldFormatURLs - In the implementation block
@property (assign,nonatomic) char shouldShowActionMenu;                            //@synthesize shouldShowActionMenu=_shouldShowActionMenu - In the implementation block
@property (assign,nonatomic) char shouldBuildActionGlyphs; 
@property (nonatomic,retain) ABCardViewStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
+(void)addItemToPool:(id)arg1 ;
+(id)itemFromPoolWithKey:(id)arg1 ;
+(id)actionsForItem:(id)arg1 ;
+(id)defaultLunarCalendar;
+(id)debugDateFormatterLocale;
+(void)initialize;
-(ABCardViewStyleProvider *)styleProvider;
-(void)setStyleProvider:(ABCardViewStyleProvider *)arg1 ;
-(char)shouldShowActionMenu;
-(void)setShouldShowActionMenu:(char)arg1 ;
-(void)setShouldFormatURLs:(char)arg1 ;
-(void)setShouldBuildActionGlyphs:(char)arg1 ;
-(char)shouldBuildActionGlyphs;
-(id)phoneCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)emailCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)birthdayCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)alternateBirthdayCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)otherDatesCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)instantMessageCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)socialProfileCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)urlCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)relatedNamesCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)maidenNameCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)notesCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)addressesCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)linkedPersonCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)preferredNameCollectionItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)alertToneCollectionItemForMultiValue:(id)arg1 key:(id)arg2 index:(unsigned long long)arg3 delegate:(id)arg4 ;
-(id)faceTimeActionsItemForMultiValue:(id)arg1 index:(unsigned long long)arg2 delegate:(id)arg3 ;
-(char)shouldFormatURLs;
-(id)collectionItemForKey:(id)arg1 multiValue:(id)arg2 index:(unsigned long long)arg3 delegate:(id)arg4 ;
-(id)init;
-(void)dealloc;
@end

