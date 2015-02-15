/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/ETagObject.h>

@class NSData, CalDAVScheduleChangesProperty, NSString, ICSDocument, ICSEvent;

@interface CaliTIPMessage : NSObject <ETagObject> {

	NSData* _data;
	CalDAVScheduleChangesProperty* _scheduleChanges;
	NSString* _eTag;
	NSString* _filename;
	ICSDocument* _document;
	ICSEvent* _event;
	char _localImport;

}

@property (assign) char localImport;                                //@synthesize localImport=_localImport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)data;
-(id)document;
-(long long)compare:(id)arg1 ;
-(id)filename;
-(id)calendar;
-(id)event;
-(id)occurrences;
-(char)localImport;
-(id)masterEvent;
-(id)serverFilename;
-(id)allOccurrences;
-(id)scheduleChanges;
-(id)eTag;
-(id)initWithData:(id)arg1 filename:(id)arg2 eTag:(id)arg3 scheduleChanges:(id)arg4 ;
-(id)initWithData:(id)arg1 filename:(id)arg2 ;
-(void)setLocalImport:(char)arg1 ;
@end

