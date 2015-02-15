/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/FilesystemEmailImporter.h>
#import <Mail/MFAddProgressMonitor.h>

@class ImportItem, NSString;

@interface MailEmailImporter : FilesystemEmailImporter <MFAddProgressMonitor> {

	ImportItem* _currentItem;
	unsigned long long _currentItemMessageIndex;
	unsigned long long _currentItemMessageCount;
	unsigned long long _currentBlockSize;

}

@property (assign,nonatomic,__weak) ImportItem * currentItem;                         //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) unsigned long long currentItemMessageIndex;              //@synthesize currentItemMessageIndex=_currentItemMessageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long currentItemMessageCount;              //@synthesize currentItemMessageCount=_currentItemMessageCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentBlockSize;                     //@synthesize currentBlockSize=_currentBlockSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)explanatoryText;
+(id)name;
-(char)isValidMailbox:(id)arg1 ;
-(id)mailboxNameForImportItem:(id)arg1 ;
-(id)pathExtensions;
-(id)prepareForImport;
-(void)setCurrentItemMessageCount:(unsigned long long)arg1 ;
-(void)setCurrentItemMessageIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentItemMessageIndex;
-(void)setCurrentBlockSize:(unsigned long long)arg1 ;
-(unsigned long long)currentBlockSize;
-(unsigned long long)currentItemMessageCount;
-(void)setCurrentItem:(ImportItem *)arg1 ;
-(ImportItem *)currentItem;
-(void)setFractionDone:(double)arg1 ;
-(void)importMailbox:(id)arg1 ;
@end
