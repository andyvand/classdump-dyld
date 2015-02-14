+[MSXPCInterfaceConfigurator configureMailServiceProtocolInterface:]
+[MSAccount supportsSecureCoding]
-[MSAccount initWithAddresses:userName:uniqueID:]
-[MSAccount initWithCoder:]
-[MSAccount encodeWithCoder:]
-[MSAccount addresses]
-[MSAccount setAddresses:]
-[MSAccount userName]
-[MSAccount setUserName:]
-[MSAccount uniqueID]
-[MSAccount setUniqueID:]
-[MSAccount disableRecentsSync]
-[MSAccount setDisableRecentsSync:]
-[MSAccount .cxx_destruct]
+[MSAttachment supportsSecureCoding]
-[MSAttachment initWithData:filename:]
-[MSAttachment initWithCoder:]
-[MSAttachment encodeWithCoder:]
-[MSAttachment contentID]
-[MSAttachment data]
-[MSAttachment setData:]
-[MSAttachment filename]
-[MSAttachment setFilename:]
-[MSAttachment contentIDWithoutScheme]
-[MSAttachment isReferenced]
-[MSAttachment setIsReferenced:]
-[MSAttachment .cxx_destruct]
___MSCanSendMail_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[MSClient defaultClient]
___25+[MSClient defaultClient]_block_invoke
-[MSClient init]
-[MSClient dealloc]
-[MSClient echo:reply:]
-[MSClient getAccounts:]
-[MSClient sendMessageWithModel:options:reply:]
___47-[MSClient sendMessageWithModel:options:reply:]_block_invoke
___47-[MSClient sendMessageWithModel:options:reply:]_block_invoke_2
___copy_helper_block_92
___destroy_helper_block_93
___copy_helper_block_97
___destroy_helper_block_98
-[MSClient saveMessageWithModel:reply:]
___39-[MSClient saveMessageWithModel:reply:]_block_invoke
___39-[MSClient saveMessageWithModel:reply:]_block_invoke_2
___copy_helper_block_102
___destroy_helper_block_103
___copy_helper_block_106
___destroy_helper_block_107
-[MSClient _asyncGenerateStringsAndAttachmentsIfNecessaryForModel:completionHandler:]
___85-[MSClient _asyncGenerateStringsAndAttachmentsIfNecessaryForModel:completionHandler:]_block_invoke
___copy_helper_block_142
___destroy_helper_block_143
-[MSClient getMessagesWithCriterion:resultKeys:inboxesOnly:maximumResults:reply:]
-[MSClient markMessage:asRead:withReply:]
-[MSClient _proxy]
___18-[MSClient _proxy]_block_invoke
-[MSClient connection]
-[MSClient .cxx_destruct]
+[MSCriterion supportsSecureCoding]
-[MSCriterion initWithType:qualifier:expression:]
-[MSCriterion initWithCoder:]
-[MSCriterion encodeWithCoder:]
-[MSCriterion description]
-[MSCriterion type]
-[MSCriterion setType:]
-[MSCriterion qualifier]
-[MSCriterion setQualifier:]
-[MSCriterion expression]
-[MSCriterion setExpression:]
-[MSCriterion allRequired]
-[MSCriterion setAllRequired:]
-[MSCriterion .cxx_destruct]
+[MSEmailModel supportsSecureCoding]
-[MSEmailModel initWithCoder:]
-[MSEmailModel encodeWithCoder:]
-[MSEmailModel toRecipients]
-[MSEmailModel setToRecipients:]
-[MSEmailModel CCRecipients]
-[MSEmailModel setCCRecipients:]
-[MSEmailModel BCCRecipients]
-[MSEmailModel setBCCRecipients:]
-[MSEmailModel fromAddress]
-[MSEmailModel setFromAddress:]
-[MSEmailModel subject]
-[MSEmailModel setSubject:]
-[MSEmailModel htmlStringsAndAttachments]
-[MSEmailModel setHtmlStringsAndAttachments:]
-[MSEmailModel webDocument]
-[MSEmailModel setWebDocument:]
-[MSEmailModel originalReferenceID]
-[MSEmailModel setOriginalReferenceID:]
-[MSEmailModel sendType]
-[MSEmailModel setSendType:]
-[MSEmailModel .cxx_destruct]
-[MSExternalAction init]
-[MSExternalAction _initWithSequenceNumber:]
-[MSExternalAction remote]
-[MSExternalAction setRemote:]
-[MSExternalAction sequenceNumber]
-[MSExternalAction setSequenceNumber:]
+[MSExternalAction(CoreData) entityName]
-[MSExternalAction(CoreData) initWithManagedObject:]
-[MSExternalAction(CoreData) managedObjectForContext:]
-[MSExternalAppendAction init]
-[MSExternalAppendAction initWithMessage:account:mailboxType:mailboxPath:]
-[MSExternalAppendAction initWithMessage:account:mailboxType:]
-[MSExternalAppendAction message]
-[MSExternalAppendAction account]
-[MSExternalAppendAction mailboxType]
-[MSExternalAppendAction mailboxPath]
-[MSExternalAppendAction .cxx_destruct]
+[MSExternalAppendAction(CoreData) entityName]
-[MSExternalAppendAction(CoreData) initWithManagedObject:]
-[MSExternalAppendAction(CoreData) managedObjectForContext:]
-[MSExternalLibraryMessageAction init]
-[MSExternalLibraryMessageAction initWithLibraryID:]
-[MSExternalLibraryMessageAction libraryID]
+[MSExternalLibraryMessageAction(CoreData) entityName]
-[MSExternalLibraryMessageAction(CoreData) initWithManagedObject:]
-[MSExternalLibraryMessageAction(CoreData) managedObjectForContext:]
-[MSExternalSetFlagsAction initWithLibraryID:]
-[MSExternalSetFlagsAction initWithLibraryID:flagName:flagValue:]
-[MSExternalSetFlagsAction flagName]
-[MSExternalSetFlagsAction flagValue]
-[MSExternalSetFlagsAction .cxx_destruct]
+[MSExternalSetFlagsAction(CoreData) entityName]
-[MSExternalSetFlagsAction(CoreData) initWithManagedObject:]
-[MSExternalSetFlagsAction(CoreData) managedObjectForContext:]
+[MSExternalUpdatesManager allocWithZone:]
+[MSExternalUpdatesManager sharedInstance]
___42+[MSExternalUpdatesManager sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MSExternalUpdatesManager init]
-[MSExternalUpdatesManager dealloc]
-[MSExternalUpdatesManager addAction:]
-[MSExternalUpdatesManager existingActionsForLibraryMessageWithID:]
-[MSExternalUpdatesManager nextSequenceNumber]
___46-[MSExternalUpdatesManager nextSequenceNumber]_block_invoke
___copy_helper_block_177
___destroy_helper_block_178
-[MSExternalUpdatesManager _localActionAdded:]
-[MSExternalUpdatesManager processLocalActions]
___47-[MSExternalUpdatesManager processLocalActions]_block_invoke
___copy_helper_block_195
___destroy_helper_block_196
-[MSExternalUpdatesManager _processLocalAppendAction:]
-[MSExternalUpdatesManager _processLocalSetFlagsAction:]
-[MSExternalUpdatesManager _flagsChanged:]
___42-[MSExternalUpdatesManager _flagsChanged:]_block_invoke
___copy_helper_block_268
___destroy_helper_block_269
-[MSExternalUpdatesManager _managedObjectContext]
-[MSExternalUpdatesManager persistentStoreCoordinator]
-[MSExternalUpdatesManager operationQueue]
-[MSExternalUpdatesManager isMail]
-[MSExternalUpdatesManager .cxx_destruct]
+[MSMessage supportsSecureCoding]
-[MSMessage initWithDateReceived:dateSent:sender:subject:toRecipients:CCRecipients:snippet:messageID:path:messageFlags:libraryID:isRead:]
+[MSMessage toOrCCRecipientsAllowedClasses]
___43+[MSMessage toOrCCRecipientsAllowedClasses]_block_invoke
-[MSMessage initWithCoder:]
-[MSMessage encodeWithCoder:]
-[MSMessage description]
-[MSMessage dateReceived]
-[MSMessage setDateReceived:]
-[MSMessage dateSent]
-[MSMessage setDateSent:]
-[MSMessage sender]
-[MSMessage setSender:]
-[MSMessage subject]
-[MSMessage setSubject:]
-[MSMessage toRecipients]
-[MSMessage setToRecipients:]
-[MSMessage CCRecipients]
-[MSMessage setCCRecipients:]
-[MSMessage snippet]
-[MSMessage setSnippet:]
-[MSMessage messageID]
-[MSMessage setMessageID:]
-[MSMessage path]
-[MSMessage setPath:]
-[MSMessage messageFlags]
-[MSMessage setMessageFlags:]
-[MSMessage libraryID]
-[MSMessage setLibraryID:]
-[MSMessage isRead]
-[MSMessage setIsRead:]
-[MSMessage .cxx_destruct]
GCC_except_table0
___block_descriptor_tmp
___block_descriptor_tmp11
___block_literal_global
___block_descriptor_tmp95
___block_descriptor_tmp99
___block_descriptor_tmp104
___block_descriptor_tmp108
___block_descriptor_tmp144
___block_descriptor_tmp154
___block_literal_global155
___block_descriptor_tmp
___block_descriptor_tmp179
___block_descriptor_tmp197
___block_descriptor_tmp270
___block_descriptor_tmp
___block_literal_global
_OBJC_IVAR_$_MSAccount._addresses
_OBJC_IVAR_$_MSAccount._userName
_OBJC_IVAR_$_MSAccount._uniqueID
_OBJC_IVAR_$_MSAccount._disableRecentsSync
_OBJC_IVAR_$_MSAttachment._data
_OBJC_IVAR_$_MSAttachment._contentIDWithoutScheme
_OBJC_IVAR_$_MSAttachment._filename
_OBJC_IVAR_$_MSAttachment._isReferenced
_OBJC_IVAR_$_MSClient._connection
_OBJC_IVAR_$_MSCriterion._type
_OBJC_IVAR_$_MSCriterion._qualifier
_OBJC_IVAR_$_MSCriterion._expression
_OBJC_IVAR_$_MSCriterion._allRequired
_OBJC_IVAR_$_MSEmailModel._toRecipients
_OBJC_IVAR_$_MSEmailModel._CCRecipients
_OBJC_IVAR_$_MSEmailModel._BCCRecipients
_OBJC_IVAR_$_MSEmailModel._fromAddress
_OBJC_IVAR_$_MSEmailModel._subject
_OBJC_IVAR_$_MSEmailModel._htmlStringsAndAttachments
_OBJC_IVAR_$_MSEmailModel._originalReferenceID
_OBJC_IVAR_$_MSEmailModel._sendType
_OBJC_IVAR_$_MSEmailModel._webDocument
_OBJC_IVAR_$_MSExternalAction._sequenceNumber
_OBJC_IVAR_$_MSExternalAction._remote
_OBJC_IVAR_$_MSExternalAppendAction._message
_OBJC_IVAR_$_MSExternalAppendAction._account
_OBJC_IVAR_$_MSExternalAppendAction._mailboxType
_OBJC_IVAR_$_MSExternalAppendAction._mailboxPath
_OBJC_IVAR_$_MSExternalLibraryMessageAction._libraryID
_OBJC_IVAR_$_MSExternalSetFlagsAction._flagName
_OBJC_IVAR_$_MSExternalSetFlagsAction._flagValue
_OBJC_IVAR_$_MSExternalUpdatesManager._persistentStoreCoordinator
_OBJC_IVAR_$_MSExternalUpdatesManager._operationQueue
_OBJC_IVAR_$_MSExternalUpdatesManager._isMail
_OBJC_IVAR_$_MSMessage._dateReceived
_OBJC_IVAR_$_MSMessage._dateSent
_OBJC_IVAR_$_MSMessage._sender
_OBJC_IVAR_$_MSMessage._subject
_OBJC_IVAR_$_MSMessage._toRecipients
_OBJC_IVAR_$_MSMessage._CCRecipients
_OBJC_IVAR_$_MSMessage._snippet
_OBJC_IVAR_$_MSMessage._messageID
_OBJC_IVAR_$_MSMessage._path
_OBJC_IVAR_$_MSMessage._messageFlags
_OBJC_IVAR_$_MSMessage._libraryID
_OBJC_IVAR_$_MSMessage._isRead
+[MSClient defaultClient].client
+[MSClient defaultClient].once
+[MSExternalUpdatesManager sharedInstance].predicate
+[MSExternalUpdatesManager sharedInstance].sharedInstance
-[MSExternalUpdatesManager nextSequenceNumber].nextSequenceNumber
-[MSExternalUpdatesManager nextSequenceNumber].once
+[MSMessage toOrCCRecipientsAllowedClasses].sToRecipientsAllowedClasses
+[MSMessage toOrCCRecipientsAllowedClasses].onceToken
_MSCanSendMail
_MSMessageCCRecipientsKey
_MSMessageDateReceivedKey
_MSMessageDateSentKey
_MSMessageMessageFlagsKey
_MSMessageMessageIDKey
_MSMessagePathKey
_MSMessageSenderKey
_MSMessageSnippetKey
_MSMessageSubjectKey
_MSMessageToRecipientsKey
_MSSequenceNumberKey
_MailServiceVersionNumber
_MailServiceVersionString
_OBJC_CLASS_$_MSAccount
_OBJC_CLASS_$_MSAttachment
_OBJC_CLASS_$_MSClient
_OBJC_CLASS_$_MSCriterion
_OBJC_CLASS_$_MSEmailModel
_OBJC_CLASS_$_MSExternalAction
_OBJC_CLASS_$_MSExternalAppendAction
_OBJC_CLASS_$_MSExternalLibraryMessageAction
_OBJC_CLASS_$_MSExternalSetFlagsAction
_OBJC_CLASS_$_MSExternalUpdatesManager
_OBJC_CLASS_$_MSMessage
_OBJC_CLASS_$_MSXPCInterfaceConfigurator
_OBJC_METACLASS_$_MSAccount
_OBJC_METACLASS_$_MSAttachment
_OBJC_METACLASS_$_MSClient
_OBJC_METACLASS_$_MSCriterion
_OBJC_METACLASS_$_MSEmailModel
_OBJC_METACLASS_$_MSExternalAction
_OBJC_METACLASS_$_MSExternalAppendAction
_OBJC_METACLASS_$_MSExternalLibraryMessageAction
_OBJC_METACLASS_$_MSExternalSetFlagsAction
_OBJC_METACLASS_$_MSExternalUpdatesManager
_OBJC_METACLASS_$_MSMessage
_OBJC_METACLASS_$_MSXPCInterfaceConfigurator
_MCMailBundleIdentifier
_MCNotificationKeyMessages
_MFLibraryMessagesFlagsChangedNotification
_MFStringKeyArchivingMessageFormat
_NSGenericException
_NSInferMappingModelAutomaticallyOption
_NSLog
_NSMergeByPropertyObjectTrumpMergePolicy
_NSMigratePersistentStoresAutomaticallyOption
_NSSQLiteStoreType
_OBJC_CLASS_$_MCActivityMonitor
_OBJC_CLASS_$_MCMessage
_OBJC_CLASS_$_MFLibrary
_OBJC_CLASS_$_MFMailAccount
_OBJC_CLASS_$_MFMailbox
_OBJC_CLASS_$_MFMessageContext
_OBJC_CLASS_$_MFPersistenceManager
_OBJC_CLASS_$_MUIMIMEDocumentGenerator
_OBJC_CLASS_$_MUIWebAttachment
_OBJC_CLASS_$_MailFramework
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSEntityDescription
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSExpression
_OBJC_CLASS_$_NSExpressionDescription
_OBJC_CLASS_$_NSFetchRequest
_OBJC_CLASS_$_NSManagedObject
_OBJC_CLASS_$_NSManagedObjectContext
_OBJC_CLASS_$_NSManagedObjectModel
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperationQueue
_OBJC_CLASS_$_NSPersistentStoreCoordinator
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUUID
_OBJC_CLASS_$_NSXPCConnection
_OBJC_CLASS_$_NSXPCInterface
_OBJC_METACLASS_$_NSObject
__Block_object_assign
__Block_object_dispose
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__objc_empty_cache
_dispatch_once
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_time
_objc_autorelease
_objc_autoreleaseReturnValue
_objc_enumerationMutation
_objc_exception_throw
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_release
_objc_retain
_objc_retainAutorelease
_objc_retainAutoreleaseReturnValue
_objc_retainAutoreleasedReturnValue
_objc_setProperty_atomic_copy
_objc_setProperty_nonatomic_copy
_objc_storeStrong
dyld_stub_binder
