-[MCAttachment(ScriptingSupport) handleSaveAttachmentCommand:]
-[MCAttachment(ScriptingSupport) appleScriptApproximateSize]
-[MCAttachment(ScriptingSupport) uniqueID]
-[MCAttachment(ScriptingSupport) objectSpecifier]
-[MCAttachment(ScriptingInternal) _fetchDataForCommand:]
-[MCAttachment(ScriptingInternal) _finishSaveAttachmentCommand:]
-[_MFAppleScriptHeaderRecord objectSpecifier]
-[_MFAppleScriptHeaderRecord name]
-[_MFAppleScriptHeaderRecord setName:]
-[_MFAppleScriptHeaderRecord content]
-[_MFAppleScriptHeaderRecord setContent:]
-[_MFAppleScriptHeaderRecord message]
-[_MFAppleScriptHeaderRecord setMessage:]
-[_MFAppleScriptHeaderRecord .cxx_destruct]
-[MCMessage(ScriptingSupport) toRecipients]
-[MCMessage(ScriptingSupport) ccRecipients]
-[MCMessage(ScriptingSupport) bccRecipients]
-[MCMessage(ScriptingSupportInternal) objectSpecifier]
-[MCMessage(ScriptingSupportInternal) _setAppleScriptFlag:state:]
-[MCMessage(ScriptingSupportInternal) isRead]
-[MCMessage(ScriptingSupportInternal) setIsRead:]
-[MCMessage(ScriptingSupportInternal) wasRepliedTo]
-[MCMessage(ScriptingSupportInternal) setWasRepliedTo:]
-[MCMessage(ScriptingSupportInternal) wasForwarded]
-[MCMessage(ScriptingSupportInternal) setWasForwarded:]
-[MCMessage(ScriptingSupportInternal) wasRedirected]
-[MCMessage(ScriptingSupportInternal) setWasRedirected:]
-[MCMessage(ScriptingSupportInternal) isJunk]
-[MCMessage(ScriptingSupportInternal) setIsJunk:]
-[MCMessage(ScriptingSupportInternal) isDeleted]
-[MCMessage(ScriptingSupportInternal) setIsDeleted:]
-[MCMessage(ScriptingSupportInternal) isFlagged]
-[MCMessage(ScriptingSupportInternal) setIsFlagged:]
-[MCMessage(ScriptingSupportInternal) flaggedStatus]
-[MCMessage(ScriptingSupportInternal) setFlaggedStatus:]
-[MCMessage(ScriptingSupportInternal) replyTo]
-[MCMessage(ScriptingSupportInternal) scriptedMessageSize]
-[MCMessage(ScriptingSupportInternal) content]
-[MCMessage(ScriptingSupportInternal) _performBackgroundGetContent]
-[MCMessage(ScriptingSupportInternal) _addRecipientsForKey:toArray:]
-[MCMessage(ScriptingSupportInternal) recipients]
-[MCMessage(ScriptingSupportInternal) container]
-[MCMessage(ScriptingSupportInternal) setContainer:]
-[MCMessage(ScriptingSupportInternal) _performBackgroundSetContainer:command:]
-[MCMessage(ScriptingSupportInternal) messageIDHeader]
-[MCMessage(ScriptingSupportInternal) rawSource]
-[MCMessage(ScriptingSupportInternal) allHeaders]
-[MCMessage(ScriptingSupportInternal) actionColorMessage]
-[MCMessage(ScriptingSupportInternal) backgroundColor]
-[MCMessage(ScriptingSupportInternal) setBackgroundColor:]
-[MCMessage(ScriptingSupportInternal) appleScriptHeaders]
-[MCMessage(ScriptingSupportInternal) appleScriptAttachments]
-[MCMessage(ScriptingSupportInternal) valueInAppleScriptAttachmentsWithUniqueID:]
+[MFAccount accountClassForTypeString:]
+[MFAccount typeStringForAccountClass:]
+[MFAccount haveAccountsBeenConfigured]
+[MFAccount v2AccountsPlistName]
+[MFAccount readAccountsUsingStorageKey:forceReadFromMail:]
+[MFAccount readAccountsUsingStorageKey:]
+[MFAccount saveAccounts:usingStorageKey:]
+[MFAccount saveAccounts:usingStorageKey:forceWriteToMail:]
+[MFAccount _shouldAnnounceChangesFromAccountInfo:toAccountInfo:]
___65+[MFAccount _shouldAnnounceChangesFromAccountInfo:toAccountInfo:]_block_invoke
+[MFAccount saveAccountInfoToDefaults]
+[MFAccount accountTypeString]
-[MFAccount iaServiceType]
+[MFAccount genericAccountLargeImage]
___37+[MFAccount genericAccountLargeImage]_block_invoke
-[MFAccount initWithAccountInfo:]
-[MFAccount init]
-[MFAccount dealloc]
-[MFAccount accountInfo]
-[MFAccount setAccountInfo:]
-[MFAccount _setAccountInfo:]
-[MFAccount info]
-[MFAccount setInfo:]
-[MFAccount objectForAccountInfoKey:]
-[MFAccount boolForAccountInfoKey:defaultResult:]
-[MFAccount setObject:forAccountInfoKey:]
-[MFAccount setBool:forAccountInfoKey:withDefault:]
-[MFAccount setBool:forAccountInfoKey:]
-[MFAccount removeObjectForAccountInfoKey:]
-[MFAccount portNumberForKeychain]
-[MFAccount _queueAccountInfoDidChange]
-[MFAccount defaultsDictionary]
+[MFAccount resetConfigureDynamically]
-[MFAccount isActive]
-[MFAccount setIsActive:]
-[MFAccount clearIsActiveCache]
-[MFAccount isInactivatedInsteadOfBeingDeleted]
-[MFAccount setIsInactivatedInsteadOfBeingDeleted:]
+[MFAccount allObjectsInArrayAreOffline:]
___41+[MFAccount allObjectsInArrayAreOffline:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFAccount canGoOffline]
-[MFAccount isOffline]
-[MFAccount setIsOffline:]
-[MFAccount isWillingToGoOnline]
-[MFAccount setIsWillingToGoOnline:]
-[MFAccount storedDisplayName]
-[MFAccount setStoredDisplayName:]
-[MFAccount displayName]
-[MFAccount setDisplayName:]
+[MFAccount keyPathsForValuesAffectingOfflineDisplayName]
-[MFAccount offlineDisplayName]
-[MFAccount username]
-[MFAccount setUsername:]
-[MFAccount hostname]
-[MFAccount setHostname:]
-[MFAccount _hostnameWithAccountInfoKey:]
-[MFAccount _setHostname:accountInfoKey:]
-[MFAccount password]
-[MFAccount setPassword:]
-[MFAccount permanentPassword]
-[MFAccount setPermanentPassword:]
-[MFAccount sessionPassword]
-[MFAccount setSessionPassword:]
-[MFAccount promptUserForPassword]
-[MFAccount promptUserForPasswordWithCompletion:]
___49-[MFAccount promptUserForPasswordWithCompletion:]_block_invoke
___copy_helper_block_426
___destroy_helper_block_427
-[MFAccount applePersonID]
-[MFAccount appleAuthenticationToken]
-[MFAccount googleClientToken]
-[MFAccount copyTLSIdentity]
-[MFAccount setTLSIdentity:]
-[MFAccount portNumber]
-[MFAccount setPortNumber:]
-[MFAccount _setPortNumber:releasingConnections:]
+[MFAccount standardPorts]
+[MFAccount standardSSLPorts]
-[MFAccount standardPorts]
-[MFAccount standardSSLPorts]
-[MFAccount defaultPortNumber]
-[MFAccount defaultSecurePortNumber]
-[MFAccount releaseAllConnections]
-[MFAccount validateConnections]
-[MFAccount validateConnectionsIfNeeded]
+[MFAccount defaultsToSSL]
-[MFAccount usesSSL]
-[MFAccount setUsesSSL:]
-[MFAccount _setUsesSSL:releasingConnections:]
-[MFAccount _usesSSLWithAccountInfoKey:]
-[MFAccount _setUsesSSL:accountInfoKey:releasingConnections:]
-[MFAccount securityLayerType]
-[MFAccount setSecurityLayerType:]
-[MFAccount _setSecurityLayerType:releasingConnections:]
-[MFAccount updateFromSuccessfulConnectionPortNumber:securityLayerType:]
-[MFAccount accountInfoDidChange]
+[MFAccount keyPathsForValuesAffectingPreferredAuthScheme]
-[MFAccount preferredAuthScheme]
-[MFAccount setPreferredAuthScheme:]
-[MFAccount saslProfileName]
-[MFAccount requiresAuthentication]
-[MFAccount shouldUseAuthentication]
-[MFAccount setShouldUseAuthentication:]
-[MFAccount newConnectedConnectionDiscoveringBestSettings:withConnectTimeout:readWriteTimeout:]
-[MFAccount authenticatedConnection]
-[MFAccount shouldRetryConnectionWithoutCertificateCheckingAfterError:host:didPromptUser:]
-[MFAccount connectAndAuthenticate:]
-[MFAccount ISPAccountID]
-[MFAccount setISPAccountID:]
-[MFAccount identifier]
-[MFAccount nameForMailbox:]
-[MFAccount usesConnectionBasedAutodiscovery]
-[MFAccount autodiscoverSettings:]
-[MFAccount _matchesDiscoveredSettings:fromEmailAddress:]
-[MFAccount _matchesEmailAddress:]
-[MFAccount supportURL]
-[MFAccount supportURLLabel]
-[MFAccount subscriptionURL]
-[MFAccount subscriptionURLLabel]
-[MFAccount accountTypeString]
-[MFAccount providerIdentifier]
-[MFAccount setProviderIdentifier:]
-[MFAccount brandName]
-[MFAccount iaSettingsIncludingPassword:]
-[MFAccount brandIcon]
-[MFAccount clearBrandingCache]
-[MFAccount isValid]
-[MFAccount setAccountInfoObject:forKey:]
-[MFAccount removeAccountInfoObjectForKey:]
-[MFAccount canAuthenticateWithScheme:]
-[MFAccount respondToHostBecomingReachable]
-[MFAccount keychainProtocol]
+[MFAccount classForProtocol:]
-[MFAccount configureDynamically]
-[MFAccount setConfigureDynamically:]
-[MFAccount allowInsecureAuthentication]
-[MFAccount setAllowInsecureAuthentication:]
-[MFAccount canonicalEmailAddress]
-[MFAccount setCanonicalEmailAddress:]
-[MFAccount primitiveIsOffline]
-[MFAccount setPrimitiveIsOffline:]
-[MFAccount primitiveIsWillingToGoOnline]
-[MFAccount setPrimitiveIsWillingToGoOnline:]
-[MFAccount autosynchronizingEnabled]
-[MFAccount setAutosynchronizingEnabled:]
-[MFAccount useMailDrop]
-[MFAccount setUseMailDrop:]
-[MFAccount lastConnectionValidationTime]
-[MFAccount setLastConnectionValidationTime:]
-[MFAccount .cxx_destruct]
-[MFAccount(Applescript) accountType]
-[MFAccount(Applescript) setAccountPassword:]
-[MFAccount(Applescript) accountPassword]
-[MFAccount(Applescript) setServerName:]
-[MFAccount(Applescript) serverName]
-[MFAccount(Applescript) setLoginName:]
-[MFAccount(Applescript) loginName]
-[MFAccount(Applescript) setAccountName:]
-[MFAccount(Applescript) accountName]
-[MFAccount(Applescript) customAuthentication]
-[MFAccount(Applescript) setCustomAuthentication:]
+[MFAccountStatus sharedStatus]
___31+[MFAccountStatus sharedStatus]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFAccountStatus init]
-[MFAccountStatus dealloc]
-[MFAccountStatus invalidate]
-[MFAccountStatus registerAccountTypes:accounts:forClient:]
-[MFAccountStatus registerAccountTypes:forClient:]
-[MFAccountStatus registerAccounts:forClient:]
-[MFAccountStatus unregisterClient:]
-[MFAccountStatus registeredAccountsForClient:]
-[MFAccountStatus _registeredAccountsForClient:onlyWithUnknownStatus:]
___70-[MFAccountStatus _registeredAccountsForClient:onlyWithUnknownStatus:]_block_invoke
___copy_helper_block_143
___destroy_helper_block_144
-[MFAccountStatus _allRegisteredAccounts]
-[MFAccountStatus _accountsForTypes:]
___37-[MFAccountStatus _accountsForTypes:]_block_invoke
___copy_helper_block_171
___destroy_helper_block_172
-[MFAccountStatus internetStatus]
-[MFAccountStatus _setInternetStatus:]
-[MFAccountStatus diagnoseInternetConnection]
-[MFAccountStatus accountStatus:]
-[MFAccountStatus knownAccountStatus:]
-[MFAccountStatus _setStatus:forAccount:]
-[MFAccountStatus accountStatusDetails:]
-[MFAccountStatus _setStatusDetails:forAccount:]
-[MFAccountStatus _timedRefresh:]
-[MFAccountStatus _networkChanged:]
-[MFAccountStatus _accountInfoChanged:]
-[MFAccountStatus refreshAndClearStatus:]
___41-[MFAccountStatus refreshAndClearStatus:]_block_invoke
___copy_helper_block_211
___destroy_helper_block_212
-[MFAccountStatus refreshStatusForClient:forceRefresh:]
-[MFAccountStatus _refreshAccounts:andInternet:clearingStatus:]
-[MFAccountStatus _refreshInternetStatus]
-[MFAccountStatus _refreshAccountStatus:]
-[MFAccountStatus _accountStatusUpdatedWithInfo:]
-[MFAccountStatus refreshTimer]
-[MFAccountStatus isRefreshingInternet]
-[MFAccountStatus setIsRefreshingInternet:]
-[MFAccountStatus .cxx_destruct]
+[MFAccountStorage allocWithZone:]
+[MFAccountStorage sharedInstance]
___34+[MFAccountStorage sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFAccountStorage init]
-[MFAccountStorage dealloc]
-[MFAccountStorage _accountsPlistPath]
___38-[MFAccountStorage _accountsPlistPath]_block_invoke
-[MFAccountStorage objectForKey:]
-[MFAccountStorage setObject:forKey:]
-[MFAccountStorage removeObjectForKey:]
-[MFAccountStorage synchronize]
-[MFAccountStorage arrayForKey:]
-[MFAccountStorage stringForKey:]
-[MFAccountStorage integerForKey:]
-[MFAccountStorage setInteger:forKey:]
-[MFAccountStorage v2AccountsPlistName]
-[MFAccountStorage .cxx_destruct]
+[MFAddressManager allocWithZone:]
+[MFAddressManager addressManager]
___34+[MFAddressManager addressManager]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFAddressManager init]
-[MFAddressManager dealloc]
-[MFAddressManager loadAddressBookAsynchronously]
-[MFAddressManager _loadAddressBookSynchronously]
-[MFAddressManager bestRecordMatchingFormattedAddress:]
-[MFAddressManager _trimRecordCachesAfterDelay]
-[MFAddressManager _trimRecordCaches]
-[MFAddressManager _addressBookDidChange:]
-[MFAddressManager _invalidateChangedRecords:]
-[MFAddressManager _fullAddressesForRecords:]
-[MFAddressManager _invalidateInsertedRecords:]
-[MFAddressManager _clearCachedImagesForRemovedRecords:]
___56-[MFAddressManager _clearCachedImagesForRemovedRecords:]_block_invoke
___copy_helper_block_170
___destroy_helper_block_171
-[MFAddressManager _postPhotoChangedNotification]
-[MFAddressManager recordForUniqueId:]
-[MFAddressManager _addAddresses:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___34-[MFAddressManager _addAddresses:]_block_invoke
___copy_helper_block_236
___destroy_helper_block_237
-[MFAddressManager addRecentAddresses:sendingAddress:]
-[MFAddressManager addAddresses:]
-[MFAddressManager addRecentToAddressBook:]
-[MFAddressManager removeRecordFromAddressBook:forRecent:]
-[MFAddressManager removeRecentAddresses:]
___42-[MFAddressManager removeRecentAddresses:]_block_invoke
___copy_helper_block_292
___destroy_helper_block_293
-[MFAddressManager removeRecentRecord:]
-[MFAddressManager _addressBookRecordForEmail:]
-[MFAddressManager addressBookPersonForEmail:]
-[MFAddressManager _addressBookRecordsForFirstName:lastName:]
-[MFAddressManager imageForMailAddress:displayName:photoSize:selected:fetchState:]
+[MFAddressManager placeholderImageOfSize:selected:]
___52+[MFAddressManager placeholderImageOfSize:selected:]_block_invoke
___copy_helper_block_349
___destroy_helper_block_350
-[MFAddressManager _cachedImageForAddress:displayName:photoSize:selected:]
-[MFAddressManager _setCachedImage:forAddress:displayName:photoSize:selected:]
-[MFAddressManager _cacheKeyForPhotoSize:selected:]
-[MFAddressManager _cacheKeyForAddress:displayName:]
-[MFAddressManager _fetchImageForAddress:displayName:size:selected:]
___68-[MFAddressManager _fetchImageForAddress:displayName:size:selected:]_block_invoke
___68-[MFAddressManager _fetchImageForAddress:displayName:size:selected:]_block_invoke_2
___68-[MFAddressManager _fetchImageForAddress:displayName:size:selected:]_block_invoke_3
___copy_helper_block_379
___destroy_helper_block_380
___copy_helper_block_384
___destroy_helper_block_385
___copy_helper_block_390
___destroy_helper_block_391
-[MFAddressManager _abImageForAddress:displayName:photoSize:selected:completionBlock:]
+[MFAddressManager _photoDimensionForPhotoSize:]
-[MFAddressManager groups]
-[MFAddressManager imageCache]
-[MFAddressManager imageLoadingQueue]
-[MFAddressManager imageCreationQueue]
-[MFAddressManager .cxx_destruct]
+[MFAosImapAccount keyPathsForValuesAffectingValueForKey:]
-[MFAosImapAccount initWithAccountInfo:]
-[MFAosImapAccount dealloc]
+[MFAosImapAccount defaultsToSSL]
-[MFAosImapAccount _setAccountInfo:]
-[MFAosImapAccount completeDeferredInitialization]
___50-[MFAosImapAccount completeDeferredInitialization]_block_invoke
-[MFAosImapAccount canonicalEmailAddress]
-[MFAosImapAccount autodiscoverSettings:]
-[MFAosImapAccount hostname]
-[MFAosImapAccount setHostname:]
-[MFAosImapAccount setUsername:]
-[MFAosImapAccount defaultsDictionary]
-[MFAosImapAccount setPassword:]
-[MFAosImapAccount permanentPassword]
-[MFAosImapAccount setPermanentPassword:]
-[MFAosImapAccount setSessionPassword:]
-[MFAosImapAccount applePersonID]
-[MFAosImapAccount appleAuthenticationToken]
-[MFAosImapAccount setIsOffline:]
___33-[MFAosImapAccount setIsOffline:]_block_invoke
-[MFAosImapAccount preferredAuthScheme]
-[MFAosImapAccount canAuthenticateWithScheme:]
-[MFAosImapAccount shouldRetryConnectionWithoutCertificateCheckingAfterError:host:didPromptUser:]
-[MFAosImapAccount usesConnectionBasedAutodiscovery]
+[MFAosImapAccount defaultPathNameForAccount]
+[MFAosImapAccount defaultPathNameForAccountWithHostname:username:]
-[MFAosImapAccount _URLPersistenceHostname]
-[MFAosImapAccount rawEmailAddresses]
-[MFAosImapAccount emailAddresses]
-[MFAosImapAccount _setEmailAliases:]
-[MFAosImapAccount deliveryAccount]
-[MFAosImapAccount setDeliveryAccount:]
-[MFAosImapAccount _removeDeliveryAccountIfNotInUse:]
-[MFAosImapAccount _replacementDeliveryAccountForDeliveryAccount:]
-[MFAosImapAccount dynamicDeliveryAccount]
-[MFAosImapAccount presentOverQuotaAlert]
-[MFAosImapAccount handleAlertResponse:]
-[MFAosImapAccount _copyAoskitAccount]
-[MFAosImapAccount _setAoskitAccount:]
-[MFAosImapAccount _copyMailPropertiesTransaction]
-[MFAosImapAccount _setMailPropertiesTransaction:]
-[MFAosImapAccount _copyAliasesTransaction]
-[MFAosImapAccount _setAliasesTransaction:]
-[MFAosImapAccount _copyEditAliasesURLTransaction]
-[MFAosImapAccount _setEditAliasesURLTransaction:]
-[MFAosImapAccount setDefaultAddress:]
-[MFAosImapAccount _didUpdateToAppleToken]
-[MFAosImapAccount _setDidUpdateToAppleToken:]
-[MFAosImapAccount _updateAoskitAccount]
-[MFAosImapAccount _passwordFromKeychain]
-[MFAosImapAccount _updateAliases:]
-[MFAosImapAccount _updateMailProperties]
_didFetchMailProperties
+[MFAosImapAccount updateAllEmailAliases:]
-[MFAosImapAccount updateEmailAliases]
_didFetchEmailAliases
-[MFAosImapAccount openEditEmailAliasesURL]
_didFetchEditEmailAliasesURL
-[MFAosImapAccount migrateToNewAOSService]
-[MFAosImapAccount shouldBypassCache]
-[MFAosImapAccount setShouldBypassCache:]
-[MFAosImapAccount aosSmtpAccount]
-[MFAosImapAccount .cxx_destruct]
-[MFAosImapAccount(Internal) aoskitPropertyForKey:]
-[MFAosImapAccount(Internal) lastSuccessfulAosSmtpPortNumber]
-[MFAosImapAccount(Internal) setLastSuccessfulAosSmtpPortNumber:]
-[MFAosImapAccount(Internal) lastSuccessfulAosSmtpSecurityLayerType]
-[MFAosImapAccount(Internal) setLastSuccessfulAosSmtpSecurityLayerType:]
+[MFAosSmtpAccount keyPathsForValuesAffectingValueForKey:]
___58+[MFAosSmtpAccount keyPathsForValuesAffectingValueForKey:]_block_invoke
-[MFAosSmtpAccount initWithAccount:]
-[MFAosSmtpAccount initWithAccountInfo:]
-[MFAosSmtpAccount dealloc]
-[MFAosSmtpAccount storedDisplayName]
-[MFAosSmtpAccount setStoredDisplayName]
-[MFAosSmtpAccount displayName]
-[MFAosSmtpAccount setDisplayName]
-[MFAosSmtpAccount offlineDisplayName]
-[MFAosSmtpAccount isInactivatedInsteadOfBeingDeleted]
-[MFAosSmtpAccount setIsInactivatedInsteadOfBeingDeleted:]
-[MFAosSmtpAccount defaultsDictionary]
-[MFAosSmtpAccount setAccountInfoObject:forKey:]
-[MFAosSmtpAccount removeAccountInfoObjectForKey:]
-[MFAosSmtpAccount _setAccountInfo:]
-[MFAosSmtpAccount info]
-[MFAosSmtpAccount setInfo:]
-[MFAosSmtpAccount requiresAuthentication]
-[MFAosSmtpAccount canAuthenticateWithScheme:]
-[MFAosSmtpAccount hostname]
-[MFAosSmtpAccount setHostname:]
-[MFAosSmtpAccount configureDynamically]
-[MFAosSmtpAccount setConfigureDynamically:]
-[MFAosSmtpAccount portNumber]
-[MFAosSmtpAccount _setPortNumber:releasingConnections:]
-[MFAosSmtpAccount securityLayerType]
-[MFAosSmtpAccount _setSecurityLayerType:releasingConnections:]
-[MFAosSmtpAccount canonicalEmailAddress]
-[MFAosSmtpAccount setCanonicalEmailAddress:]
-[MFAosSmtpAccount usesConnectionBasedAutodiscovery]
-[MFAosSmtpAccount autodiscoverSettings:]
-[MFAosSmtpAccount username]
-[MFAosSmtpAccount setUsername:]
-[MFAosSmtpAccount password]
-[MFAosSmtpAccount setPassword:]
-[MFAosSmtpAccount permanentPassword]
-[MFAosSmtpAccount setPermanentPassword:]
-[MFAosSmtpAccount sessionPassword]
-[MFAosSmtpAccount setSessionPassword:]
-[MFAosSmtpAccount applePersonID]
-[MFAosSmtpAccount appleAuthenticationToken]
-[MFAosSmtpAccount _setUsesSSL:accountInfoKey:releasingConnections:]
-[MFAosSmtpAccount preferredAuthScheme]
-[MFAosSmtpAccount setPreferredAuthScheme:]
-[MFAosSmtpAccount ISPAccountID]
-[MFAosSmtpAccount setISPAccountID:]
-[MFAosSmtpAccount identifier]
-[MFAosSmtpAccount supportURL]
-[MFAosSmtpAccount supportURLLabel]
-[MFAosSmtpAccount subscriptionURL]
-[MFAosSmtpAccount subscriptionURLLabel]
-[MFAosSmtpAccount shouldRetryConnectionWithoutCertificateCheckingAfterError:host:didPromptUser:]
-[MFAosSmtpAccount validationRequired]
-[MFAosSmtpAccount setValidationRequired:]
-[MFAosSmtpAccount deliveryIdentifier]
-[MFAosSmtpAccount isDynamic]
-[MFAosSmtpAccount associatedAccount]
-[MFAosSmtpAccount setAssociatedAccount:]
-[MFAosSmtpAccount shouldUseAuthentication]
-[MFAosSmtpAccount setShouldUseAuthentication:]
-[MFAosSmtpAccount remoteMailAccountsEmployedBy]
-[MFAosSmtpAccount shouldTryDefaultPorts]
-[MFAosSmtpAccount setShouldTryDefaultPorts:]
-[MFAosSmtpAccount isEqual:]
-[MFAosSmtpAccount hash]
-[MFAosSmtpAccount .cxx_destruct]
+[MFAttachmentViewController initialize]
-[MFAttachmentViewController init]
-[MFAttachmentViewController initWithAttachment:]
-[MFAttachmentViewController dealloc]
-[MFAttachmentViewController copyWithZone:]
-[MFAttachmentViewController attachmentViews]
-[MFAttachmentViewController addAttachmentView:]
+[MFAttachmentViewController registerViewingClass:forMimeTypes:]
+[MFAttachmentViewController _viewProviderClassForMimeType:]
-[MFAttachmentViewController isBeingDisplayedInline]
-[MFAttachmentViewController setIsBeingDisplayedInline:]
-[MFAttachmentViewController canBeDisplayedInline]
-[MFAttachmentViewController setCanBeDisplayedInline:]
-[MFAttachmentViewController shouldBeDisplayedInlineByDefault]
-[MFAttachmentViewController shouldDownloadAttachmentOnDisplay]
-[MFAttachmentViewController setInvisible:]
-[MFAttachmentViewController originalImageSizeWithOriginalImage:]
-[MFAttachmentViewController resizingStarted:]
-[MFAttachmentViewController resizingFinished:imageSize:fileExtension:fileType:maxImageSize:]
-[MFAttachmentViewController inlineImage]
___41-[MFAttachmentViewController inlineImage]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFAttachmentViewController iconImage]
-[MFAttachmentViewController _imageDataDidChange:]
-[MFAttachmentViewController _attachmentDidFinishReading:]
-[MFAttachmentViewController methodSignatureForSelector:]
-[MFAttachmentViewController forwardInvocation:]
-[MFAttachmentViewController description]
-[MFAttachmentViewController itemProvider]
-[MFAttachmentViewController data]
-[MFAttachmentViewController cidURL]
-[MFAttachmentViewController mimeType]
-[MFAttachmentViewController attachment]
-[MFAttachmentViewController domNodeWidth]
-[MFAttachmentViewController setDomNodeWidth:]
-[MFAttachmentViewController domNodeHeight]
-[MFAttachmentViewController setDomNodeHeight:]
-[MFAttachmentViewController targetImageSize]
-[MFAttachmentViewController setTargetImageSize:]
-[MFAttachmentViewController objectElement]
-[MFAttachmentViewController setObjectElement:]
-[MFAttachmentViewController canBeDisplayedInRegisteredViewer]
-[MFAttachmentViewController setCanBeDisplayedInRegisteredViewer:]
-[MFAttachmentViewController originalImageSize]
-[MFAttachmentViewController setOriginalImageSize:]
-[MFAttachmentViewController originalImageSizeHasBeenComputed]
-[MFAttachmentViewController setOriginalImageSizeHasBeenComputed:]
-[MFAttachmentViewController previousTargetImageSize]
-[MFAttachmentViewController setPreviousTargetImageSize:]
-[MFAttachmentViewController isImageBeingResized]
-[MFAttachmentViewController setIsImageBeingResized:]
-[MFAttachmentViewController .cxx_destruct]
-[MCMessageBody(MFAttachmentViewController) attachmentViewControllers]
-[MCMessage(MFBackupAdditions) backupID]
-[MFMailAccount(MFBackupAdditions) backupID]
-[MFMailbox(MFBackupAdditions) backupType]
-[MFMailbox(MFBackupAdditions) backupID]
+[MFBackupManager sharedManager]
___32+[MFBackupManager sharedManager]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFBackupManager init]
-[MFBackupManager dealloc]
-[MFBackupManager invalidateCaches]
-[MFBackupManager editableMessagesWereAdded:]
___45-[MFBackupManager editableMessagesWereAdded:]_block_invoke
___copy_helper_block_89
___destroy_helper_block_90
-[MFBackupManager editableMessagesWereDeleted:]
___47-[MFBackupManager editableMessagesWereDeleted:]_block_invoke
___copy_helper_block_99
___destroy_helper_block_100
-[MFBackupManager _setupDefaultTopLevelRecoveryMailbox]
-[MFBackupManager performPendingRestore]
-[MFBackupManager timeMachineRestoreFinished:]
-[MFBackupManager hasPendingRestoreIsMailbox:]
-[MFBackupManager mailboxNameToBeRestored]
-[MFBackupManager numberOfMessagesToBeRestored]
-[MFBackupManager prepareToRestoreMessagesAtPaths:intoMailboxNamed:]
-[MFBackupManager restoreMessagesAtPaths:intoMailboxNamed:reuseMailbox:createdMailboxNamed:postNotification:]
-[MFBackupManager prepareToRestoreMailboxAtURL:intoMailboxNamed:]
-[MFBackupManager restoreMailboxAtURL:intoMailboxNamed:postNotification:]
-[MFBackupManager restoreMailboxesAtURL:intoMailbox:restoredMessages:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___70-[MFBackupManager restoreMailboxesAtURL:intoMailbox:restoredMessages:]_block_invoke
___copy_helper_block_240
___destroy_helper_block_241
-[MFBackupManager _restoreMailboxAtURL:intoMailbox:newMessages:]
-[MFBackupManager _recoveryMailboxWithSuggestedName:reuseMailbox:]
-[MFBackupManager _reducedPathFromFullPath:supportDirectory:]
-[MFBackupManager _reducedPathFromFullPath:]
-[MFBackupManager shouldSaveMessagesForMailbox:]
-[MFBackupManager _shouldSaveDisplayNameForMailbox:]
-[MFBackupManager _expandedMailboxes:]
-[MFBackupManager _dictionaryForSection:]
-[MFBackupManager _dictionaryForMailbox:parent:messagePool:]
-[MFBackupManager _dictionaryForMessage:includeRecipients:]
-[MFBackupManager _sectionForMailbox:]
-[MFBackupManager _addMailbox:toSection:sections:messagePool:]
-[MFBackupManager tableOfContents]
-[MFBackupManager saveTableOfContents:]
-[MFBackupManager backupPathForMailbox:]
-[MFBackupManager _backupPathForMailbox:withParentPath:pathsCache:]
-[MFBackupManager backupPathForMailbox:pathsCache:]
-[MFBackupManager backupMailboxesEnumerator]
-[MFBackupManager topLevelRecoveryMailbox]
-[MFBackupManager setTopLevelRecoveryMailbox:]
-[MFBackupManager lastSavedTableOfContents]
-[MFBackupManager setLastSavedTableOfContents:]
-[MFBackupManager registeredForEditableMessageNotifications]
-[MFBackupManager setRegisteredForEditableMessageNotifications:]
-[MFBackupManager messagePathsToRestore]
-[MFBackupManager setMessagePathsToRestore:]
-[MFBackupManager mailboxDirectoryToRestore]
-[MFBackupManager setMailboxDirectoryToRestore:]
-[MFBackupManager mailboxNameForRestoring]
-[MFBackupManager setMailboxNameForRestoring:]
-[MFBackupManager .cxx_destruct]
-[MFBehaviorTracker init]
-[MFBehaviorTracker beginBehaviorWithValues:forAttribute:]
___58-[MFBehaviorTracker beginBehaviorWithValues:forAttribute:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFBehaviorTracker endAllBehaviorsForAttribute:]
___49-[MFBehaviorTracker endAllBehaviorsForAttribute:]_block_invoke
___copy_helper_block_57
___destroy_helper_block_58
-[MFBehaviorTracker _attributeForName:]
-[MFBehaviorTracker valueForecastsForAttributeName:values:]
-[MFBehaviorTracker session]
-[MFBehaviorTracker taskQueue]
-[MFBehaviorTracker .cxx_destruct]
-[MFBerkeleyMbox initWithPath:create:readOnly:account:]
-[MFBerkeleyMbox init]
-[MFBerkeleyMbox initWithMailbox:readOnly:createEmptyStore:]
-[MFBerkeleyMbox initWithAccount:]
-[MFBerkeleyMbox writeUpdatedMessageDataToDisk]
-[MFBerkeleyMbox _lockFilePath]
-[MFBerkeleyMbox _mboxData]
-[MFBerkeleyMbox _resetAllMessages]
-[MFBerkeleyMbox _fetchHeaderDataForMessage:fetchIfNotAvailable:allowPartial:]
-[MFBerkeleyMbox _fetchHeaderDataForMessage:fetchIfNotAvailable:]
-[MFBerkeleyMbox _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:allowPartial:]
-[MFBerkeleyMbox _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFBerkeleyMbox doCompact]
-[MFBerkeleyMbox _defaultRouterDestination]
-[MFBerkeleyMbox fetchSynchronously]
+[MFBerkeleyMbox storeExistsForPath:]
+[MFBerkeleyMbox storeAtPathIsWritable:]
+[MFBerkeleyMbox createEmptyStoreForPath:]
-[MFBerkeleyMbox path]
-[MFBerkeleyMbox .cxx_destruct]
-[MFConversationCalculationContext initWithHandle:]
-[MFConversationCalculationContext resetForNewRow]
-[MFConversationCalculationContext tearDown]
-[MFConversationCalculationContext dealloc]
-[MFConversationCalculationContext description]
+[MFConversationCalculationContext addMessagesInDictionary:toDictionary:]
-[MFConversationCalculationContext conversationWasAdded:]
-[MFConversationCalculationContext conversationWasRemoved:]
-[MFConversationCalculationContext conversationWasUpdated:]
-[MFConversationCalculationContext messageHasReferences]
-[MFConversationCalculationContext messageHasMessageID]
-[MFConversationCalculationContext conversationIDOfCloneWithRowID:]
-[MFConversationCalculationContext conversationIDOfClosestAncestorWithRowID:]
-[MFConversationCalculationContext conversationIDOfFuzzyAncestorWithRowID:]
-[MFConversationCalculationContext conversationIDOfAutomatedMessageWithoutReferences]
-[MFConversationCalculationContext conversationIDOfAutomatedMessageWithReferencesWithRowID:]
-[MFConversationCalculationContext peersOfMessageExcludingAncestorConversationID:descendantConversationID:]
___107-[MFConversationCalculationContext peersOfMessageExcludingAncestorConversationID:descendantConversationID:]_block_invoke
-[MFConversationCalculationContext _messagesInConversations:count:]
-[MFConversationCalculationContext _rowIDOfBestFuzzyAncestorForMessage:subjectID:subjectLength:dateReceived:senderID:rootStatus:participantsByRowID:conversationIDByRowID:dateReceivedByRowID:currentFuzzyAncestor:abortOnMatchBetterThanRowID:conversationIDOfBestFuzzyAncestor:]
-[MFConversationCalculationContext _conversationIDUsingFuzzyHeuristicOfRowID:withSubject:subjectLength:sender:rootStatus:participantsByRowID:conversationIDByRowID:dateReceivedByRowID:resultRowID:abortOnMatchBetterThanRowID:]
-[MFConversationCalculationContext _messagesWithSubject:participantsByRowID:conversationIDByRowID:dateReceivedByRowID:]
-[MFConversationCalculationContext fuzzyDescendantsToSplitExcludingConversationIDs:]
___84-[MFConversationCalculationContext fuzzyDescendantsToSplitExcludingConversationIDs:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFConversationCalculationContext descendantsOfMessageExcludingConversationID:]
-[MFConversationCalculationContext conversationIDOfClosestDescendantExcludingConversationID:]
-[MFConversationCalculationContext _descendant:belongsToSameConversationAsAncestor:]
-[MFConversationCalculationContext descendantsOfMessageToSplit]
___63-[MFConversationCalculationContext descendantsOfMessageToSplit]_block_invoke
___copy_helper_block_419
___destroy_helper_block_420
-[MFConversationCalculationContext _recursiveDescendantsInConversations:]
-[MFConversationCalculationContext _conversationsWithFuzzyDescendantsExcludingConversations:]
-[MFConversationCalculationContext _setFuzzyAncestor:forRowID:]
-[MFConversationCalculationContext _dateReceivedForRowID:]
-[MFConversationCalculationContext _senderForRowID:]
-[MFConversationCalculationContext subjectLengthForRowID:]
-[MFConversationCalculationContext conversationIDForRowID:]
-[MFConversationCalculationContext _recipientsForRowID:]
-[MFConversationCalculationContext _participantsForRowID:]
-[MFConversationCalculationContext participants]
-[MFConversationCalculationContext setParticipants:]
-[MFConversationCalculationContext clonesForRowID:]
-[MFConversationCalculationContext automatedConversationTypeForRowID:]
-[MFConversationCalculationContext conversationPositionOfClosestAncestorForRowID:inConversation:]
-[MFConversationCalculationContext conversationPositionOfClosestDescendantForRowID:inConversation:]
-[MFConversationCalculationContext automatedConversationTypeIsConsistentForConversation:]
-[MFConversationCalculationContext summaryForConversation:]
-[MFConversationCalculationContext rowID]
-[MFConversationCalculationContext setRowID:]
-[MFConversationCalculationContext message]
-[MFConversationCalculationContext setMessage:]
-[MFConversationCalculationContext subjectID]
-[MFConversationCalculationContext setSubjectID:]
-[MFConversationCalculationContext subjectLength]
-[MFConversationCalculationContext setSubjectLength:]
-[MFConversationCalculationContext rootStatus]
-[MFConversationCalculationContext setRootStatus:]
-[MFConversationCalculationContext hasReferences]
-[MFConversationCalculationContext setHasReferences:]
-[MFConversationCalculationContext messageIDHeader]
-[MFConversationCalculationContext setMessageIDHeader:]
-[MFConversationCalculationContext conversationID]
-[MFConversationCalculationContext setConversationID:]
-[MFConversationCalculationContext messageType]
-[MFConversationCalculationContext setMessageType:]
-[MFConversationCalculationContext mailbox]
-[MFConversationCalculationContext setMailbox:]
-[MFConversationCalculationContext senderID]
-[MFConversationCalculationContext setSenderID:]
-[MFConversationCalculationContext dateReceived]
-[MFConversationCalculationContext setDateReceived:]
-[MFConversationCalculationContext automatedConversationType]
-[MFConversationCalculationContext setAutomatedConversationType:]
-[MFConversationCalculationContext handle]
-[MFConversationCalculationContext db]
-[MFConversationCalculationContext didTearDown]
-[MFConversationCalculationContext conversationsWereReset]
-[MFConversationCalculationContext setConversationsWereReset:]
-[MFConversationCalculationContext recordConversationCalculationPerformanceMetrics]
-[MFConversationCalculationContext setRecordConversationCalculationPerformanceMetrics:]
-[MFConversationCalculationContext logConversationCalculationTrace]
-[MFConversationCalculationContext setLogConversationCalculationTrace:]
-[MFConversationCalculationContext addedConversations]
-[MFConversationCalculationContext setAddedConversations:]
-[MFConversationCalculationContext removedConversations]
-[MFConversationCalculationContext setRemovedConversations:]
-[MFConversationCalculationContext updatedConversations]
-[MFConversationCalculationContext setUpdatedConversations:]
-[MFConversationCalculationContext oldConversationIDByMessage]
-[MFConversationCalculationContext setOldConversationIDByMessage:]
-[MFConversationCalculationContext currentConversationIDByMessage]
-[MFConversationCalculationContext setCurrentConversationIDByMessage:]
-[MFConversationCalculationContext messageHasReferencesTime]
-[MFConversationCalculationContext setMessageHasReferencesTime:]
-[MFConversationCalculationContext messageHasMessageIDTime]
-[MFConversationCalculationContext setMessageHasMessageIDTime:]
-[MFConversationCalculationContext conversationIDOfCloneTime]
-[MFConversationCalculationContext setConversationIDOfCloneTime:]
-[MFConversationCalculationContext conversationIDOfClosestAncestorTime]
-[MFConversationCalculationContext setConversationIDOfClosestAncestorTime:]
-[MFConversationCalculationContext descendantsOfMessagesTime]
-[MFConversationCalculationContext setDescendantsOfMessagesTime:]
-[MFConversationCalculationContext peersOfMessagesTime]
-[MFConversationCalculationContext setPeersOfMessagesTime:]
-[MFConversationCalculationContext fuzzyDescendantsToSplitTime]
-[MFConversationCalculationContext setFuzzyDescendantsToSplitTime:]
-[MFConversationCalculationContext conversationIDOfFuzzyAncestorTime]
-[MFConversationCalculationContext setConversationIDOfFuzzyAncestorTime:]
-[MFConversationCalculationContext descendantsOfMessageToSplitTime]
-[MFConversationCalculationContext setDescendantsOfMessageToSplitTime:]
-[MFConversationCalculationContext createNewConversationFromMessageTime]
-[MFConversationCalculationContext setCreateNewConversationFromMessageTime:]
-[MFConversationCalculationContext addMessageToConversationTime]
-[MFConversationCalculationContext setAddMessageToConversationTime:]
-[MFConversationCalculationContext mergeConversationsTime]
-[MFConversationCalculationContext setMergeConversationsTime:]
-[MFConversationCalculationContext calculateConversationForMessageTotalTime]
-[MFConversationCalculationContext setCalculateConversationForMessageTotalTime:]
-[MFConversationCalculationContext conversationIDOfAutomatedMessageWithReferencesTime]
-[MFConversationCalculationContext setConversationIDOfAutomatedMessageWithReferencesTime:]
-[MFConversationCalculationContext conversationIDOfAutomatedMessageWithoutReferencesTime]
-[MFConversationCalculationContext setConversationIDOfAutomatedMessageWithoutReferencesTime:]
-[MFConversationCalculationContext fixupConversationPositionsTime]
-[MFConversationCalculationContext setFixupConversationPositionsTime:]
-[MFConversationCalculationContext cloneCount]
-[MFConversationCalculationContext setCloneCount:]
-[MFConversationCalculationContext closestAncestorCount]
-[MFConversationCalculationContext setClosestAncestorCount:]
-[MFConversationCalculationContext descendantsFoundCount]
-[MFConversationCalculationContext setDescendantsFoundCount:]
-[MFConversationCalculationContext peersFoundCount]
-[MFConversationCalculationContext setPeersFoundCount:]
-[MFConversationCalculationContext fuzzyDescendantsToSplitCount]
-[MFConversationCalculationContext setFuzzyDescendantsToSplitCount:]
-[MFConversationCalculationContext fuzzyAncestorCount]
-[MFConversationCalculationContext setFuzzyAncestorCount:]
-[MFConversationCalculationContext descendantsToSplitCount]
-[MFConversationCalculationContext setDescendantsToSplitCount:]
-[MFConversationCalculationContext newConversationCount]
-[MFConversationCalculationContext setNewConversationCount:]
-[MFConversationCalculationContext addMessageToConversationCount]
-[MFConversationCalculationContext setAddMessageToConversationCount:]
-[MFConversationCalculationContext conversationsSplitCount]
-[MFConversationCalculationContext setConversationsSplitCount:]
-[MFConversationCalculationContext conversationsMergeCount]
-[MFConversationCalculationContext setConversationsMergeCount:]
-[MFConversationCalculationContext messagesMergedCount]
-[MFConversationCalculationContext setMessagesMergedCount:]
-[MFConversationCalculationContext fuzzyMatchesCacheHits]
-[MFConversationCalculationContext setFuzzyMatchesCacheHits:]
-[MFConversationCalculationContext fuzzyMatchesCacheMisses]
-[MFConversationCalculationContext setFuzzyMatchesCacheMisses:]
-[MFConversationCalculationContext automatedMessagesWithReferencesCount]
-[MFConversationCalculationContext setAutomatedMessagesWithReferencesCount:]
-[MFConversationCalculationContext automatedMessagesWithoutReferencesCount]
-[MFConversationCalculationContext setAutomatedMessagesWithoutReferencesCount:]
-[MFConversationCalculationContext conversationPositionInvalidRangeCount]
-[MFConversationCalculationContext setConversationPositionInvalidRangeCount:]
-[MFConversationCalculationContext conversationPositionInsertionPointUnavailableCount]
-[MFConversationCalculationContext setConversationPositionInsertionPointUnavailableCount:]
-[MFConversationCalculationContext conversationPositionRangeNormalCount]
-[MFConversationCalculationContext setConversationPositionRangeNormalCount:]
-[MFConversationCalculationContext conversationPositionAdjustedForAncestorCount]
-[MFConversationCalculationContext setConversationPositionAdjustedForAncestorCount:]
-[MFConversationCalculationContext conversationPositionAdjustedForDescendantCount]
-[MFConversationCalculationContext setConversationPositionAdjustedForDescendantCount:]
-[MFConversationCalculationContext messageHasReferencesStatement]
-[MFConversationCalculationContext setMessageHasReferencesStatement:]
-[MFConversationCalculationContext messageHasMessageIDStatement]
-[MFConversationCalculationContext setMessageHasMessageIDStatement:]
-[MFConversationCalculationContext conversationIDOfCloneStatement]
-[MFConversationCalculationContext setConversationIDOfCloneStatement:]
-[MFConversationCalculationContext conversationIDOfAutomatedAncestorWithReferencesStatement]
-[MFConversationCalculationContext setConversationIDOfAutomatedAncestorWithReferencesStatement:]
-[MFConversationCalculationContext conversationIDOfAutomatedPeerWithReferencesStatement]
-[MFConversationCalculationContext setConversationIDOfAutomatedPeerWithReferencesStatement:]
-[MFConversationCalculationContext conversationIDOfAutomatedMessageWithoutReferencesStatement]
-[MFConversationCalculationContext setConversationIDOfAutomatedMessageWithoutReferencesStatement:]
-[MFConversationCalculationContext conversationIDOfClosestAncestorStatement]
-[MFConversationCalculationContext setConversationIDOfClosestAncestorStatement:]
-[MFConversationCalculationContext peersOfMessageStatement]
-[MFConversationCalculationContext setPeersOfMessageStatement:]
-[MFConversationCalculationContext addMessageToConversationStatement]
-[MFConversationCalculationContext setAddMessageToConversationStatement:]
-[MFConversationCalculationContext messagesInConversationStatement]
-[MFConversationCalculationContext setMessagesInConversationStatement:]
-[MFConversationCalculationContext descendantsToSplitFromConversationStatement]
-[MFConversationCalculationContext setDescendantsToSplitFromConversationStatement:]
-[MFConversationCalculationContext descendantsOfMessageStatement]
-[MFConversationCalculationContext setDescendantsOfMessageStatement:]
-[MFConversationCalculationContext descendantBelongsToSameConversationAsAncestorStatement]
-[MFConversationCalculationContext setDescendantBelongsToSameConversationAsAncestorStatement:]
-[MFConversationCalculationContext peersToSplitFromConversationStatement]
-[MFConversationCalculationContext setPeersToSplitFromConversationStatement:]
-[MFConversationCalculationContext fuzzyMessagesWithSameSubjectStatement]
-[MFConversationCalculationContext setFuzzyMessagesWithSameSubjectStatement:]
-[MFConversationCalculationContext candidateMessagesForFuzzyMatchingStatement]
-[MFConversationCalculationContext setCandidateMessagesForFuzzyMatchingStatement:]
-[MFConversationCalculationContext fuzzyMessagesToSplitFromConversationStatement]
-[MFConversationCalculationContext setFuzzyMessagesToSplitFromConversationStatement:]
-[MFConversationCalculationContext recipientsForRowIDStatement]
-[MFConversationCalculationContext setRecipientsForRowIDStatement:]
-[MFConversationCalculationContext dateReceivedForRowIDStatement]
-[MFConversationCalculationContext setDateReceivedForRowIDStatement:]
-[MFConversationCalculationContext senderForRowIDStatement]
-[MFConversationCalculationContext setSenderForRowIDStatement:]
-[MFConversationCalculationContext conversationIDForRowIDStatement]
-[MFConversationCalculationContext setConversationIDForRowIDStatement:]
-[MFConversationCalculationContext setFuzzyAncestorForRowIDStatement]
-[MFConversationCalculationContext setSetFuzzyAncestorForRowIDStatement:]
-[MFConversationCalculationContext subjectForRowIDStatement]
-[MFConversationCalculationContext setSubjectForRowIDStatement:]
-[MFConversationCalculationContext automatedConversationTypeForRowIDStatement]
-[MFConversationCalculationContext setAutomatedConversationTypeForRowIDStatement:]
-[MFConversationCalculationContext clonesForRowIDStatement]
-[MFConversationCalculationContext setClonesForRowIDStatement:]
-[MFConversationCalculationContext countOfDistinctAutomatedConversationTypesForConversationIDStatement]
-[MFConversationCalculationContext setCountOfDistinctAutomatedConversationTypesForConversationIDStatement:]
-[MFConversationCalculationContext maxConversationIDStatement]
-[MFConversationCalculationContext setMaxConversationIDStatement:]
-[MFConversationCalculationContext messagesMissingConversationPositionStatement]
-[MFConversationCalculationContext setMessagesMissingConversationPositionStatement:]
-[MFConversationCalculationContext updateConversationPositionStatement]
-[MFConversationCalculationContext setUpdateConversationPositionStatement:]
-[MFConversationCalculationContext conversationPositionOfClosestDescendantStatement]
-[MFConversationCalculationContext setConversationPositionOfClosestDescendantStatement:]
-[MFConversationCalculationContext conversationPositionOfClosestAncestorStatement]
-[MFConversationCalculationContext setConversationPositionOfClosestAncestorStatement:]
-[MFConversationCalculationContext .cxx_destruct]
-[MFConversationCalculator init]
+[MFConversationCalculator allocWithZone:]
+[MFConversationCalculator sharedInstance]
___42+[MFConversationCalculator sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFConversationCalculator dealloc]
-[MFConversationCalculator updateConversationsIfNeededWithHandle:]
-[MFConversationCalculator resetConversationIDForMessages:withHandle:]
-[MFConversationCalculator updateAllRowsMissingConversationsWithHandle:conversationUserInfo:conversationsWereReset:progressDelegate:]
___133-[MFConversationCalculator updateAllRowsMissingConversationsWithHandle:conversationUserInfo:conversationsWereReset:progressDelegate:]_block_invoke
___copy_helper_block_169
___destroy_helper_block_170
-[MFConversationCalculator _updateAllRowsMissingFuzzyAncestorWithHandle:]
-[MFConversationCalculator _updateAllRowsMissingRootValueWithHandle:]
-[MFConversationCalculator _calculateConversationForMessage:]
-[MFConversationCalculator _createNewConversationFromMessage:]
-[MFConversationCalculator _addMessage:toConversation:withConversationPosition:]
-[MFConversationCalculator _mergeMessagesInConversations:withConversation:]
___75-[MFConversationCalculator _mergeMessagesInConversations:withConversation:]_block_invoke
___copy_helper_block_513
___destroy_helper_block_514
-[MFConversationCalculator _fixupConversationPositionsForConversation:]
___71-[MFConversationCalculator _fixupConversationPositionsForConversation:]_block_invoke
___copy_helper_block_547
___destroy_helper_block_548
-[MFConversationCalculator _conversationPositionForMessageWithRowID:dateReceived:conversationID:context:]
-[MFConversationCalculator updateSubjectPrefixesWithHandle:onlyForMessagesMissingConversations:]
___96-[MFConversationCalculator updateSubjectPrefixesWithHandle:onlyForMessagesMissingConversations:]_block_invoke
___copy_helper_block_606
___destroy_helper_block_607
-[MFConversationCalculator _updatePrefixWithHandle:withNewPrefix:forMessagesWithSubject:]
-[MFConversationCalculator isRootMessageSubject:]
-[MFConversationCalculator isRootSubjectPrefix:]
-[MFConversationCalculator updateConversationRootsWithHandle:onlyForMessagesMissingRoots:]
-[MFConversationCalculator logConversationCalculationPerformance]
-[MFConversationCalculator setLogConversationCalculationPerformance:]
-[MFConversationCalculator logConversationCalculationTrace]
-[MFConversationCalculator setLogConversationCalculationTrace:]
-[MFConversationCalculator logConversationCalculationSubjectPrefixTrace]
-[MFConversationCalculator setLogConversationCalculationSubjectPrefixTrace:]
-[MFConversationCalculator forceConversationSplits]
-[MFConversationCalculator setForceConversationSplits:]
-[MFConversationCalculator alwaysValidateConversations]
-[MFConversationCalculator setAlwaysValidateConversations:]
-[MFConversationCalculator recordConversationCalculationPerformanceMetrics]
-[MFConversationCalculator setRecordConversationCalculationPerformanceMetrics:]
-[NSPersistentStoreCoordinator(MailAdditions) addSQLPersistentStoreFromPath:type:error:]
-[NSPersistentStoreCoordinator(MailAdditions) _addSQLPersistentStoreFromPath:URL:type:recoveringFromError:]
+[MFCriterion criteriaFromDefaultsArray:]
+[MFCriterion criteriaFromDefaultsArray:removingRecognizedKeys:]
+[MFCriterion defaultsArrayFromCriteria:]
+[MFCriterion compoundCriterionWithCriteria:]
+[MFCriterion searchUsingOnlySpotlight]
+[MFCriterion logSpotlightQueries]
___34+[MFCriterion logSpotlightQueries]_block_invoke
+[MFCriterion setLogSpotlightQueries:]
+[MFCriterion logSpotlightCallbacks]
___36+[MFCriterion logSpotlightCallbacks]_block_invoke
+[MFCriterion setLogSpotlightCallbacks:]
+[MFCriterion logCriterionConversionErrors]
___43+[MFCriterion logCriterionConversionErrors]_block_invoke
+[MFCriterion logSpotlightStatus]
+[MFCriterion queryScopePathForMailbox:]
-[MFCriterion compoundCriterionBySplittingExpression]
___53-[MFCriterion compoundCriterionBySplittingExpression]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFCriterion initWithDictionary:andRemoveRecognizedKeysIfMutable:]
-[MFCriterion init]
-[MFCriterion initWithCriterion:expression:]
-[MFCriterion initWithDictionary:]
-[MFCriterion dictionaryRepresentation]
-[MFCriterion criterionType]
-[MFCriterion hasExpression]
-[MFCriterion setCriterionType:]
-[MFCriterion setCriterionIdentifier:]
-[MFCriterion _setCriterionIdentifier:]
-[MFCriterion criterionIdentifier]
+[MFCriterion criterionTypeForString:]
+[MFCriterion stringForCriterionType:]
-[MFCriterion _qualifierString]
-[MFCriterion containsSpotlightCriterion]
-[MFCriterion containsSpotlightOnlyCriterion]
-[MFCriterion containsWhereFromsCriterion]
-[MFCriterion containsMailboxCriterion]
-[MFCriterion _containsVIPSendersCriterionWithInFlightURLs:]
-[MFCriterion containsVIPSendersCriterion]
-[MFCriterion _isSpotlightOnlyCriterion]
-[MFCriterion isSpotlightCriterion]
-[MFCriterion _isCompoundCriterionSpotlightCriterion]
-[MFCriterion _spotlightQueryStringWithInFlightURLs:]
-[MFCriterion spotlightQueryString]
-[MFCriterion _spotlightQueryStringForMessageID]
-[MFCriterion _spotlightQueryStringForInASpecialMailboxCriterionWithQualifier:inFlightURLs:]
-[MFCriterion _spotlightQueryStringForNotInAJunkOrTrashMailboxCriterion]
-[MFCriterion _spotlightQueryStringForMailboxCriterion:]
-[MFCriterion _spotlightQueryStringForGmailLabelCriterion]
-[MFCriterion _spotlightQueryStringForAccountCriterion:]
-[MFCriterion _spotlightQueryStringForAnyAttachmentCriterion]
-[MFCriterion _spotlightQueryStringForGroupOrVIPSendersCriterion]
-[MFCriterion _spotlightQueryStringForFlaggedStatusCriterion]
-[MFCriterion _spotlightQueryStringForFlagCriterion]
-[MFCriterion _spotlightQueryStringForPriorityCriterion]
-[MFCriterion _spotlightDateQueryStringForAttribute:]
-[MFCriterion _spotlightQueryStringForBodyCriterion]
-[MFCriterion _spotlightQueryStringForAttachmentTypeCriterion]
-[MFCriterion _spotlightQueryStringForContainsAttachmentsCriterion]
-[MFCriterion _spotlightQueryStringForHeaderCriterion]
-[MFCriterion _spotlightQueryStringForAnyRecipientCriterion]
-[MFCriterion escapedString:]
-[MFCriterion _spotlightStringForHeaderQueryString:withSpotlightAttribute:]
-[MFCriterion _spotlightQueryStringForCompoundCriterionWithInFlightURLs:]
-[MFCriterion _comparisonOperatorForQualifier:]
-[MFCriterion _searchTermForExpression:withQualifer:exactMatch:]
-[MFCriterion utiForMessageAttachmentType:]
-[MFCriterion ruleQualifierForString:]
-[MFCriterion stringForRuleQualifier:]
-[MFCriterion simplifiedCriterion]
-[MFCriterion _simplifyOnce]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___28-[MFCriterion _simplifyOnce]_block_invoke
___copy_helper_block_574
___destroy_helper_block_575
-[MFCriterion criteria]
-[MFCriterion setCriteria:]
-[MFCriterion descriptionWithDepth:]
-[MFCriterion description]
-[MFCriterion isValid:options:]
-[MFCriterion isEqualToCriterion:]
+[MFCriterion criteria:areEqualToCriteria:]
-[MFCriterion containsJunkMailboxCriterion]
-[MFCriterion version]
-[MFCriterion smartMailboxesVersion]
-[MFCriterion name]
-[MFCriterion setName:]
-[MFCriterion expression]
-[MFCriterion setExpression:]
-[MFCriterion qualifier]
-[MFCriterion setQualifier:]
-[MFCriterion dateUnits]
-[MFCriterion setDateUnits:]
-[MFCriterion dateIsRelative]
-[MFCriterion setDateIsRelative:]
-[MFCriterion allCriteriaMustBeSatisfied]
-[MFCriterion setAllCriteriaMustBeSatisfied:]
-[MFCriterion specialMailboxType]
-[MFCriterion setSpecialMailboxType:]
-[MFCriterion knownLimit]
-[MFCriterion setKnownLimit:]
-[MFCriterion originatedFromSearchSuggestion]
-[MFCriterion setOriginatedFromSearchSuggestion:]
-[MFCriterion uniqueId]
-[MFCriterion .cxx_destruct]
-[MFCriterion(MFLibraryAdditions) isExpressibleInTigerSchema]
-[MFCriterion(MFLibraryAdditions) criterionExpressionForEqualRelativeDates:depth:enclosingSmartMailboxes:]
-[MFCriterion(MFLibraryAdditions) criterionValueForNotEqualRelativeDates:]
-[MFCriterion(MFLibraryAdditions) criterionForSQL]
-[MFCriterion(MFLibraryAdditions) criterionForSQLIgnoringGmail]
-[MFCriterion(MFLibraryAdditions) criterionForSpotlight]
-[MFCriterion(MFLibraryAdditions) SQLExpressionWithTables:baseTable:]
-[MFCriterion(MFLibraryAdditions) bestBaseTable]
-[MFCriterion(MFLibraryAdditions) convertToGmailLabelCriterionIfNeeded]
-[MFMessageCriterion(PrivateLibraryAdditions) fixOnceWithExpandedSmartMailboxes:forSpotlight:]
-[MFMessageCriterion(PrivateLibraryAdditions) criterionByMergingSpotlightCriteria]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___82-[MFMessageCriterion(PrivateLibraryAdditions) criterionByMergingSpotlightCriteria]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMessageCriterion(PrivateLibraryAdditions) hasNumberCriterion]
-[MFMessageCriterion(PrivateLibraryAdditions) isExpressibleInTigerSchema]
-[MFMessageCriterion(PrivateLibraryAdditions) SQLExpressionWithContext:depth:enclosingSmartMailboxes:]
_expressionForOperator
_expressionForOperatorAndValue
-[MFCriterion(PrivateLibraryAdditions) criterionForSearchWithExpandedSmartMailboxes:forSpotlight:convertingGmailCriteria:]
-[MFCriterion(PrivateLibraryAdditions) fixOnceWithExpandedSmartMailboxes:forSpotlight:]
___87-[MFCriterion(PrivateLibraryAdditions) fixOnceWithExpandedSmartMailboxes:forSpotlight:]_block_invoke
___copy_helper_block_329
___destroy_helper_block_330
-[MFCriterion(PrivateLibraryAdditions) criterionByMergingSpotlightCriteria]
-[MFCriterion(PrivateLibraryAdditions) hasNumberCriterion]
-[MFCriterion(PrivateLibraryAdditions) SQLExpressionWithContext:depth:enclosingSmartMailboxes:]
+[MFCrossProcessLock defaultMailCrossProcessLock]
___49+[MFCrossProcessLock defaultMailCrossProcessLock]_block_invoke
-[MFCrossProcessLock initWithIdentifier:]
-[MFCrossProcessLock dealloc]
-[MFCrossProcessLock lock]
-[MFCrossProcessLock unlock]
-[MFCrossProcessLock tryLock]
-[MFCrossProcessLock lockBeforeDate:]
-[MFCrossProcessLock description]
-[MFCrossProcessLock identifier]
-[MFCrossProcessLock .cxx_destruct]
-[MFDatabaseRecoverer initWithPath:type:]
-[MFDatabaseRecoverer init]
-[MFDatabaseRecoverer _analyzeBusyCondition]
-[MFDatabaseRecoverer analyzeBusyCondition]
-[MFDatabaseRecoverer fileLocked]
-[MFDatabaseRecoverer aRemoteApplicationIsAccessingTheDatabase]
-[MFDatabaseRecoverer lockFileFound]
-[MFDatabaseRecoverer removeLockFile]
-[MFDatabaseRecoverer recover]
-[MFDatabaseRecoverer _removeLocks]
-[MFDatabaseRecoverer _moveToUniquePath]
-[MFDatabaseRecoverer _moveToOriginalPath:]
+[MFDatabaseRecoverer moveDatabaseToUniquePath:]
+[MFDatabaseRecoverer moveDatabaseFromPath:toPath:]
-[MFDatabaseRecoverer path]
-[MFDatabaseRecoverer setPath:]
-[MFDatabaseRecoverer type]
-[MFDatabaseRecoverer setType:]
-[MFDatabaseRecoverer analysisResult]
-[MFDatabaseRecoverer setAnalysisResult:]
-[MFDatabaseRecoverer .cxx_destruct]
-[NSUserDefaults(MailAdditions) downloadDirectoryURL]
-[NSUserDefaults(MailAdditions) setDownloadDirectoryURL:]
-[NSUserDefaults(MailAdditions) junkMailBehavior]
-[NSUserDefaults(MailAdditions) setJunkMailBehavior:]
-[NSUserDefaults(MailAdditions) junkMailEvaluationAfterRules]
-[NSUserDefaults(MailAdditions) setJunkMailEvaluationAfterRules:]
-[NSUserDefaults(MailAdditions) autoSaveDelay]
-[NSUserDefaults(MailAdditions) autoSaveStoreDelay]
-[NSUserDefaults(MailAdditions) autosaveWindows]
-[NSUserDefaults(MailAdditions) setAutosaveWindows:]
-[NSUserDefaults(MailAdditions) displayNameForFlagColor:]
-[NSUserDefaults(MailAdditions) setDisplayName:forFlagColor:]
-[NSUserDefaults(MailAdditions) _mf_objectForKey:version:]
-[NSUserDefaults(MailAdditions) _mf_setObject:forKey:version:]
+[MFDefaults allocWithZone:]
+[MFDefaults sharedInstance]
___28+[MFDefaults sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFDefaults init]
-[MFDefaults dealloc]
+[MFDefaults setupLoggingDefaults]
+[MFDefaults setPreferredWindowBackingLocation:]
+[MFDefaults preferredWindowBackingLocation]
+[MFDefaults deferredPreferredWindowBackingLocation]
-[MFDefaults composeMode]
-[MFDefaults setComposeMode:]
-[MFDefaults archiveMailbox]
-[MFDefaults draftsMailbox]
-[MFDefaults notesMailbox]
-[MFDefaults trashMailboxName]
-[MFDefaults todosMailbox]
-[MFDefaults dictionaryForKey:]
-[MFDefaults stringForKey:]
-[MFDefaults removeObjectForKey:]
-[MFDefaults setObject:forKey:]
-[MFDefaults objectForKey:]
-[MFDefaults setBool:forKey:]
-[MFDefaults boolForKey:]
-[MFDefaults integerForKey:]
-[MFDefaults synchronize]
+[MFDefaults defaultNameForFlagColor:]
+[MFDeliveryAccount initialize]
+[MFDeliveryAccount reloadDeliveryAccounts]
+[MFDeliveryAccount _deliveryAccountsIncludingUnknownTypes]
+[MFDeliveryAccount deliveryAccounts]
___37+[MFDeliveryAccount deliveryAccounts]_block_invoke
+[MFDeliveryAccount setDeliveryAccounts:]
+[MFDeliveryAccount addDeliveryAccount:]
+[MFDeliveryAccount insertObjectInDeliveryAccounts:atIndex:]
+[MFDeliveryAccount removeDeliveryAccount:]
+[MFDeliveryAccount registerDynamicAccount:]
+[MFDeliveryAccount unregisterDynamicAccount:]
+[MFDeliveryAccount _postDeliveryAccountsHaveChanged]
+[MFDeliveryAccount saveAccountInfoToDefaults]
+[MFDeliveryAccount _deliveryIdentifierWithHostname:username:]
+[MFDeliveryAccount accountWithDeliveryIdentifier:]
+[MFDeliveryAccount _accountFromCollection:withDeliveryIdentifier:]
+[MFDeliveryAccount accountWithDomain:]
+[MFDeliveryAccount accountWithWhichToSendMessage:]
+[MFDeliveryAccount accountForHeaders:]
+[MFDeliveryAccount existingAccountWithHostname:username:]
+[MFDeliveryAccount accountWithHostname:username:]
+[MFDeliveryAccount accountWithHostname:username:lookForExistingAccounts:addToDeliveryAccountsIfNeeded:]
-[MFDeliveryAccount _setAccountInfo:]
-[MFDeliveryAccount autodiscoverSettings:]
-[MFDeliveryAccount delivererClass]
-[MFDeliveryAccount isDynamic]
-[MFDeliveryAccount associatedAccount]
-[MFDeliveryAccount setAssociatedAccount:]
-[MFDeliveryAccount displayName]
-[MFDeliveryAccount deliveryIdentifier]
-[MFDeliveryAccount shouldUseAuthentication]
-[MFDeliveryAccount setShouldUseAuthentication:]
-[MFDeliveryAccount maximumMessageBytes]
-[MFDeliveryAccount setMaximumMessageBytes:]
-[MFDeliveryAccount remoteMailAccountsEmployedBy]
-[MFEWSAccount initWithAccountInfo:]
___36-[MFEWSAccount initWithAccountInfo:]_block_invoke
-[MFEWSAccount dealloc]
-[MFEWSAccount _infoForMatchingURL:]
-[MFEWSAccount syncableURLString]
+[MFEWSAccount accountTypeString]
-[MFEWSAccount iaServiceType]
-[MFEWSAccount standardPorts]
-[MFEWSAccount standardSSLPorts]
-[MFEWSAccount defaultPortNumber]
-[MFEWSAccount defaultSecurePortNumber]
-[MFEWSAccount keychainProtocol]
-[MFEWSAccount requiresAuthentication]
-[MFEWSAccount securityLayerType]
-[MFEWSAccount setSecurityLayerType:]
-[MFEWSAccount preferredAuthScheme]
-[MFEWSAccount setPreferredAuthScheme:]
-[MFEWSAccount _setAccountInfo:]
-[MFEWSAccount defaultsDictionary]
-[MFEWSAccount setUsesSSL:]
-[MFEWSAccount _setUsesSSL:releasingConnections:]
-[MFEWSAccount setPortNumber:]
-[MFEWSAccount permanentPassword]
-[MFEWSAccount setPermanentPassword:]
-[MFEWSAccount sessionPassword]
-[MFEWSAccount setSessionPassword:]
-[MFEWSAccount _passwordWithPersistence:]
-[MFEWSAccount _setPassword:persistence:]
-[MFEWSAccount setConfigureDynamically:]
-[MFEWSAccount autodiscoverSettings:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___37-[MFEWSAccount autodiscoverSettings:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFEWSAccount newConnectedConnectionDiscoveringBestSettings:withConnectTimeout:readWriteTimeout:]
-[MFEWSAccount authenticatedConnection]
-[MFEWSAccount connectAndAuthenticate:]
-[MFEWSAccount canAuthenticateWithScheme:]
-[MFEWSAccount releaseAllConnections]
-[MFEWSAccount setIsOffline:]
-[MFEWSAccount setIsWillingToGoOnline:]
-[MFEWSAccount usesConnectionBasedAutodiscovery]
+[MFEWSAccount defaultPathNameForAccount]
-[MFEWSAccount _URLPersistenceScheme]
+[MFEWSAccount keyPathsForValuesAffecting_URLInternalConnectionScheme]
-[MFEWSAccount _URLInternalConnectionScheme]
+[MFEWSAccount keyPathsForValuesAffecting_URLExternalConnectionScheme]
-[MFEWSAccount _URLExternalConnectionScheme]
-[MFEWSAccount storeClassForMailbox:]
-[MFEWSAccount supportsRichTextNotes]
-[MFEWSAccount defaultShouldShowNotesInInbox]
-[MFEWSAccount mailboxPathExtension]
-[MFEWSAccount shouldMoveDeletedMessagesToTrash]
-[MFEWSAccount setShouldMoveDeletedMessagesToTrash:]
-[MFEWSAccount primaryMailbox]
-[MFEWSAccount deleteConvertsStoreToFolder]
-[MFEWSAccount respondToHostBecomingReachable]
-[MFEWSAccount fetchSynchronouslyIsAuto:]
-[MFEWSAccount synchronizeAllMailboxes]
-[MFEWSAccount _shouldSynchronizeMailbox:]
-[MFEWSAccount _synchronizeMailboxesSynchronously]
___50-[MFEWSAccount _synchronizeMailboxesSynchronously]_block_invoke
___copy_helper_block_457
___destroy_helper_block_458
-[MFEWSAccount maximumConcurrentSyncFolderOperationCount]
___57-[MFEWSAccount maximumConcurrentSyncFolderOperationCount]_block_invoke
-[MFEWSAccount _supportsMailboxListInitialization]
-[MFEWSAccount _synchronizeMailboxListHighPriority:]
___52-[MFEWSAccount _synchronizeMailboxListHighPriority:]_block_invoke
___copy_helper_block_492
___destroy_helper_block_493
___52-[MFEWSAccount _synchronizeMailboxListHighPriority:]_block_invoke506
-[MFEWSAccount _synchronouslyLoadListingForParent:]
-[MFEWSAccount _setChildren:forMailbox:]
-[MFEWSAccount _defaultSpecialMailboxRelativePathForType:]
-[MFEWSAccount _specialMailboxRelativePathForType:]
-[MFEWSAccount _setSpecialMailboxRelativePath:forType:]
-[MFEWSAccount _readMailboxCache]
-[MFEWSAccount setEmailAddresses:]
-[MFEWSAccount createMailboxWithParent:displayName:localizedDisplayName:]
-[MFEWSAccount _createMailboxWithParent:displayName:localizedDisplayName:type:]
-[MFEWSAccount canMailboxBeRenamed:]
-[MFEWSAccount renameMailbox:newDisplayName:parent:]
-[MFEWSAccount canMailboxBeDeleted:]
-[MFEWSAccount _deleteMailbox:reflectToServer:]
-[MFEWSAccount supportsSlashesInMailboxName]
-[MFEWSAccount validNameForMailbox:fromDisplayName:error:]
-[MFEWSAccount _mailboxDisplayNameForFolderName:]
-[MFEWSAccount _folderNameForMailboxDisplayName:]
-[MFEWSAccount deliveryAccount]
-[MFEWSAccount setDeliveryAccount:]
-[MFEWSAccount dynamicDeliveryAccount]
-[MFEWSAccount _specialMailboxWithType:create:isLocal:]
-[MFEWSAccount storeJunkOnServerDefault]
-[MFEWSAccount externalHostname]
-[MFEWSAccount setExternalHostname:]
-[MFEWSAccount externalPortNumber]
-[MFEWSAccount setExternalPortNumber:]
-[MFEWSAccount externalUsesSSL]
-[MFEWSAccount setExternalUsesSSL:]
-[MFEWSAccount internalServerPath]
-[MFEWSAccount setInternalServerPath:]
-[MFEWSAccount externalServerPath]
-[MFEWSAccount setExternalServerPath:]
-[MFEWSAccount _serverPathWithAccountInfoKey:]
-[MFEWSAccount _setServerPath:accountInfoKey:]
-[MFEWSAccount folderHierarchySyncState]
-[MFEWSAccount setFolderHierarchySyncState:]
-[MFEWSAccount rootFolderId]
-[MFEWSAccount setRootFolderId:]
-[MFEWSAccount lastUsedAutodiscoverURL]
-[MFEWSAccount setLastUsedAutodiscoverURL:]
+[MFEWSAccount keyPathsForValuesAffectingInternalConnectionURL]
-[MFEWSAccount internalConnectionURL]
-[MFEWSAccount setInternalConnectionURL:]
+[MFEWSAccount keyPathsForValuesAffectingExternalConnectionURL]
-[MFEWSAccount externalConnectionURL]
-[MFEWSAccount setExternalConnectionURL:]
-[MFEWSAccount _connectionURL:]
-[MFEWSAccount _setConnectionURL:isExternal:]
-[MFEWSAccount connectionURL]
-[MFEWSAccount _isSameAsCalGroup:]
-[MFEWSAccount getUserOofSettings]
-[MFEWSAccount setUserOofSettingsState:internalReply:externalReply:startTime:endTime:]
-[MFEWSAccount _shouldHideMailbox:withType:]
+[MFEWSAccount _calendarAccountForHostname:username:]
+[MFEWSAccount calendarAccountExistsForHostname:username:]
+[MFEWSAccount calendarAccountExistsWithRootFolderId:]
+[MFEWSAccount _calendarAccountWithRootFolderId:]
+[MFEWSAccount _contactsAccountForHostname:username:]
+[MFEWSAccount contactsAccountExistsForHostname:username:]
+[MFEWSAccount contactsAccountExistsWithRootFolderId:]
+[MFEWSAccount _contactsAccountWithRootFolderId:]
-[MFEWSAccount _kickOffReautodiscovery:]
___40-[MFEWSAccount _kickOffReautodiscovery:]_block_invoke
___copy_helper_block_779
___destroy_helper_block_780
-[MFEWSAccount _autodiscoverForConnectionFailure:]
-[MFEWSAccount _autodiscoverWithEmailAddress:error:]
___52-[MFEWSAccount _autodiscoverWithEmailAddress:error:]_block_invoke
___copy_helper_block_839
___destroy_helper_block_840
-[MFEWSAccount messageDeliveryDidFinish:]
-[MFEWSAccount mailboxNameForFolderIdString:]
-[MFEWSAccount createMailboxFromEWSFolder:]
-[MFEWSAccount _isSyncIssuesFolder:]
-[MFEWSAccount updateMailboxForEWSFolder:]
-[MFEWSAccount deleteMailboxForEWSFolderIdString:]
-[MFEWSAccount deleteEWSItemsWithIdStrings:fromFolderWithIdString:]
-[MFEWSAccount undeleteMessagesWithEWSItemIdStrings:fromFolderWithIdString:]
-[MFEWSAccount deletedEWSIdStringsFromStrings:inFolderWithIdString:]
-[MFEWSAccount updateEWSOfflineIdsToRealIds:forFolders:]
-[MFEWSAccount _setupMailbox:forFolderId:]
-[MFEWSAccount _mailboxForFolderId:]
-[MFEWSAccount _setMailbox:forFolderId:]
-[MFEWSAccount _saveFolderId:forMailbox:]
-[MFEWSAccount _clearFolderId:forMailbox:]
-[MFEWSAccount _loadFolderIdForMailbox:]
-[MFEWSAccount _setEWSError:]
+[MFEWSAccount existingAccountFromMailWithRootFolderId:]
+[MFEWSAccount resetAllFolderHierarchySyncStates]
-[MFEWSAccount messageTraceEWSParameters]
-[MFEWSAccount gateway]
-[MFEWSAccount setGateway:]
-[MFEWSAccount connection]
-[MFEWSAccount setConnection:]
-[MFEWSAccount distinguishedFolderIdsAndMailboxTypes]
-[MFEWSAccount setDistinguishedFolderIdsAndMailboxTypes:]
-[MFEWSAccount lastFullFetchDuration]
-[MFEWSAccount setLastFullFetchDuration:]
-[MFEWSAccount lastFullFetchTime]
-[MFEWSAccount setLastFullFetchTime:]
-[MFEWSAccount messageTracerUUID]
-[MFEWSAccount setMessageTracerUUID:]
-[MFEWSAccount useExternalURL]
-[MFEWSAccount setUseExternalURL:]
-[MFEWSAccount syncIssuesEntryID]
-[MFEWSAccount setSyncIssuesEntryID:]
-[MFEWSAccount externalAudienceType]
-[MFEWSAccount setExternalAudienceType:]
-[MFEWSAccount autodiscoveryTimer]
-[MFEWSAccount autodiscoverQueue]
-[MFEWSAccount ewsDeliveryAccount]
-[MFEWSAccount remoteTaskQueue]
-[MFEWSAccount remoteFetchQueue]
-[MFEWSAccount requestResponseQueue]
-[MFEWSAccount bodyFetchQueue]
-[MFEWSAccount .cxx_destruct]
-[MFEWSConnection account]
-[MFEWSConnection setAccount:]
-[MFEWSConnection connectDiscoveringBestSettings:]
-[MFEWSConnection authenticate]
-[MFEWSConnection connectAndAuthenticate]
-[MFEWSConnection _connectAndAuthenticateDiscoveringBestSettings:]
-[MFEWSConnection _fetchRootFolderId:]
-[MFEWSConnection _setupConnectionErrorForMonitorWithPort:usingSSL:]
-[MFEWSConnection isValid]
-[MFEWSConnection quit]
-[MFEWSConnection disconnect]
-[MFEWSConnection sendMessage:forRequest:]
-[MFEWSConnection _handleServerBusyError:]
-[MFEWSConnection _sendMessage:error:]
-[MFEWSConnection disconnectWithError:]
-[MFEWSConnection exchangeServiceBinding:willSendRequestForAuthenticationChallenge:]
-[MFEWSConnection exchangeServiceBinding:didReceiveCertificateError:]
-[MFEWSConnection binding]
-[MFEWSConnection setBinding:]
-[MFEWSConnection .cxx_destruct]
-[MFEWSCopyItemsRequestOperation initWithEWSItemIds:sourceIdString:destinationIdString:gateway:errorHandler:]
-[MFEWSCopyItemsRequestOperation initWithCoder:]
-[MFEWSCopyItemsRequestOperation encodeWithCoder:]
-[MFEWSCopyItemsRequestOperation initWithGateway:errorHandler:]
-[MFEWSCopyItemsRequestOperation dealloc]
-[MFEWSCopyItemsRequestOperation _ewsCopyItemsRequestOperationCommonInitWithEWSItemIds:sourceIdString:destinationIdString:]
-[MFEWSCopyItemsRequestOperation activityString]
-[MFEWSCopyItemsRequestOperation prepareRequest]
-[MFEWSCopyItemsRequestOperation setupOfflineResponse]
-[MFEWSCopyItemsRequestOperation observeValueForKeyPath:ofObject:change:context:]
___81-[MFEWSCopyItemsRequestOperation observeValueForKeyPath:ofObject:change:context:]_block_invoke
+[MFEWSCopyItemsRequestOperation classForResponse]
-[MFEWSCopyItemsRequestOperation sourceEWSFolderIdString]
-[MFEWSCopyItemsRequestOperation destinationEWSFolderIdString]
-[MFEWSCopyItemsRequestOperation EWSItemIds]
-[MFEWSCopyItemsRequestOperation offlineCreatedEWSItemIdStrings]
-[MFEWSCopyItemsRequestOperation setOfflineCreatedEWSItemIdStrings:]
-[MFEWSCopyItemsRequestOperation .cxx_destruct]
-[MFEWSCopyItemsResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSCopyItemsResponseOperation executeOperation]
-[MFEWSCopyItemsResponseOperation destinationEWSItemIdStrings]
-[MFEWSCopyItemsResponseOperation setDestinationEWSItemIdStrings:]
-[MFEWSCopyItemsResponseOperation expectedResponseCount]
-[MFEWSCopyItemsResponseOperation setExpectedResponseCount:]
-[MFEWSCopyItemsResponseOperation .cxx_destruct]
-[MFEWSCreateEventReplyRequestOperation initWithItemIdString:folderIdString:messageType:responseType:disposition:gateway:errorHandler:]
-[MFEWSCreateEventReplyRequestOperation _ewsCreateEventReplyRequestOperationCommonInitWithItemIdString:responseType:]
-[MFEWSCreateEventReplyRequestOperation initWithFolderIdString:messageType:disposition:gateway:errorHandler:]
-[MFEWSCreateEventReplyRequestOperation initWithCoder:]
-[MFEWSCreateEventReplyRequestOperation encodeWithCoder:]
-[MFEWSCreateEventReplyRequestOperation prepareRequest]
+[MFEWSCreateEventReplyRequestOperation classForResponse]
-[MFEWSCreateEventReplyRequestOperation messageMeetingItemIdString]
-[MFEWSCreateEventReplyRequestOperation messageResponseType]
-[MFEWSCreateEventReplyRequestOperation getItemsResponse]
-[MFEWSCreateEventReplyRequestOperation .cxx_destruct]
-[MFEWSCreateEventReplyResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSCreateEventReplyResponseOperation executeOperation]
-[MFEWSCreateFolderRequestOperation initWithParentEWSFolderIdString:name:mailboxType:gateway:]
-[MFEWSCreateFolderRequestOperation initWithCoder:]
-[MFEWSCreateFolderRequestOperation encodeWithCoder:]
-[MFEWSCreateFolderRequestOperation initWithGateway:errorHandler:]
-[MFEWSCreateFolderRequestOperation _ewsCreateFolderRequestOperationCommonInitWithParentFolderIdString:name:mailboxType:]
-[MFEWSCreateFolderRequestOperation dealloc]
-[MFEWSCreateFolderRequestOperation copyWithUpdatedNameCount:]
-[MFEWSCreateFolderRequestOperation activityString]
-[MFEWSCreateFolderRequestOperation isFolderRequest]
-[MFEWSCreateFolderRequestOperation prepareRequest]
-[MFEWSCreateFolderRequestOperation setupOfflineResponse]
-[MFEWSCreateFolderRequestOperation observeValueForKeyPath:ofObject:change:context:]
+[MFEWSCreateFolderRequestOperation classForResponse]
-[MFEWSCreateFolderRequestOperation parentEWSFolderIdString]
-[MFEWSCreateFolderRequestOperation offlineCreatedEWSFolderIdString]
-[MFEWSCreateFolderRequestOperation setOfflineCreatedEWSFolderIdString:]
-[MFEWSCreateFolderRequestOperation folderName]
-[MFEWSCreateFolderRequestOperation mailboxType]
-[MFEWSCreateFolderRequestOperation .cxx_destruct]
-[MFEWSCreateFolderResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSCreateFolderResponseOperation executeOperation]
-[MFEWSCreateFolderResponseOperation createdFolderId]
-[MFEWSCreateFolderResponseOperation setCreatedFolderId:]
-[MFEWSCreateFolderResponseOperation .cxx_destruct]
-[MFEWSCreateItemRequestOperation initWithFolderIdString:messageType:disposition:gateway:errorHandler:]
-[MFEWSCreateItemRequestOperation _ewsCreateItemRequestOperationCommonInitWithFolderIdString:messageType:disposition:]
-[MFEWSCreateItemRequestOperation initWithGateway:errorHandler:]
-[MFEWSCreateItemRequestOperation initWithCoder:]
-[MFEWSCreateItemRequestOperation encodeWithCoder:]
-[MFEWSCreateItemRequestOperation dealloc]
-[MFEWSCreateItemRequestOperation activityString]
-[MFEWSCreateItemRequestOperation setupOfflineResponse]
-[MFEWSCreateItemRequestOperation observeValueForKeyPath:ofObject:change:context:]
+[MFEWSCreateItemRequestOperation classForResponse]
-[MFEWSCreateItemRequestOperation EWSFolderIdString]
-[MFEWSCreateItemRequestOperation messageType]
-[MFEWSCreateItemRequestOperation disposition]
-[MFEWSCreateItemRequestOperation offlineCreatedEWSItemIdString]
-[MFEWSCreateItemRequestOperation setOfflineCreatedEWSItemIdString:]
-[MFEWSCreateItemRequestOperation wroteOfflineData]
-[MFEWSCreateItemRequestOperation setWroteOfflineData:]
-[MFEWSCreateItemRequestOperation .cxx_destruct]
-[MFEWSCreateItemResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSCreateItemResponseOperation executeOperation]
-[MFEWSCreateItemResponseOperation itemId]
-[MFEWSCreateItemResponseOperation setItemId:]
-[MFEWSCreateItemResponseOperation .cxx_destruct]
-[MFEWSCreateMessageRequestOperation initWithMessage:data:folderIdString:messageType:flags:existingItemIdString:sender:recipientsByHeaderKey:disposition:gateway:errorHandler:]
-[MFEWSCreateMessageRequestOperation _ewsCreateMessageRequestOperationCommonInitWithMessage:data:flags:existingItemIdString:sender:recipientsByHeaderKey:]
-[MFEWSCreateMessageRequestOperation initWithFolderIdString:messageType:disposition:gateway:errorHandler:]
-[MFEWSCreateMessageRequestOperation initWithCoder:]
-[MFEWSCreateMessageRequestOperation encodeWithCoder:]
-[MFEWSCreateMessageRequestOperation prepareRequest]
-[MFEWSCreateMessageRequestOperation message]
-[MFEWSCreateMessageRequestOperation data]
-[MFEWSCreateMessageRequestOperation flags]
-[MFEWSCreateMessageRequestOperation sender]
-[MFEWSCreateMessageRequestOperation existingItemIdString]
-[MFEWSCreateMessageRequestOperation setExistingItemIdString:]
-[MFEWSCreateMessageRequestOperation recipientsByHeaderKey]
-[MFEWSCreateMessageRequestOperation getItemsResponse]
-[MFEWSCreateMessageRequestOperation .cxx_destruct]
-[MFEWSDeleteFolderRequestOperation initWithEWSFolderIdString:gateway:]
-[MFEWSDeleteFolderRequestOperation _ewsDeleteFolderRequestOperationCommonInitWithEWSFolderIdString:]
-[MFEWSDeleteFolderRequestOperation initWithCoder:]
-[MFEWSDeleteFolderRequestOperation encodeWithCoder:]
-[MFEWSDeleteFolderRequestOperation initWithGateway:errorHandler:]
-[MFEWSDeleteFolderRequestOperation activityString]
-[MFEWSDeleteFolderRequestOperation isFolderRequest]
-[MFEWSDeleteFolderRequestOperation prepareRequest]
-[MFEWSDeleteFolderRequestOperation setupOfflineResponse]
+[MFEWSDeleteFolderRequestOperation classForResponse]
-[MFEWSDeleteFolderRequestOperation folderIdString]
-[MFEWSDeleteFolderRequestOperation .cxx_destruct]
-[MFEWSDeleteItemsRequestOperation initWithEWSItemIds:folderIdString:gateway:]
-[MFEWSDeleteItemsRequestOperation initWithCoder:]
-[MFEWSDeleteItemsRequestOperation encodeWithCoder:]
-[MFEWSDeleteItemsRequestOperation initWithGateway:errorHandler:]
-[MFEWSDeleteItemsRequestOperation _ewsDeleteItemsRequestOperationCommonInitWithEWSItemIds:folderIdString:]
-[MFEWSDeleteItemsRequestOperation activityString]
+[MFEWSDeleteItemsRequestOperation classForResponse]
-[MFEWSDeleteItemsRequestOperation prepareRequest]
-[MFEWSDeleteItemsRequestOperation setupOfflineResponse]
-[MFEWSDeleteItemsRequestOperation EWSItemIds]
-[MFEWSDeleteItemsRequestOperation folderIdString]
-[MFEWSDeleteItemsRequestOperation .cxx_destruct]
-[MFEWSDeliverer deliveryClass]
-[MFEWSDeliverer headersForDelivery]
-[MFEWSDeliverer deliverSynchronously]
-[MFEWSDeliverer handleEWSError:]
-[MFEWSDeliverer error]
-[MFEWSDeliverer setError:]
-[MFEWSDeliverer .cxx_destruct]
+[MFEWSDeliveryAccount keyPathsForValuesAffectingValueForKey:]
___62+[MFEWSDeliveryAccount keyPathsForValuesAffectingValueForKey:]_block_invoke
-[MFEWSDeliveryAccount initWithAccount:]
-[MFEWSDeliveryAccount initWithAccountInfo:]
-[MFEWSDeliveryAccount dealloc]
-[MFEWSDeliveryAccount storedDisplayName]
-[MFEWSDeliveryAccount setStoredDisplayName]
-[MFEWSDeliveryAccount displayName]
-[MFEWSDeliveryAccount setDisplayName]
-[MFEWSDeliveryAccount offlineDisplayName]
-[MFEWSDeliveryAccount isInactivatedInsteadOfBeingDeleted]
-[MFEWSDeliveryAccount setIsInactivatedInsteadOfBeingDeleted:]
-[MFEWSDeliveryAccount defaultsDictionary]
-[MFEWSDeliveryAccount releaseAllConnections]
-[MFEWSDeliveryAccount setAccountInfoObject:forKey:]
-[MFEWSDeliveryAccount removeAccountInfoObjectForKey:]
-[MFEWSDeliveryAccount _setAccountInfo:]
-[MFEWSDeliveryAccount info]
-[MFEWSDeliveryAccount setInfo:]
-[MFEWSDeliveryAccount canonicalEmailAddress]
-[MFEWSDeliveryAccount setCanonicalEmailAddress:]
-[MFEWSDeliveryAccount usesConnectionBasedAutodiscovery]
-[MFEWSDeliveryAccount autodiscoverSettings:]
-[MFEWSDeliveryAccount username]
-[MFEWSDeliveryAccount setUsername:]
-[MFEWSDeliveryAccount password]
-[MFEWSDeliveryAccount setPassword:]
-[MFEWSDeliveryAccount permanentPassword]
-[MFEWSDeliveryAccount setPermanentPassword:]
-[MFEWSDeliveryAccount sessionPassword]
-[MFEWSDeliveryAccount setSessionPassword:]
-[MFEWSDeliveryAccount applePersonID]
-[MFEWSDeliveryAccount appleAuthenticationToken]
-[MFEWSDeliveryAccount portNumber]
-[MFEWSDeliveryAccount setPortNumber:]
-[MFEWSDeliveryAccount _setPortNumber:releasingConnections:]
-[MFEWSDeliveryAccount usesSSL]
-[MFEWSDeliveryAccount _setUsesSSL:releasingConnections:]
-[MFEWSDeliveryAccount hostname]
-[MFEWSDeliveryAccount setHostname:]
-[MFEWSDeliveryAccount securityLayerType]
-[MFEWSDeliveryAccount _setSecurityLayerType:releasingConnections:]
-[MFEWSDeliveryAccount preferredAuthScheme]
-[MFEWSDeliveryAccount setPreferredAuthScheme:]
-[MFEWSDeliveryAccount ISPAccountID]
-[MFEWSDeliveryAccount setISPAccountID:]
-[MFEWSDeliveryAccount identifier]
-[MFEWSDeliveryAccount accountInfo]
-[MFEWSDeliveryAccount setAccountInfo:]
-[MFEWSDeliveryAccount saslProfileName]
-[MFEWSDeliveryAccount requiresAuthentication]
-[MFEWSDeliveryAccount standardPorts]
-[MFEWSDeliveryAccount standardSSLPorts]
-[MFEWSDeliveryAccount defaultPortNumber]
-[MFEWSDeliveryAccount defaultSecurePortNumber]
-[MFEWSDeliveryAccount isOffline]
-[MFEWSDeliveryAccount setIsOffline:]
-[MFEWSDeliveryAccount isWillingToGoOnline]
-[MFEWSDeliveryAccount setIsWillingToGoOnline:]
-[MFEWSDeliveryAccount canGoOffline]
-[MFEWSDeliveryAccount isValid]
-[MFEWSDeliveryAccount supportURL]
-[MFEWSDeliveryAccount supportURLLabel]
-[MFEWSDeliveryAccount subscriptionURL]
-[MFEWSDeliveryAccount subscriptionURLLabel]
-[MFEWSDeliveryAccount accountTypeString]
-[MFEWSDeliveryAccount validateConnections]
-[MFEWSDeliveryAccount newConnectedConnectionDiscoveringBestSettings:withConnectTimeout:readWriteTimeout:]
-[MFEWSDeliveryAccount authenticatedConnection]
-[MFEWSDeliveryAccount connectAndAuthenticate:]
-[MFEWSDeliveryAccount shouldRetryConnectionWithoutCertificateCheckingAfterError:host:didPromptUser:]
-[MFEWSDeliveryAccount validationRequired]
-[MFEWSDeliveryAccount setValidationRequired:]
-[MFEWSDeliveryAccount deliveryIdentifier]
-[MFEWSDeliveryAccount delivererClass]
-[MFEWSDeliveryAccount isDynamic]
-[MFEWSDeliveryAccount associatedAccount]
-[MFEWSDeliveryAccount setAssociatedAccount:]
-[MFEWSDeliveryAccount shouldUseAuthentication]
-[MFEWSDeliveryAccount setShouldUseAuthentication:]
-[MFEWSDeliveryAccount remoteMailAccountsEmployedBy]
-[MFEWSDeliveryAccount stripsFromHeaderWhenSending]
-[MFEWSDeliveryAccount setStripsFromHeaderWhenSending:]
-[MFEWSDeliveryAccount .cxx_destruct]
-[MFEWSFindItemsRequestOperation initWithSearchExpression:EWSFolderIdStrings:additionalProperties:gateway:]
-[MFEWSFindItemsRequestOperation initWithGateway:errorHandler:]
-[MFEWSFindItemsRequestOperation activityString]
+[MFEWSFindItemsRequestOperation classForResponse]
-[MFEWSFindItemsRequestOperation prepareRequest]
-[MFEWSFindItemsRequestOperation additionalProperties]
-[MFEWSFindItemsRequestOperation EWSFolderIdStrings]
-[MFEWSFindItemsRequestOperation searchExpression]
-[MFEWSFindItemsRequestOperation .cxx_destruct]
-[MFEWSFindItemsResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSFindItemsResponseOperation executeOperation]
-[MFEWSFindItemsResponseOperation rootFolderForEWSFolderId:]
-[MFEWSFindItemsResponseOperation EWSFolderIds]
-[MFEWSFindItemsResponseOperation setEWSFolderIds:]
-[MFEWSFindItemsResponseOperation rootFoldersByEWSFolderId]
-[MFEWSFindItemsResponseOperation setRootFoldersByEWSFolderId:]
-[MFEWSFindItemsResponseOperation .cxx_destruct]
-[MFEWSGateway initWithAccount:]
-[MFEWSGateway init]
-[MFEWSGateway initWithCoder:]
-[MFEWSGateway encodeWithCoder:]
+[MFEWSGateway keyPathsForValuesAffectingRequestResponseQueue]
-[MFEWSGateway requestResponseQueue]
-[MFEWSGateway addRequest:]
-[MFEWSGateway addResponse:]
-[MFEWSGateway addError:withHandler:]
-[MFEWSGateway sendMessage:forRequest:]
-[MFEWSGateway takeRequestOffline:error:]
-[MFEWSGateway fetchDistinguishedFolderIdsWithConnection:]
___58-[MFEWSGateway fetchDistinguishedFolderIdsWithConnection:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFEWSGateway saveRequestToOfflineCache:]
-[MFEWSGateway _saveOfflineCache]
-[MFEWSGateway _addCreateRequestToOfflineCache:]
___48-[MFEWSGateway _addCreateRequestToOfflineCache:]_block_invoke
___copy_helper_block_184
___destroy_helper_block_185
-[MFEWSGateway _addDeleteRequestToOfflineCache:]
___48-[MFEWSGateway _addDeleteRequestToOfflineCache:]_block_invoke
___copy_helper_block_206
___destroy_helper_block_207
-[MFEWSGateway playbackRequestsFromOfflineCacheWithConnection:error:]
-[MFEWSGateway writeMessageToOfflineCache:data:forItemIdString:]
-[MFEWSGateway retrieveMessageFromOfflineCache:data:forItemIdString:]
-[MFEWSGateway removeMessageAndDataFromOfflineCacheForEWSItemIdString:]
-[MFEWSGateway _offlineCachePath]
-[MFEWSGateway _offlineCachePathForMessageWithItemIdString:]
-[MFEWSGateway _offlineCachePathForDataWithItemIdString:]
-[MFEWSGateway connection]
-[MFEWSGateway syncFolderHierarchyWithSyncState:]
-[MFEWSGateway _syncFolderHierarchyWithSyncState:includesLastItem:]
___67-[MFEWSGateway _syncFolderHierarchyWithSyncState:includesLastItem:]_block_invoke
___copy_helper_block_297
___destroy_helper_block_298
___67-[MFEWSGateway _syncFolderHierarchyWithSyncState:includesLastItem:]_block_invoke301
___copy_helper_block_304
___destroy_helper_block_305
___67-[MFEWSGateway _syncFolderHierarchyWithSyncState:includesLastItem:]_block_invoke307
___copy_helper_block_308
___destroy_helper_block_309
-[MFEWSGateway syncFolderItemsFromFolderIdString:syncState:forStore:]
___69-[MFEWSGateway syncFolderItemsFromFolderIdString:syncState:forStore:]_block_invoke
___copy_helper_block_368
___destroy_helper_block_369
-[MFEWSGateway _saveData:forMessage:isPartial:updateMetadata:]
-[MFEWSGateway fetchMimeDataForMessage:errorHandler:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___53-[MFEWSGateway fetchMimeDataForMessage:errorHandler:]_block_invoke
___copy_helper_block_393
___destroy_helper_block_394
-[MFEWSGateway _EWSItemTypesWithBodyDataForMessages:errorHandler:]
-[MFEWSGateway cacheDataForLibraryMessages:store:folderIdString:errorHandler:]
___78-[MFEWSGateway cacheDataForLibraryMessages:store:folderIdString:errorHandler:]_block_invoke
___copy_helper_block_418
___destroy_helper_block_419
-[MFEWSGateway _cacheDataForLibraryMessages:store:folderIdString:errorHandler:]
___79-[MFEWSGateway _cacheDataForLibraryMessages:store:folderIdString:errorHandler:]_block_invoke
___copy_helper_block_453
___destroy_helper_block_454
___79-[MFEWSGateway _cacheDataForLibraryMessages:store:folderIdString:errorHandler:]_block_invoke456
___79-[MFEWSGateway _cacheDataForLibraryMessages:store:folderIdString:errorHandler:]_block_invoke_2
___copy_helper_block_459
___destroy_helper_block_460
___copy_helper_block_462
___destroy_helper_block_463
___79-[MFEWSGateway _cacheDataForLibraryMessages:store:folderIdString:errorHandler:]_block_invoke468
___copy_helper_block_496
___destroy_helper_block_497
-[MFEWSGateway appendMessage:withData:toEWSFolderWithIdString:messageType:flags:sender:recipientsByHeaderKey:send:errorHandler:]
-[MFEWSGateway deleteMessagesWithEWSItemIds:fromFolderWithEWSIdString:synchronously:]
___85-[MFEWSGateway deleteMessagesWithEWSItemIds:fromFolderWithEWSIdString:synchronously:]_block_invoke
___copy_helper_block_508
___destroy_helper_block_509
-[MFEWSGateway setFlagsFromDictionary:forMessages:inFolderWithEWSIdString:errorHandler:]
___88-[MFEWSGateway setFlagsFromDictionary:forMessages:inFolderWithEWSIdString:errorHandler:]_block_invoke
___copy_helper_block_516
___destroy_helper_block_517
___88-[MFEWSGateway setFlagsFromDictionary:forMessages:inFolderWithEWSIdString:errorHandler:]_block_invoke519
___copy_helper_block_520
___destroy_helper_block_521
___88-[MFEWSGateway setFlagsFromDictionary:forMessages:inFolderWithEWSIdString:errorHandler:]_block_invoke523
___copy_helper_block_524
___destroy_helper_block_525
___88-[MFEWSGateway setFlagsFromDictionary:forMessages:inFolderWithEWSIdString:errorHandler:]_block_invoke527
___copy_helper_block_528
___destroy_helper_block_529
___88-[MFEWSGateway setFlagsFromDictionary:forMessages:inFolderWithEWSIdString:errorHandler:]_block_invoke531
___copy_helper_block_532
___destroy_helper_block_533
___88-[MFEWSGateway setFlagsFromDictionary:forMessages:inFolderWithEWSIdString:errorHandler:]_block_invoke535
___copy_helper_block_536
___destroy_helper_block_537
___88-[MFEWSGateway setFlagsFromDictionary:forMessages:inFolderWithEWSIdString:errorHandler:]_block_invoke539
___copy_helper_block_540
___destroy_helper_block_541
___88-[MFEWSGateway setFlagsFromDictionary:forMessages:inFolderWithEWSIdString:errorHandler:]_block_invoke543
___copy_helper_block_544
___destroy_helper_block_545
___88-[MFEWSGateway setFlagsFromDictionary:forMessages:inFolderWithEWSIdString:errorHandler:]_block_invoke547
___copy_helper_block_548
___destroy_helper_block_549
-[MFEWSGateway copyMessagesWithEWSItemIds:fromFolderWithIdString:toFolderWithIdString:synchronously:errorHandler:]
___114-[MFEWSGateway copyMessagesWithEWSItemIds:fromFolderWithIdString:toFolderWithIdString:synchronously:errorHandler:]_block_invoke
___copy_helper_block_564
___destroy_helper_block_565
-[MFEWSGateway sendResponseType:forMeetingMessage:inStore:errorHandler:]
-[MFEWSGateway undeleteMessageForFailedCreateEventResponse:]
-[MFEWSGateway _fetchMeetingRequestMessages:errorHandler:]
___58-[MFEWSGateway _fetchMeetingRequestMessages:errorHandler:]_block_invoke
___copy_helper_block_633
___destroy_helper_block_634
-[MFEWSGateway _fetchMeetingCancellationMessages:errorHandler:]
___63-[MFEWSGateway _fetchMeetingCancellationMessages:errorHandler:]_block_invoke
___copy_helper_block_642
___destroy_helper_block_643
___63-[MFEWSGateway _fetchMeetingCancellationMessages:errorHandler:]_block_invoke647
___copy_helper_block_652
___destroy_helper_block_653
-[MFEWSGateway createMailboxWithParentEWSFolderIdString:name:mailboxType:error:]
-[MFEWSGateway renameMailboxWithEWSFolderIdString:to:error:]
-[MFEWSGateway moveMailboxWithEWSFolderIdString:to:error:]
-[MFEWSGateway deleteMailboxWithEWSFolderIdString:error:]
-[MFEWSGateway resolvedIdStringForIdString:]
-[MFEWSGateway addOfflineToRealEWSIdStrings:forRequest:]
-[MFEWSGateway fetchUsageInfoForEWSFolderIdString:]
-[MFEWSGateway getOofSettings]
___30-[MFEWSGateway getOofSettings]_block_invoke
___copy_helper_block_727
___destroy_helper_block_728
-[MFEWSGateway setOofState:internalReply:externalReply:startTime:endTime:externalAudienceType:]
___Block_byref_object_copy_733
___Block_byref_object_dispose_734
___95-[MFEWSGateway setOofState:internalReply:externalReply:startTime:endTime:externalAudienceType:]_block_invoke
___copy_helper_block_735
___destroy_helper_block_736
-[MFEWSGateway _chunkItemsToSend:applyToBlock:]
-[MFEWSGateway maxRequestsToSend]
___33-[MFEWSGateway maxRequestsToSend]_block_invoke
-[MFEWSGateway fetchCopyOfSyncIssuesEntryID]
+[MFEWSGateway newTemporaryItemId]
-[MFEWSGateway account]
-[MFEWSGateway syncOperationQueue]
-[MFEWSGateway savedOfflineToRealEWSIdStrings]
-[MFEWSGateway setSavedOfflineToRealEWSIdStrings:]
-[MFEWSGateway .cxx_destruct]
-[MFEWSGetFolderRequestOperation initWithEWSFolderIds:gateway:errorHandler:fetchEntryIDs:]
-[MFEWSGetFolderRequestOperation initWithGateway:errorHandler:]
-[MFEWSGetFolderRequestOperation activityString]
-[MFEWSGetFolderRequestOperation isFolderRequest]
-[MFEWSGetFolderRequestOperation prepareRequest]
+[MFEWSGetFolderRequestOperation classForResponse]
-[MFEWSGetFolderRequestOperation fetchEntryIDs]
-[MFEWSGetFolderRequestOperation EWSFolderIds]
-[MFEWSGetFolderRequestOperation .cxx_destruct]
-[MFEWSGetFolderResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSGetFolderResponseOperation executeOperation]
___51-[MFEWSGetFolderResponseOperation executeOperation]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFEWSGetFolderResponseOperation EWSFolders]
-[MFEWSGetFolderResponseOperation setEWSFolders:]
-[MFEWSGetFolderResponseOperation EWSFolderIdsRequested]
-[MFEWSGetFolderResponseOperation setEWSFolderIdsRequested:]
-[MFEWSGetFolderResponseOperation .cxx_destruct]
-[MFEWSGetItemDataRequestOperation initWithItemIdTypes:dataHandler:gateway:errorHandler:]
-[MFEWSGetItemDataRequestOperation initWithGateway:errorHandler:]
-[MFEWSGetItemDataRequestOperation activityString]
+[MFEWSGetItemDataRequestOperation classForResponse]
-[MFEWSGetItemDataRequestOperation prepareRequest]
-[MFEWSGetItemDataRequestOperation itemIdTypes]
-[MFEWSGetItemDataRequestOperation .cxx_destruct]
-[MFEWSGetItemDataResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSGetItemDataResponseOperation executeOperation]
-[MFEWSGetItemDataResponseOperation itemIdTypes]
-[MFEWSGetItemDataResponseOperation setItemIdTypes:]
-[MFEWSGetItemDataResponseOperation dataHandler]
-[MFEWSGetItemDataResponseOperation setDataHandler:]
-[MFEWSGetItemDataResponseOperation .cxx_destruct]
-[MFEWSGetItemsRequestOperation initWithEWSItemIds:additionalProperties:gateway:errorHandler:]
-[MFEWSGetItemsRequestOperation initWithGateway:errorHandler:]
-[MFEWSGetItemsRequestOperation activityString]
+[MFEWSGetItemsRequestOperation classForResponse]
-[MFEWSGetItemsRequestOperation prepareRequest]
-[MFEWSGetItemsRequestOperation EWSItemIds]
-[MFEWSGetItemsRequestOperation additionalProperties]
-[MFEWSGetItemsRequestOperation .cxx_destruct]
-[MFEWSGetItemsResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSGetItemsResponseOperation executeOperation]
-[MFEWSGetItemsResponseOperation EWSItems]
-[MFEWSGetItemsResponseOperation setEWSItems:]
-[MFEWSGetItemsResponseOperation EWSItemIdsRequested]
-[MFEWSGetItemsResponseOperation setEWSItemIdsRequested:]
-[MFEWSGetItemsResponseOperation .cxx_destruct]
-[MFEWSGetUserOofSettingsRequestOperation initWithEmailAddress:gateway:errorHandler:]
-[MFEWSGetUserOofSettingsRequestOperation initWithGateway:errorHandler:]
+[MFEWSGetUserOofSettingsRequestOperation classForResponse]
-[MFEWSGetUserOofSettingsRequestOperation prepareRequest]
-[MFEWSGetUserOofSettingsRequestOperation emailAddress]
-[MFEWSGetUserOofSettingsRequestOperation .cxx_destruct]
-[MFEWSGetUserOofSettingsResponseOperation executeOperation]
-[MFEWSGetUserOofSettingsResponseOperation oofSettings]
-[MFEWSGetUserOofSettingsResponseOperation setOofSettings:]
-[MFEWSGetUserOofSettingsResponseOperation allowExternalOof]
-[MFEWSGetUserOofSettingsResponseOperation setAllowExternalOof:]
-[MFEWSGetUserOofSettingsResponseOperation .cxx_destruct]
-[MFEWSLibraryUpdateOperation initWithSyncState:changes:gateway:store:]
-[MFEWSLibraryUpdateOperation init]
-[MFEWSLibraryUpdateOperation executeOperation]
-[MFEWSLibraryUpdateOperation _queueGetItemOperationForItemIds:itemClass:onGateway:]
-[MFEWSLibraryUpdateOperation _propertiesForItemClass:]
___55-[MFEWSLibraryUpdateOperation _propertiesForItemClass:]_block_invoke
-[MFEWSLibraryUpdateOperation _headersNeedUpdateForLibraryMessage:withEWSItemType:]
-[MFEWSLibraryUpdateOperation syncState]
-[MFEWSLibraryUpdateOperation deletedItemIdStrings]
-[MFEWSLibraryUpdateOperation readFlagChanges]
-[MFEWSLibraryUpdateOperation getItemsOperations]
-[MFEWSLibraryUpdateOperation store]
-[MFEWSLibraryUpdateOperation .cxx_destruct]
+[MFEWSMessage initialize]
+[MFEWSMessage newMessageWithEWSItemType:]
+[MFEWSMessage flagsForEWSItemType:]
-[MFEWSMessage initWithItemId:changeKey:]
-[MFEWSMessage init]
-[MFEWSMessage account]
-[MFEWSMessage mailbox]
-[MFEWSMessage dataSource]
-[MFEWSMessage setDataSource:]
-[MFEWSMessage remoteID]
-[MFEWSMessage isEditable]
-[MFEWSMessage isMessageContentLocallyAvailable]
-[MFEWSMessage setHeaderAndBodyFromFullData:]
+[MFEWSMessage messageTypeForEWSItemClass:]
+[MFEWSMessage EWSItemClassForMessageType:]
+[MFEWSMessage EWSFolderClassForMailboxType:]
+[MFEWSMessage fieldsToMaintainWhenUpdatingMessageType:]
+[MFEWSMessage extendedFieldsForEWSMeetingMessageType]
+[MFEWSMessage extendedFieldsForEWSMeetingRequestMessageType]
+[MFEWSMessage extendedFieldsForEWSCalendarType]
+[MFEWSMessage propertiesToGetBeforeUpdatingMessageFlags:forMessageType:includesReadReceipts:]
+[MFEWSMessage updatesForEWSItem:applyingFlags:]
___48+[MFEWSMessage updatesForEWSItem:applyingFlags:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[MFEWSMessage _newEWSDeleteItemWithPropertyTag:propertyType:]
+[MFEWSMessage _newEWSDeleteItemWithDistinguishedPropertySetId:propertyType:propertyId:]
+[MFEWSMessage _extendedFieldsForFlags:importance:]
+[MFEWSMessage _newEWSExtendedPropertyWithTag:intValue:]
+[MFEWSMessage _newCustomEWSExtendedPropertyWithName:boolValue:]
+[MFEWSMessage _newEWSSetItemWithPropertyTag:intValue:]
+[MFEWSMessage _newCustomEWSSetItemWithPropertyName:boolValue:]
+[MFEWSMessage dataFromMimeContent:]
+[MFEWSMessage _mimeContentForData:]
+[MFEWSMessage newEWSItemFromMessage:data:flags:sender:recipientsByHeaderKey:categories:existingProperties:useSenderInsteadOfFrom:]
+[MFEWSMessage EWSItemIdTypesForMessages:]
+[MFEWSMessage EWSItemIdStringsForItemIdTypes:]
+[MFEWSMessage EWSItemIdTypesForItemIdStrings:]
+[MFEWSMessage validEWSItemIdTypesForItemIdTypes:]
___50+[MFEWSMessage validEWSItemIdTypesForItemIdTypes:]_block_invoke
+[MFEWSMessage validEWSIdStringsForIdStrings:]
___46+[MFEWSMessage validEWSIdStringsForIdStrings:]_block_invoke
+[MFEWSMessage _newEWSHeaderFieldsForMessageHeaders:encodingHint:]
+[MFEWSMessage _newEWSAddressForAddress:]
+[MFEWSMessage _newEWSAddressesForAddresses:]
+[MFEWSMessage newAddressForEWSAddress:]
+[MFEWSMessage newAddressesForEWSAddresses:]
-[MFEWSMessage itemId]
-[MFEWSMessage setItemId:]
-[MFEWSMessage changeKey]
-[MFEWSMessage setChangeKey:]
-[MFEWSMessage fetchedBodyData]
-[MFEWSMessage setFetchedBodyData:]
-[MFEWSMessage headerData]
-[MFEWSMessage setHeaderData:]
-[MFEWSMessage headers]
-[MFEWSMessage setHeaders:]
-[MFEWSMessage libraryID]
-[MFEWSMessage setLibraryID:]
-[MFEWSMessage .cxx_destruct]
-[MFEWSMoveFolderRequestOperation initWithEWSFolderIdString:originEWSFolderIdStrings:gateway:]
-[MFEWSMoveFolderRequestOperation _ewsMoveFolderRequestCommonInitWithEWSFolderIdString:originEWSFolderIdStrings:gateway:]
-[MFEWSMoveFolderRequestOperation initWithCoder:]
-[MFEWSMoveFolderRequestOperation encodeWithCoder:]
-[MFEWSMoveFolderRequestOperation initWithGateway:errorHandler:]
-[MFEWSMoveFolderRequestOperation activityString]
-[MFEWSMoveFolderRequestOperation isFolderRequest]
-[MFEWSMoveFolderRequestOperation prepareRequest]
-[MFEWSMoveFolderRequestOperation setupOfflineResponse]
+[MFEWSMoveFolderRequestOperation classForResponse]
-[MFEWSMoveFolderRequestOperation destinationEWSFolderIdString]
-[MFEWSMoveFolderRequestOperation changeKeysResponse]
-[MFEWSMoveFolderRequestOperation originEWSFolderIdStrings]
-[MFEWSMoveFolderRequestOperation .cxx_destruct]
-[MFEWSOfflineGateway initWithAccount:connection:]
-[MFEWSOfflineGateway initWithAccount:]
+[MFEWSOfflineGateway keyPathsForValuesAffectingRequestResponseQueue]
-[MFEWSOfflineGateway connection]
-[MFEWSOfflineGateway addRequest:]
-[MFEWSOfflineGateway resolvedIdStringForIdString:]
-[MFEWSOfflineGateway addOfflineToRealEWSIdStrings:forRequest:]
-[MFEWSOfflineGateway takeRequestOffline:error:]
-[MFEWSOfflineGateway playbackRequests:offlineToRealEWSIdStrings:error:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___72-[MFEWSOfflineGateway playbackRequests:offlineToRealEWSIdStrings:error:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFEWSOfflineGateway setOfflineToRealEWSIdStrings:]
-[MFEWSOfflineGateway offlineToRealEWSIdStrings]
-[MFEWSOfflineGateway _EWSFolderFromCreateRequestOperation:]
-[MFEWSOfflineGateway _deleteRequestRemovingUndeletedItems:]
-[MFEWSOfflineGateway _moveMessageFromFailedCreateRequest:withBackupManager:toMailboxNamed:actualName:]
-[MFEWSOfflineGateway _undeleteMessagesFromFailedCopyRequest:]
-[MFEWSOfflineGateway _undeleteMessagesFromFailedDeleteRequest:]
-[MFEWSOfflineGateway unarchiver:didDecodeObject:]
-[MFEWSOfflineGateway unarchiver:cannotDecodeObjectOfClassName:originalClasses:]
-[MFEWSOfflineGateway offlineConnection]
-[MFEWSOfflineGateway setOfflineConnection:]
-[MFEWSOfflineGateway lastResponseDecoded]
-[MFEWSOfflineGateway setLastResponseDecoded:]
-[MFEWSOfflineGateway requestResponseQueue]
-[MFEWSOfflineGateway .cxx_destruct]
+[EWSPathToExtendedFieldType(MessageAdditions) _newExtendedFieldTypeForPropertyTag:propertyType:]
+[EWSPathToExtendedFieldType(MessageAdditions) newExtendedFieldTypeForPropertyTag:]
+[EWSPathToExtendedFieldType(MessageAdditions) newExtendedFieldTypeForPropertyId:]
-[MFEWSRenameFolderRequestOperation initWithEWSFolderIdString:name:gateway:]
-[MFEWSRenameFolderRequestOperation initWithGateway:errorHandler:]
-[MFEWSRenameFolderRequestOperation activityString]
-[MFEWSRenameFolderRequestOperation isFolderRequest]
-[MFEWSRenameFolderRequestOperation prepareRequest]
+[MFEWSRenameFolderRequestOperation classForResponse]
-[MFEWSRenameFolderRequestOperation folderIdString]
-[MFEWSRenameFolderRequestOperation folderName]
-[MFEWSRenameFolderRequestOperation changeKeysResponse]
-[MFEWSRenameFolderRequestOperation .cxx_destruct]
-[MFEWSRequestOperation initWithGateway:errorHandler:]
-[MFEWSRequestOperation init]
-[MFEWSRequestOperation prepareRequest]
-[MFEWSRequestOperation executeOperation]
-[MFEWSRequestOperation isFolderRequest]
-[MFEWSRequestOperation isOffline]
-[MFEWSRequestOperation goOffline]
-[MFEWSRequestOperation setupOfflineResponse]
-[MFEWSRequestOperation description]
+[MFEWSRequestOperation classForResponse]
-[MFEWSRequestOperation responseOperation]
-[MFEWSRequestOperation setResponseOperation:]
-[MFEWSRequestOperation gateway]
-[MFEWSRequestOperation setGateway:]
-[MFEWSRequestOperation .cxx_destruct]
-[MFEWSResponseOperation initWithGateway:errorHandler:]
-[MFEWSResponseOperation init]
-[MFEWSResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSResponseOperation executeOperation]
-[MFEWSResponseOperation failWithError:]
-[MFEWSResponseOperation handleResponseMessages]
-[MFEWSResponseOperation handleResponseMessage:]
-[MFEWSResponseOperation handleResponseMessage:withObject:]
-[MFEWSResponseOperation description]
-[MFEWSResponseOperation response]
-[MFEWSResponseOperation setResponse:]
-[MFEWSResponseOperation gateway]
-[MFEWSResponseOperation setGateway:]
-[MFEWSResponseOperation errorHandler]
-[MFEWSResponseOperation setErrorHandler:]
-[MFEWSResponseOperation lastError]
-[MFEWSResponseOperation setLastError:]
-[MFEWSResponseOperation isOffline]
-[MFEWSResponseOperation setIsOffline:]
-[MFEWSResponseOperation .cxx_destruct]
-[MFEWSSetUserOofSettingsRequestOperation initWithEmailAddress:oofState:internalReply:externalReply:startTime:endTime:externalAudienceType:gateway:errorHandler:]
-[MFEWSSetUserOofSettingsRequestOperation initWithGateway:errorHandler:]
+[MFEWSSetUserOofSettingsRequestOperation classForResponse]
-[MFEWSSetUserOofSettingsRequestOperation prepareRequest]
-[MFEWSSetUserOofSettingsRequestOperation oofState]
-[MFEWSSetUserOofSettingsRequestOperation internalReply]
-[MFEWSSetUserOofSettingsRequestOperation externalReply]
-[MFEWSSetUserOofSettingsRequestOperation duration]
-[MFEWSSetUserOofSettingsRequestOperation emailAddress]
-[MFEWSSetUserOofSettingsRequestOperation externalAudienceType]
-[MFEWSSetUserOofSettingsRequestOperation .cxx_destruct]
-[MFEWSSetUserOofSettingsResponseOperation executeOperation]
-[MFEWSSizeEngine initWithAccount:]
-[MFEWSSizeEngine _runWorkerThread]
-[MFEWSSizeEngine _getSizeForMailbox:]
-[MFEWSStore initWithCriterion:mailbox:readOnly:]
-[MFEWSStore canRebuild]
-[MFEWSStore allowsOverwrite]
-[MFEWSStore allowsDeleteInPlace]
-[MFEWSStore openSynchronouslyUpdatingMetadata:]
-[MFEWSStore openSynchronouslyIfWaitingToOpen]
-[MFEWSStore fetchSynchronously]
-[MFEWSStore startSynchronization]
-[MFEWSStore _fetchHeaderDataForMessage:fetchIfNotAvailable:]
-[MFEWSStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFEWSStore fullBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFEWSStore messagesWereAdded:conversationsMembers:duringOpen:options:]
-[MFEWSStore async_setFlagsFromDictionary:forMessages:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___55-[MFEWSStore async_setFlagsFromDictionary:forMessages:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___55-[MFEWSStore async_setFlagsFromDictionary:forMessages:]_block_invoke126
___copy_helper_block_129
___destroy_helper_block_130
-[MFEWSStore undeleteMessages:movedToStore:newMessageIDs:]
-[MFEWSStore undoAppendOfMessageIDs:]
-[MFEWSStore forceResync]
-[MFEWSStore _copyMessagesByID:toStore:settingFlags:newMessages:error:]
___71-[MFEWSStore _copyMessagesByID:toStore:settingFlags:newMessages:error:]_block_invoke
-[MFEWSStore _appendToServerWithContext:error:]
___47-[MFEWSStore _appendToServerWithContext:error:]_block_invoke
___copy_helper_block_264
___destroy_helper_block_265
-[MFEWSStore updateWithSyncState:newMessages:updatedMessages:updatedLibraryIdStrings:deletedMessages:flagChanges:]
-[MFEWSStore _deleteMessagesOnServerSynchronouslyWithEWSItemIds:fromFolderWithEWSIdString:]
-[MFEWSStore deleteMessageWithEWSItemIdString:]
-[MFEWSStore undeleteMessagesWithEWSItemIdStrings:]
-[MFEWSStore sendResponseType:forMeetingMessage:]
-[MFEWSStore _fetchChangesFromServer]
-[MFEWSStore _handleStoreFinishedFirstTimeSync:]
-[MFEWSStore account]
-[MFEWSStore _gateway]
-[MFEWSStore syncState]
-[MFEWSStore setSyncState:]
-[MFEWSStore _setSyncState:persistToLibrary:]
-[MFEWSStore _loadFolderId]
-[MFEWSStore handleEWSError:]
-[MFEWSStore incompleteMessages]
-[MFEWSStore folderIdString]
-[MFEWSStore setFolderIdString:]
-[MFEWSStore .cxx_destruct]
-[_MFSetFlags initWithFlagsDictionary:messages:]
-[_MFSetFlags init]
-[_MFSetFlags messages]
-[_MFSetFlags addMessages:]
-[_MFSetFlags isEqual:]
-[_MFSetFlags hash]
-[_MFSetFlags flagsToSet]
-[_MFSetFlags .cxx_destruct]
-[MFEWSSuppressReadReceiptsRequestOperation initWithGetItemsResponse:gateway:]
-[MFEWSSuppressReadReceiptsRequestOperation initWithGateway:errorHandler:]
+[MFEWSSuppressReadReceiptsRequestOperation classForResponse]
-[MFEWSSuppressReadReceiptsRequestOperation prepareRequest]
-[MFEWSSuppressReadReceiptsRequestOperation getItemsResponse]
-[MFEWSSuppressReadReceiptsRequestOperation .cxx_destruct]
-[MFEWSSyncFolderHierarchyRequestOperation initWithSyncState:createBlock:updateBlock:deleteBlock:gateway:]
-[MFEWSSyncFolderHierarchyRequestOperation initWithGateway:errorHandler:]
-[MFEWSSyncFolderHierarchyRequestOperation activityString]
-[MFEWSSyncFolderHierarchyRequestOperation prepareRequest]
+[MFEWSSyncFolderHierarchyRequestOperation classForResponse]
-[MFEWSSyncFolderHierarchyRequestOperation syncState]
-[MFEWSSyncFolderHierarchyRequestOperation .cxx_destruct]
-[MFEWSSyncFolderHierarchyResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSSyncFolderHierarchyResponseOperation executeOperation]
-[MFEWSSyncFolderHierarchyResponseOperation createBlock]
-[MFEWSSyncFolderHierarchyResponseOperation setCreateBlock:]
-[MFEWSSyncFolderHierarchyResponseOperation updateBlock]
-[MFEWSSyncFolderHierarchyResponseOperation setUpdateBlock:]
-[MFEWSSyncFolderHierarchyResponseOperation deleteBlock]
-[MFEWSSyncFolderHierarchyResponseOperation setDeleteBlock:]
-[MFEWSSyncFolderHierarchyResponseOperation .cxx_destruct]
-[MFEWSSyncFolderItemsRequestOperation initWithTargetFolder:syncState:gateway:]
-[MFEWSSyncFolderItemsRequestOperation initWithGateway:errorHandler:]
-[MFEWSSyncFolderItemsRequestOperation activityString]
-[MFEWSSyncFolderItemsRequestOperation prepareRequest]
+[MFEWSSyncFolderItemsRequestOperation keyPathsForValuesAffectingTargetFolderId]
-[MFEWSSyncFolderItemsRequestOperation targetFolderId]
+[MFEWSSyncFolderItemsRequestOperation keyPathsForValuesAffectingTargetFolderName]
-[MFEWSSyncFolderItemsRequestOperation targetFolderName]
+[MFEWSSyncFolderItemsRequestOperation classForResponse]
+[MFEWSSyncFolderItemsRequestOperation maxChangesReturned]
___58+[MFEWSSyncFolderItemsRequestOperation maxChangesReturned]_block_invoke
-[MFEWSSyncFolderItemsRequestOperation syncState]
-[MFEWSSyncFolderItemsRequestOperation targetFolder]
-[MFEWSSyncFolderItemsRequestOperation setTargetFolder:]
-[MFEWSSyncFolderItemsRequestOperation .cxx_destruct]
-[MFEWSSyncFolderItemsResponseOperation prepareToExecuteWithResponse:forRequestOperation:]
-[MFEWSSyncFolderItemsResponseOperation executeOperation]
-[MFEWSSyncFolderItemsResponseOperation folderId]
-[MFEWSSyncFolderItemsResponseOperation setFolderId:]
-[MFEWSSyncFolderItemsResponseOperation startSyncState]
-[MFEWSSyncFolderItemsResponseOperation setStartSyncState:]
-[MFEWSSyncFolderItemsResponseOperation endSyncState]
-[MFEWSSyncFolderItemsResponseOperation setEndSyncState:]
-[MFEWSSyncFolderItemsResponseOperation changes]
-[MFEWSSyncFolderItemsResponseOperation setChanges:]
-[MFEWSSyncFolderItemsResponseOperation includesLastItemInRange]
-[MFEWSSyncFolderItemsResponseOperation setIncludesLastItemInRange:]
-[MFEWSSyncFolderItemsResponseOperation .cxx_destruct]
-[MFEWSUpdateItemRequestOperation initWithEWSItemIds:messageType:flags:gateway:errorHandler:]
-[MFEWSUpdateItemRequestOperation initWithCoder:]
-[MFEWSUpdateItemRequestOperation encodeWithCoder:]
-[MFEWSUpdateItemRequestOperation initWithGateway:errorHandler:]
-[MFEWSUpdateItemRequestOperation _ewsUpdateItemRequestOperationCommonInitWithEWSItemIds:messageType:flags:errorHandler:]
+[MFEWSUpdateItemRequestOperation classForResponse]
-[MFEWSUpdateItemRequestOperation setupOfflineResponse]
-[MFEWSUpdateItemRequestOperation activityString]
-[MFEWSUpdateItemRequestOperation prepareRequest]
-[MFEWSUpdateItemRequestOperation itemsPriorToUpdate]
-[MFEWSUpdateItemRequestOperation EWSItemIds]
-[MFEWSUpdateItemRequestOperation flags]
-[MFEWSUpdateItemRequestOperation getItemsResponse]
-[MFEWSUpdateItemRequestOperation suppressReadReceiptsRequest]
-[MFEWSUpdateItemRequestOperation messageType]
-[MFEWSUpdateItemRequestOperation .cxx_destruct]
+[MFExchangeIMAPAccount initialize]
+[MFExchangeIMAPAccount accountTypeString]
+[MFExchangeIMAPAccount defaultPathNameForAccount]
-[MFExchangeIMAPAccount _newConnectionWithPendingGateway:]
-[MFExchangeIMAPAccount newConnectedConnectionDiscoveringBestSettings:withConnectTimeout:readWriteTimeout:]
-[MFExchangeIMAPAccount connectAndAuthenticate:]
-[MFExchangeIMAPAccount storeJunkOnServerDefault]
-[MFExchangeIMAPAccount storeJunkOnServer]
-[MFExchangeIMAPAccount _defaultSpecialMailboxRelativePathForType:]
-[MFExchangeIMAPAccount filterMailboxList:forMailbox:options:]
-[MFExchangeIMAPAccount _nonMailboxChildrenOfMailboxWithPath:iisServer:]
-[MFExchangeIMAPAccount _filterMailboxList:forMailboxWithPath:iisServer:]
-[MFExchangeIMAPAccount additionalHeaderFields]
-[MFExchangeIMAPAccount hostname]
-[MFExchangeIMAPAccount setHostname:]
-[MFExchangeIMAPAccount username]
-[MFExchangeIMAPAccount setUsername:]
-[MFExchangeIMAPAccount permanentPassword]
-[MFExchangeIMAPAccount setPermanentPassword:]
-[MFExchangeIMAPAccount defaultsDictionary]
-[MFExchangeIMAPAccount handleOpenMailboxError:]
+[MFExchangeIMAPAccount usingActiveDirectory]
+[MFExchangeIMAPAccount outlookWebAccessServer]
+[MFExchangeIMAPAccount setOutlookWebAccessServer:]
+[MFExchangeIMAPAccount exchangeServer]
+[MFExchangeIMAPAccount setExchangeServer:]
+[MFExchangeIMAPAccount activeDirectoryUser]
+[MFExchangeIMAPAccount setActiveDirectoryUser:]
+[MFExchangeIMAPAccount activeDirectoryPassword]
+[MFExchangeIMAPAccount setActiveDirectoryPassword:]
+[MFExchangeIMAPAccount activeDirectoryFullName]
+[MFExchangeIMAPAccount activeDirectoryEmailAddress]
-[MFExchangeIMAPConnection account]
-[MFExchangeIMAPConnection setAccount:]
-[MFExchangeIMAPConnection _isFetchResponseValid:]
+[MFFilesystemWatcher allocWithZone:]
+[MFFilesystemWatcher sharedInstance]
___37+[MFFilesystemWatcher sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFFilesystemWatcher init]
-[MFFilesystemWatcher dealloc]
-[MFFilesystemWatcher _updateCacheInfoForPath:rootPathToTrim:scanSubDirectories:cookie:]
___88-[MFFilesystemWatcher _updateCacheInfoForPath:rootPathToTrim:scanSubDirectories:cookie:]_block_invoke
_mf_scandir
___copy_helper_block_42
___destroy_helper_block_43
-[MFFilesystemWatcher registerPath:]
___36-[MFFilesystemWatcher registerPath:]_block_invoke
___copy_helper_block_64
___destroy_helper_block_65
-[MFFilesystemWatcher getCachedFilesFor:]
-[MFFilesystemWatcher stopWatchingPathForLibraryStore:]
___55-[MFFilesystemWatcher stopWatchingPathForLibraryStore:]_block_invoke
___55-[MFFilesystemWatcher stopWatchingPathForLibraryStore:]_block_invoke_2
___copy_helper_block_73
___destroy_helper_block_74
-[MFFilesystemWatcher _fseventStreamToLibraryStore]
-[MFFilesystemWatcher _fseventsTableLock]
-[MFFilesystemWatcher .cxx_destruct]
_fileSelect
-[NSDictionary(MailFoundationAdditions) boolForKey:]
-[NSDictionary(MailFoundationAdditions) integerForKey:]
-[NSDictionary(MailFoundationAdditions) floatForKey:]
-[NSDictionary(MailFoundationAdditions) cgfloatForKey:]
-[NSDictionary(MailFoundationAdditions) sizeForKey:]
-[NSDictionary(MailFoundationAdditions) objectForIntegerKey:]
+[NSKeyedUnarchiver(MailFoundationAdditions) safeUnarchiveObjectWithData:]
-[NSMutableDictionary(MailFoundationAdditions) setBool:forKey:]
-[NSMutableDictionary(MailFoundationAdditions) setInteger:forKey:]
-[NSMutableDictionary(MailFoundationAdditions) setFloat:forKey:]
-[NSMutableDictionary(MailFoundationAdditions) setCGFloat:forKey:]
-[NSMutableDictionary(MailFoundationAdditions) setSize:forKey:]
-[NSMutableDictionary(MailFoundationAdditions) setObject:forIntegerKey:]
-[NSMutableDictionary(MailFoundationAdditions) removeObjectForIntegerKey:]
-[NSURL(MailFoundationAdditions) completePath]
-[NSURL(MailFoundationAdditions) isReallyCaseSensitivelyEqual:]
-[NSURL(MailFoundationAdditions) URLByRemovingFragment]
-[NSPortMessage(MailFoundationAdditions) safeSendNow]
-[NSPortMessage(MailFoundationAdditions) safeSendBeforeDate:]
+[MailFramework bundle]
___23+[MailFramework bundle]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[MailFramework frameworkVersion]
___33+[MailFramework frameworkVersion]_block_invoke
+[MailFramework userAgent]
+[MailFramework setUserAgent:]
-[MFGmailLabelStore allowsOverwrite]
-[MFGmailLabelStore lastMessageWithHeaders:inMailbox:]
-[MFGmailLabelStore appendMessages:unsuccessfulOnes:newMessageIDs:newMessages:newDocumentIDsByOld:flagsToSet:forMove:error:]
-[MFGmailLabelStore undoAppendOfMessageIDs:]
-[MFGmailLabelStore deleteMessages:moveToTrash:]
-[MFGmailLabelStore deleteMessagesOlderThanNumberOfDays:compact:]
-[MFGmailLabelStore _messagesAddedToLibrary:]
-[MFGmailLabelStore _removeOurLabelFromMessages:]
-[MFGmailLabelStore _messagesFromAllMailWithRemoteIDs:]
-[MFGmailLabelStore _allMailStore]
+[MFHTMLConverter allocWithZone:]
-[MFHTMLConverter init]
-[MFHTMLConverter dealloc]
+[MFHTMLConverter sharedInstance]
___33+[MFHTMLConverter sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFHTMLConverter attributedStringFromWebArchive:]
-[MFHTMLConverter junkStringFromHTMLData:textEncodingName:context:]
-[MFHTMLConverter htmlStringWithInlinedStyleFromHTMLData:textEncodingName:]
-[MFHTMLConverter handlePortMessage:]
-[MFHTMLConverter _stopLoadingWebView]
-[MFHTMLConverter _setUpWebView]
-[MFHTMLConverter _loadWebViewOnMainThreadFromData:withTextEncodingName:orFromWebArchive:]
___90-[MFHTMLConverter _loadWebViewOnMainThreadFromData:withTextEncodingName:orFromWebArchive:]_block_invoke
___copy_helper_block_159
___destroy_helper_block_160
-[MFHTMLConverter _archivedAttributedStringFromLoadedDocument]
-[MFHTMLConverter _archivedDataFromLoadedDocument]
-[MFHTMLConverter _archivedHTMLStringWithInlinedStyleFromLoadedDocument]
-[MFHTMLConverter webView:didStartProvisionalLoadForFrame:]
_setSequenceNumberForDataSource
-[MFHTMLConverter webView:locationChangeDone:forDataSource:]
-[MFHTMLConverter webView:didFailProvisionalLoadWithError:forFrame:]
-[MFHTMLConverter webView:didFinishLoadForFrame:]
-[MFHTMLConverter webView:didFailLoadWithError:forFrame:]
-[MFHTMLConverter webView:identifierForInitialRequest:fromDataSource:]
-[MFHTMLConverter webView:resource:willSendRequest:redirectResponse:fromDataSource:]
_isValidURL
-[MFHTMLConverter webView:decidePolicyForNavigationAction:request:frame:decisionListener:]
-[MFHTMLConverter resultData]
-[MFHTMLConverter setResultData:]
-[MFHTMLConverter webView]
-[MFHTMLConverter setWebView:]
-[MFHTMLConverter sequenceNumber]
-[MFHTMLConverter setSequenceNumber:]
-[MFHTMLConverter didHandlePortMessage]
-[MFHTMLConverter setDidHandlePortMessage:]
-[MFHTMLConverter mainThreadSelectorType]
-[MFHTMLConverter setMainThreadSelectorType:]
-[MFHTMLConverter .cxx_destruct]
+[MFHTMLParser plainTextFromHTML:limit:]
_copyMutablePlainTextFromPoint
+[MFHTMLParser plainTextFromHTML:]
+[MFHTMLParser plainTextFromHTMLSnippet:]
-[_MFIMAPMailboxDeletionQueueEntry urls]
-[_MFIMAPMailboxDeletionQueueEntry setUrls:]
-[_MFIMAPMailboxDeletionQueueEntry paths]
-[_MFIMAPMailboxDeletionQueueEntry setPaths:]
-[_MFIMAPMailboxDeletionQueueEntry account]
-[_MFIMAPMailboxDeletionQueueEntry setAccount:]
-[_MFIMAPMailboxDeletionQueueEntry .cxx_destruct]
-[MFIMAPAccount initWithAccountInfo:]
-[MFIMAPAccount dealloc]
-[MFIMAPAccount completeDeferredInitialization]
___47-[MFIMAPAccount completeDeferredInitialization]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___47-[MFIMAPAccount completeDeferredInitialization]_block_invoke175
___copy_helper_block_178
___destroy_helper_block_179
-[MFIMAPAccount shouldUseGmailLabelStores]
-[MFIMAPAccount setShouldUseGmailLabelStores:]
-[MFIMAPAccount needsGmailLabelsCleanup]
-[MFIMAPAccount setNeedsGmailLabelsCleanup:]
-[MFIMAPAccount _migrateColorsForGmail]
-[MFIMAPAccount _colorByMessageFromColorByMessageDigest:]
-[MFIMAPAccount _cleanUpExistingMessages]
-[MFIMAPAccount _readCustomInfoFromMailboxCache:]
-[MFIMAPAccount _writeCustomInfoToMailboxCache:]
-[MFIMAPAccount saveCache]
-[MFIMAPAccount doRoutineCleanup]
-[MFIMAPAccount sendAccountNeedsCheckingNotification]
-[MFIMAPAccount storeClassForMailbox:]
-[MFIMAPAccount mailboxPathExtension]
+[MFIMAPAccount standardPorts]
+[MFIMAPAccount standardSSLPorts]
-[MFIMAPAccount defaultPortNumber]
-[MFIMAPAccount defaultSecurePortNumber]
-[MFIMAPAccount saslProfileName]
-[MFIMAPAccount keychainProtocol]
-[MFIMAPAccount requiresAuthentication]
-[MFIMAPAccount _newConnectionWithPendingGateway:]
-[MFIMAPAccount newConnectedConnectionDiscoveringBestSettings:withConnectTimeout:readWriteTimeout:]
-[MFIMAPAccount authenticatedConnection]
-[MFIMAPAccount compactWhenClosingMailboxes]
-[MFIMAPAccount setCompactWhenClosingMailboxes:]
-[MFIMAPAccount useIDLEIfAvailable]
-[MFIMAPAccount setUseIDLEIfAvailable:]
-[MFIMAPAccount _setChildren:forMailbox:]
-[MFIMAPAccount primaryMailbox]
-[MFIMAPAccount allMailMailbox]
-[MFIMAPAccount _updateIdleMailbox]
+[MFIMAPAccount accountTypeString]
-[MFIMAPAccount iaServiceType]
-[MFIMAPAccount providerIdentifier]
-[MFIMAPAccount handleResponseCodeFromResponse:]
-[MFIMAPAccount handleAlertResponse:]
-[MFIMAPAccount readBufferSize]
-[MFIMAPAccount setReadBufferSize:]
-[MFIMAPAccount synchronizeAllMailboxes]
-[MFIMAPAccount needToSynchronizeMailboxCaches]
-[MFIMAPAccount resetNeedToSynchronizeMailboxCaches]
-[MFIMAPAccount didSynchronizeMailboxCachesAndFoundChanges:]
-[MFIMAPAccount _checkForNewMessagesInStore:]
-[MFIMAPAccount _dataForTemporaryUid:]
-[MFIMAPAccount minimumPartialDownloadSize]
-[MFIMAPAccount allowsPartialDownloads]
-[MFIMAPAccount setAllowsPartialDownloads:]
-[MFIMAPAccount _clearAllPathBasedCachesAndDelete:]
-[MFIMAPAccount serverID]
-[MFIMAPAccount setServerID:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___29-[MFIMAPAccount setServerID:]_block_invoke
___copy_helper_block_513
___destroy_helper_block_514
-[MFIMAPAccount hasServerDefinedAllMailMailbox]
-[MFIMAPAccount setHasServerDefinedAllMailMailbox:]
-[MFIMAPAccount hasServerDefinedArchiveMailbox]
-[MFIMAPAccount setHasServerDefinedArchiveMailbox:]
-[MFIMAPAccount hasServerDefinedDraftsMailbox]
-[MFIMAPAccount setHasServerDefinedDraftsMailbox:]
-[MFIMAPAccount hasServerDefinedJunkMailbox]
-[MFIMAPAccount setHasServerDefinedJunkMailbox:]
-[MFIMAPAccount hasServerDefinedSentMailbox]
-[MFIMAPAccount setHasServerDefinedSentMailbox:]
-[MFIMAPAccount hasServerDefinedTrashMailbox]
-[MFIMAPAccount setHasServerDefinedTrashMailbox:]
-[MFIMAPAccount ignoreServerDefinedArchiveMailbox]
-[MFIMAPAccount setIgnoreServerDefinedArchiveMailbox:]
-[MFIMAPAccount ignoreServerDefinedDraftsMailbox]
-[MFIMAPAccount setIgnoreServerDefinedDraftsMailbox:]
-[MFIMAPAccount ignoreServerDefinedJunkMailbox]
-[MFIMAPAccount setIgnoreServerDefinedJunkMailbox:]
-[MFIMAPAccount ignoreServerDefinedSentMailbox]
-[MFIMAPAccount setIgnoreServerDefinedSentMailbox:]
-[MFIMAPAccount ignoreServerDefinedTrashMailbox]
-[MFIMAPAccount setIgnoreServerDefinedTrashMailbox:]
-[MFIMAPAccount setStoreDraftsOnServer:]
-[MFIMAPAccount setStoreJunkOnServer:]
-[MFIMAPAccount setStoreSentMessagesOnServer:]
-[MFIMAPAccount setStoreTrashOnServer:]
-[MFIMAPAccount gmailCapabilitiesSupport]
-[MFIMAPAccount setGmailCapabilitiesSupport:]
-[MFIMAPAccount isGmailAccount]
-[MFIMAPAccount detectAllMailWithGateway:]
-[MFIMAPAccount connectAndAuthenticate:]
-[MFIMAPAccount handleOpenMailboxError:]
-[MFIMAPAccount gatewayForMailbox:options:]
-[MFIMAPAccount gatewayForExistingConnectionToMailbox:]
-[MFIMAPAccount recoverFromConnectionLoss]
-[MFIMAPAccount invalidateMailboxWithName:expunge:URLStringToCompact:]
-[MFIMAPAccount _invalidateMailboxWithName:expunge:URLToCompact:]
-[MFIMAPAccount _gatewayForMailbox:name:options:]
-[MFIMAPAccount _getPotentialGatewayForMailbox:options:createdNewConnection:needsSelect:]
-[MFIMAPAccount shouldRetryConnectionWithoutCertificateCheckingAfterError:host:didPromptUser:]
-[MFIMAPAccount _recoverFromConnectionlessStateHighPriority:]
-[MFIMAPAccount _releaseAllConnectionsAndCallSuper:saveOfflineCache:]
-[MFIMAPAccount releaseAllConnections]
-[MFIMAPAccount _validateConnections]
-[MFIMAPAccount validateConnections]
-[MFIMAPAccount observeValueForKeyPath:ofObject:change:context:]
-[MFIMAPAccount IMAPMailboxForMailbox:createIfNeeded:]
-[MFIMAPAccount IMAPMailboxForMailboxName:createIfNeeded:]
-[MFIMAPAccount _IMAPMailboxForMailbox:name:createIfNeeded:]
-[MFIMAPAccount _addIMAPMailboxForMailbox:name:]
-[MFIMAPAccount gmailLabelWithName:]
-[MFIMAPAccount serverDefinedArchiveMailbox]
-[MFIMAPAccount serverDefinedDraftsMailbox]
-[MFIMAPAccount serverDefinedJunkMailbox]
-[MFIMAPAccount serverDefinedSentMailbox]
-[MFIMAPAccount serverDefinedTrashMailbox]
-[MFIMAPAccount _serverDefinedMailboxWithAttribute:]
-[MFIMAPAccount resetSpecialMailboxes]
-[MFIMAPAccount _renameIMAPMailboxWithMailbox:fromName:toName:]
-[MFIMAPAccount _removeIMAPMailboxWithName:]
-[MFIMAPAccount _startObserving:IMAPMailbox:]
-[MFIMAPAccount quotaRootForName:createIfNeeded:]
-[MFIMAPAccount clearQuotaRoots]
-[MFIMAPAccount _setIsOffline:]
-[MFIMAPAccount setIsOffline:]
-[MFIMAPAccount _asynchronouslyFetchUnreadCountsCheckForNewMessages:highPriority:]
-[MFIMAPAccount boostExistingFetchTo:]
-[MFIMAPAccount fetchSynchronouslyIsAuto:]
-[MFIMAPAccount _setSeparatorChar:]
-[MFIMAPAccount separatorCharFetchIfNeeded:]
-[MFIMAPAccount lastKnownCapabilities]
-[MFIMAPAccount supportsIDLE]
-[MFIMAPAccount hasCapability:]
-[MFIMAPAccount _synchronizeMailboxListHighPriority:]
-[MFIMAPAccount _updateSpecialMailboxes]
-[MFIMAPAccount _synchronizeMailboxListDuringMailCheck]
-[MFIMAPAccount _listingForMailbox:listAllChildren:onlySubscribed:highPriority:]
-[MFIMAPAccount _namespacePrefixesForPrivate:public:shared:]
-[MFIMAPAccount _recursivelyFilterMailboxList:accordingToList:]
-[MFIMAPAccount _listingForMailbox:listAllChildren:highPriority:]
-[MFIMAPAccount _createMailbox:withGateway:]
-[MFIMAPAccount createMailboxWithParent:displayName:localizedDisplayName:]
-[MFIMAPAccount validNameForMailbox:fromDisplayName:error:]
-[MFIMAPAccount _askToChangePathPrefixToCreateMailbox:displayName:withGateway:]
-[MFIMAPAccount deleteMailbox:reflectToServer:]
-[MFIMAPAccount _deleteMailbox:reflectToServer:]
-[MFIMAPAccount _specialMailboxRelativePathForType:]
-[MFIMAPAccount _specialMailboxWithType:create:isLocal:]
-[MFIMAPAccount _fetchUnreadCountsForMailbox:recursively:gateway:checkForNewMessages:]
-[MFIMAPAccount _fetchUnreadCountsForMailbox:recursively:gateway:]
-[MFIMAPAccount _fetchUnreadCountsCheckForNewMessages:]
-[MFIMAPAccount _synchronizeAccountWithServerHighPriority:]
-[MFIMAPAccount _copyMailboxWithParent:name:pathComponent:attributes:existingMailbox:]
-[MFIMAPAccount _synchronouslyLoadListingForParent:]
-[MFIMAPAccount refreshMailboxListingRootedAtMailbox:]
-[MFIMAPAccount _loadMailboxListingIntoCache:parent:addedMailboxes:removedMailboxes:]
-[MFIMAPAccount _loadMailboxListingIntoCache:parent:addedMailboxes:removedMailboxes:updatingSourceMailbox:]
___107-[MFIMAPAccount _loadMailboxListingIntoCache:parent:addedMailboxes:removedMailboxes:updatingSourceMailbox:]_block_invoke
___107-[MFIMAPAccount _loadMailboxListingIntoCache:parent:addedMailboxes:removedMailboxes:updatingSourceMailbox:]_block_invoke_2
___copy_helper_block_1117
___destroy_helper_block_1118
___107-[MFIMAPAccount _loadMailboxListingIntoCache:parent:addedMailboxes:removedMailboxes:updatingSourceMailbox:]_block_invoke1124
___copy_helper_block_1125
___destroy_helper_block_1126
___107-[MFIMAPAccount _loadMailboxListingIntoCache:parent:addedMailboxes:removedMailboxes:updatingSourceMailbox:]_block_invoke1128
___107-[MFIMAPAccount _loadMailboxListingIntoCache:parent:addedMailboxes:removedMailboxes:updatingSourceMailbox:]_block_invoke_21131
___copy_helper_block_1132
___destroy_helper_block_1133
-[MFIMAPAccount _waitForMailboxListingLoadToComplete]
-[MFIMAPAccount _mailboxesWereRemovedFromTree:withFileSystemPaths:]
+[MFIMAPAccount _deleteQueuedMailboxes:]
___40+[MFIMAPAccount _deleteQueuedMailboxes:]_block_invoke
___copy_helper_block_1167
___destroy_helper_block_1168
-[MFIMAPAccount _recursivelyModifySubscriptions:forMailbox:children:withGateway:]
-[MFIMAPAccount renameMailbox:newDisplayName:parent:]
-[MFIMAPAccount insertInMailboxes:atIndex:]
+[MFIMAPAccount _pathComponentForMailboxName:]
+[MFIMAPAccount _mailboxNameForPathComponent:]
___46+[MFIMAPAccount _mailboxNameForPathComponent:]_block_invoke
-[MFIMAPAccount _fullIMAPPathForPath:relativeToMailbox:]
-[MFIMAPAccount nameForMailbox:]
-[MFIMAPAccount _mailboxForName:]
-[MFIMAPAccount canMailboxBeDeleted:]
-[MFIMAPAccount storedServerPathPrefix]
-[MFIMAPAccount serverPathPrefix]
-[MFIMAPAccount _setServerPathPrefix:permanently:shouldSync:]
-[MFIMAPAccount setServerPathPrefix:permanently:]
-[MFIMAPAccount _fileSystemServerPathPrefix:]
-[MFIMAPAccount _setFileSystemServerPathPrefix]
-[MFIMAPAccount syncFileSystemWithServerPathPrefix]
-[MFIMAPAccount _mailboxPathPrefix:]
-[MFIMAPAccount _loadEntriesFromFileSystemPath:parent:]
-[MFIMAPAccount deleteMessagesFromMailbox:olderThanNumberOfDays:]
-[MFIMAPAccount offlineCacheIfOffline]
-[MFIMAPAccount offlineCache]
-[MFIMAPAccount _clearOfflineCache]
-[MFIMAPAccount mailboxForRelativePath:isFilesystemPath:create:]
-[MFIMAPAccount _URLPersistenceScheme]
-[MFIMAPAccount _infoForMatchingURL:]
-[MFIMAPAccount storesUnseenCount]
-[MFIMAPAccount messageDeliveryWillBegin:]
-[MFIMAPAccount idleStore]
-[MFIMAPAccount setIdleStore:]
-[MFIMAPAccount lastMailboxListFetchTime]
-[MFIMAPAccount setLastMailboxListFetchTime:]
-[MFIMAPAccount connectionPool]
-[MFIMAPAccount setConnectionPool:]
-[MFIMAPAccount recoveringFromConnectionLoss]
-[MFIMAPAccount setRecoveringFromConnectionLoss:]
-[MFIMAPAccount remoteTaskQueue]
-[MFIMAPAccount remoteFetchQueue]
-[MFIMAPAccount deferredInitializationQueue]
-[MFIMAPAccount lastConnectionFailed]
-[MFIMAPAccount setLastConnectionFailed:]
-[MFIMAPAccount shouldIncludePrefixInPath]
-[MFIMAPAccount setShouldIncludePrefixInPath:]
-[MFIMAPAccount allowsInputForConnectionProblems]
-[MFIMAPAccount setAllowsInputForConnectionProblems:]
-[MFIMAPAccount .cxx_destruct]
-[MFIMAPAccount(ScriptingSupport) messageCaching]
-[MFIMAPAccount(ScriptingSupport) setMessageCaching:]
+[MFIMAPOperation newOperationWithSerializedData:cursor:]
_createStringFromData
-[MFIMAPOperation _magic]
-[MFIMAPOperation _deserializeOpSpecificValuesFromData:cursor:]
-[MFIMAPOperation serializeIntoData:]
_serializeStringToData
-[MFIMAPOperation _initWithMailboxName:]
-[MFIMAPOperation init]
-[MFIMAPOperation operationType]
-[MFIMAPOperation approximateSize]
-[MFIMAPOperation isSourceOfTemporaryUid:]
-[MFIMAPOperation actsOnTemporaryUid:]
-[MFIMAPOperation expungeTemporaryUid:]
-[MFIMAPOperation firstTemporaryUid]
-[MFIMAPOperation lastTemporaryUid]
-[MFIMAPOperation mailboxName]
-[MFIMAPOperation usesRealUids]
-[MFIMAPOperation setUsesRealUids:]
-[MFIMAPOperation .cxx_destruct]
-[MFIMAPCreateOperation initWithMailboxToCreate:]
-[MFIMAPCreateOperation operationType]
-[MFIMAPCreateOperation description]
-[MFIMAPDeleteOperation initWithMailboxToDelete:]
-[MFIMAPDeleteOperation operationType]
-[MFIMAPDeleteOperation description]
-[MFIMAPStoreOperation _initWithObjectsToSet:objectsToClear:forUids:inMailbox:]
-[MFIMAPStoreOperation approximateSize]
-[MFIMAPStoreOperation uidStrings]
_stringArrayFromUidArray
-[MFIMAPStoreOperation _deserializeOpSpecificValuesFromData:cursor:]
_createStringArrayFromData
_createUidArrayFromData
-[MFIMAPStoreOperation serializeIntoData:]
_serializeStringArrayToData
_serializeUidArrayToData
-[MFIMAPStoreOperation actsOnTemporaryUid:]
-[MFIMAPStoreOperation expungeTemporaryUid:]
-[MFIMAPStoreOperation objectsToSet]
-[MFIMAPStoreOperation setObjectsToSet:]
-[MFIMAPStoreOperation objectsToClear]
-[MFIMAPStoreOperation setObjectsToClear:]
-[MFIMAPStoreOperation uids]
-[MFIMAPStoreOperation setUids:]
-[MFIMAPStoreOperation .cxx_destruct]
-[MFIMAPStoreFlagsOperation initWithFlagsToSet:flagsToClear:forUids:inMailbox:]
-[MFIMAPStoreFlagsOperation operationType]
-[MFIMAPStoreFlagsOperation flagsToSet]
-[MFIMAPStoreFlagsOperation flagsToClear]
-[MFIMAPStoreFlagsOperation description]
-[MFIMAPStoreGmailLabelsOperation initWithGmailLabelsToSet:gmailLabelsToClear:forUids:inMailbox:]
-[MFIMAPStoreGmailLabelsOperation operationType]
-[MFIMAPStoreGmailLabelsOperation gmailLabelsToSet]
-[MFIMAPStoreGmailLabelsOperation gmailLabelsToClear]
-[MFIMAPStoreGmailLabelsOperation description]
-[MFIMAPAppendMessageOperation initWithAppendedUid:approximateSize:flags:internalDate:mailbox:]
-[MFIMAPAppendMessageOperation operationType]
-[MFIMAPAppendMessageOperation approximateSize]
-[MFIMAPAppendMessageOperation _deserializeOpSpecificValuesFromData:cursor:]
_deserializeUnsignedIntAtCursor
-[MFIMAPAppendMessageOperation serializeIntoData:]
-[MFIMAPAppendMessageOperation internalDate]
-[MFIMAPAppendMessageOperation isSourceOfTemporaryUid:]
-[MFIMAPAppendMessageOperation expungeTemporaryUid:]
-[MFIMAPAppendMessageOperation firstTemporaryUid]
-[MFIMAPAppendMessageOperation lastTemporaryUid]
-[MFIMAPAppendMessageOperation description]
-[MFIMAPAppendMessageOperation uid]
-[MFIMAPAppendMessageOperation setUid:]
-[MFIMAPAppendMessageOperation flags]
-[MFIMAPAppendMessageOperation setFlags:]
-[MFIMAPAppendMessageOperation internalDateAsInt]
-[MFIMAPAppendMessageOperation setInternalDateAsInt:]
-[MFIMAPAppendMessageOperation size]
-[MFIMAPAppendMessageOperation setSize:]
-[MFIMAPAppendMessageOperation .cxx_destruct]
-[MFIMAPCopyMessagesOperation initWithUidStringsToCopy:fromMailbox:toMailbox:firstNewUid:]
-[MFIMAPCopyMessagesOperation operationType]
-[MFIMAPCopyMessagesOperation approximateSize]
-[MFIMAPCopyMessagesOperation sourceUidStrings]
-[MFIMAPCopyMessagesOperation destinationUidStrings]
-[MFIMAPCopyMessagesOperation _deserializeOpSpecificValuesFromData:cursor:]
-[MFIMAPCopyMessagesOperation serializeIntoData:]
-[MFIMAPCopyMessagesOperation isSourceOfTemporaryUid:]
-[MFIMAPCopyMessagesOperation sourceUidForTemporaryUid:]
-[MFIMAPCopyMessagesOperation getMessageId:andInternalDate:forDestinationUid:]
-[MFIMAPCopyMessagesOperation setMessageId:andInternalDate:forMessageWithSourceUid:]
-[MFIMAPCopyMessagesOperation actsOnTemporaryUid:]
-[MFIMAPCopyMessagesOperation expungeTemporaryUid:]
-[MFIMAPCopyMessagesOperation firstTemporaryUid]
-[MFIMAPCopyMessagesOperation lastTemporaryUid]
-[MFIMAPCopyMessagesOperation description]
-[MFIMAPCopyMessagesOperation sourceUids]
-[MFIMAPCopyMessagesOperation setSourceUids:]
-[MFIMAPCopyMessagesOperation destinationUids]
-[MFIMAPCopyMessagesOperation setDestinationUids:]
-[MFIMAPCopyMessagesOperation destinationMailbox]
-[MFIMAPCopyMessagesOperation setDestinationMailbox:]
-[MFIMAPCopyMessagesOperation .cxx_destruct]
-[MFIMAPOfflineCopyOnStupidServerOperation serializeIntoData:]
-[MFIMAPOfflineCopyOnStupidServerOperation _magic]
-[MFIMAPOfflineCopyOnStupidServerOperation _deserializeOpSpecificValuesFromData:cursor:]
-[MFIMAPOfflineCopyOnStupidServerOperation getMessageId:andInternalDate:forDestinationUid:]
-[MFIMAPOfflineCopyOnStupidServerOperation setMessageId:andInternalDate:forMessageWithSourceUid:]
-[MFIMAPOfflineCopyOnStupidServerOperation expungeTemporaryUid:]
-[MFIMAPOfflineCopyOnStupidServerOperation approximateSize]
-[MFIMAPOfflineCopyOnStupidServerOperation messageIds]
-[MFIMAPOfflineCopyOnStupidServerOperation setMessageIds:]
-[MFIMAPOfflineCopyOnStupidServerOperation internalDates]
-[MFIMAPOfflineCopyOnStupidServerOperation setInternalDates:]
-[MFIMAPOfflineCopyOnStupidServerOperation .cxx_destruct]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___createUidArrayFromIndexSet_block_invoke
___copy_helper_block_
___destroy_helper_block_
_scanUid
-[_IMAPOfflineRestoreContext description]
-[_IMAPOfflineRestoreContext monitor]
-[_IMAPOfflineRestoreContext setMonitor:]
-[_IMAPOfflineRestoreContext gateway]
-[_IMAPOfflineRestoreContext setGateway:]
-[_IMAPOfflineRestoreContext temporaryToRealUidMap]
-[_IMAPOfflineRestoreContext setTemporaryToRealUidMap:]
-[_IMAPOfflineRestoreContext storesByMailboxName]
-[_IMAPOfflineRestoreContext setStoresByMailboxName:]
-[_IMAPOfflineRestoreContext currentSize]
-[_IMAPOfflineRestoreContext setCurrentSize:]
-[_IMAPOfflineRestoreContext totalSize]
-[_IMAPOfflineRestoreContext setTotalSize:]
-[_IMAPOfflineRestoreContext activityAccessKey]
-[_IMAPOfflineRestoreContext setActivityAccessKey:]
-[_IMAPOfflineRestoreContext oldTaskName]
-[_IMAPOfflineRestoreContext setOldTaskName:]
-[_IMAPOfflineRestoreContext .cxx_destruct]
-[MFIMAPOperationCache initWithIMAPAccount:]
-[MFIMAPOperationCache init]
-[MFIMAPOperationCache createMailbox:]
_locked_flagChanges
-[MFIMAPOperationCache deleteMailbox:]
-[MFIMAPOperationCache setFlags:andClearFlags:forMessages:]
-[MFIMAPOperationCache setGmailLabels:andClearGmailLabels:forMessages:]
-[MFIMAPOperationCache _setFlagsOrGmailLabels:andClearFlagsOrGmailLabels:actuallyGmailLabels:forMessages:]
_locked_setFlags
-[MFIMAPOperationCache setFlags:andClearFlags:forUids:forMailbox:]
-[MFIMAPOperationCache setGmailLabels:andClearGmailLabels:forUids:forMailbox:]
-[MFIMAPOperationCache firstUidForCopyingMessages:toMailbox:]
_locked_makeCopyOperation
-[MFIMAPOperationCache uidForAppendingMessageData:withFlags:andInternalDate:toMailbox:]
_writeDataToPath
-[MFIMAPOperationCache _expungeMessageWithTemporaryUid:orMessageID:documentID:]
-[MFIMAPOperationCache expungeTemporaryUid:]
-[MFIMAPOperationCache expungeMessageWithMessageID:documentID:]
-[MFIMAPOperationCache saveChanges]
_locked_saveChanges
-[MFIMAPOperationCache numberOfPendingChanges]
-[MFIMAPOperationCache hasOperationsForMailbox:]
-[MFIMAPOperationCache _performCreateOperation:withContext:]
-[MFIMAPOperationCache _performDeleteOperation:withContext:]
-[MFIMAPOperationCache _performStoreOperation:forGmailLabels:ignoringUids:withContext:]
_convertTemporaryUids
_selectMailboxIfNeeded
-[MFIMAPOperationCache _performAppendOperation:withContext:backupManager:suggestedOfflineRestoreName:recoveredMailboxName:error:]
_searchForNewUid
_getStoreForMailboxName
-[MFIMAPOperationCache _performCopyOperation:withContext:failedSourceUids:error:]
-[MFIMAPOperationCache performDeferredOperationsWithGateway:outDisplayableError:]
-[MFIMAPOperationCache _deferredOperations]
-[MFIMAPOperationCache description]
-[MFIMAPOperationCache .cxx_destruct]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___convertTemporaryUids_block_invoke
___copy_helper_block_
___destroy_helper_block_
_copyHeaderIdFromData
-[MFIMAPSizeEngine initWithAccount:]
-[MFIMAPSizeEngine dealloc]
-[MFIMAPSizeEngine observeValueForKeyPath:ofObject:change:context:]
-[MFIMAPSizeEngine _addUsageInfoFromMailbox:]
-[MFIMAPSizeEngine _addQuotaRootsFromMailbox:]
-[MFIMAPSizeEngine _changeUsageInfo:forMailbox:refetchQuotas:]
-[MFIMAPSizeEngine _changeQuotaRoots:forMailbox:]
-[MFIMAPSizeEngine _mailboxBecameInvalid:]
___42-[MFIMAPSizeEngine _mailboxBecameInvalid:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFIMAPSizeEngine _getSizeForMailbox:]
-[MFIMAPSizeEngine _runWorkerThread]
-[MFIMAPSizeEngine _shouldStartWorkerThread]
-[MFIMAPSizeEngine quotaStatus]
-[MFIMAPSizeEngine quotaNames]
-[MFIMAPSizeEngine usageForQuotaName:]
-[MFIMAPSizeEngine copyMailboxesForQuotaName:]
-[MFIMAPSizeEngine mailbox:usesQuotaName:]
-[MFIMAPSizeEngine .cxx_destruct]
+[MFJunkMail mapNameForMapType:]
+[MFJunkMail mapTypeFromMapName:]
+[MFJunkMail mapDescriptionFromMapType:]
_junkMailMap
_updateMapCategoryWithTextAndWeight
_junkMailMapFileURL
_oldJunkMailMapFileURL
-[DOMDocument(JunkAdditions) junkStringNonWhiteSpaceCount:URLs:imageURLs:]
+[MFJunkMailFilter sharedInstance]
___34+[MFJunkMailFilter sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFJunkMailFilter dealloc]
-[MFJunkMailFilter map]
-[MFJunkMailFilter setMap:]
+[MFJunkMailFilter _junkFilterUsageCounterKeys]
___47+[MFJunkMailFilter _junkFilterUsageCounterKeys]_block_invoke
-[MFJunkMailFilter evaluatedMessageCount]
-[MFJunkMailFilter evaluatedAsJunkMessageCount]
-[MFJunkMailFilter manuallyMarkedAsJunkMessageCount]
-[MFJunkMailFilter manuallyMarkedAsNotJunkMessageCount]
+[MFJunkMailFilter shouldUpdateTrainingDebt]
+[MFJunkMailFilter incrementJunkMailTrainingDebtBy:]
+[MFJunkMailFilter incrementJunkMailTrainingCreditBy:]
+[MFJunkMailFilter resetJunkMailTrainingBalance]
+[MFJunkMailFilter resetJunkMailUsageCounters]
-[MFJunkMailFilter reset]
-[MFJunkMailFilter saveTraining]
-[MFJunkMailFilter junkMailTrainingBalance]
-[MFJunkMailFilter junkMailTrainingDebt]
-[MFJunkMailFilter junkMailTrainingCredit]
-[MFJunkMailFilter isEnabled]
-[MFJunkMailFilter state]
-[MFJunkMailFilter gatherUsageCounts]
-[MFJunkMailFilter _usageCounter]
-[MFJunkMailFilter junkMailLevelForMessage:]
-[MFJunkMailFilter junkMailLevelForMessage:junkRecorder:]
-[MFJunkMailFilter trainOnMessages:junkMailLevel:]
-[MFJunkMailFilter userDidReplyToMessage:]
___42-[MFJunkMailFilter userDidReplyToMessage:]_block_invoke
___copy_helper_block_176
___destroy_helper_block_177
-[MFJunkMailFilter isDirty]
-[MFJunkMailFilter setIsDirty:]
-[MFJunkMailFilter _saveTrainingWithDelay]
-[MFJunkMailFilter useCleanMap]
-[MFJunkMailFilter setUseCleanMap:]
-[MFJunkMailFilter oldMapFileURL]
-[MFJunkMailFilter setOldMapFileURL:]
-[MFJunkMailFilter mapFileURL]
-[MFJunkMailFilter setMapFileURL:]
-[MFJunkMailFilter mapFilePath]
-[MFJunkMailFilter setMapFilePath:]
-[MFJunkMailFilter isInTraining]
-[MFJunkMailFilter setIsInTraining:]
-[MFJunkMailFilter .cxx_destruct]
+[MFLibrary loadSearchSettings]
+[MFLibrary sharedInstance]
_libraryFlagsForMessageWithFlags
+[MFLibrary commitMessage:immediately:]
+[MFLibrary backingStoreJournalDirectory]
+[MFLibrary backingStoreJournalPath]
+[MFLibrary removeBackingStoreUpdateJournal]
+[MFLibrary updateBackingStoreUpdateJournal]
+[MFLibrary _mergeRestoreMessageLibraryIDsToUpdate:]
+[MFLibrary restoreBackingStoreUpdateJournalIfNeeded]
+[MFLibrary flagsChangedForMessages:]
+[MFLibrary updateJunkMessagesForIndexing]
+[MFLibrary _addMessagesNeedingEmlxUpdate:]
+[MFLibrary _setCommitTimer:]
+[MFLibrary scheduleCommit]
+[MFLibrary unScheduleCommit]
+[MFLibrary scheduleMessageFileUpdate]
+[MFLibrary unScheduleMessageFileUpdate]
+[MFLibrary synchronouslyUpdateMessageFiles]
___44+[MFLibrary synchronouslyUpdateMessageFiles]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[MFLibrary commitSynchronously]
+[MFLibrary commitSynchronouslyPostingMessages:postFlags:postingOldFlagsByMessage:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___83+[MFLibrary commitSynchronouslyPostingMessages:postFlags:postingOldFlagsByMessage:]_block_invoke
_setFlagsForMessage
___83+[MFLibrary commitSynchronouslyPostingMessages:postFlags:postingOldFlagsByMessage:]_block_invoke_2
___copy_helper_block_376
___destroy_helper_block_377
___83+[MFLibrary commitSynchronouslyPostingMessages:postFlags:postingOldFlagsByMessage:]_block_invoke381
___copy_helper_block_382
___destroy_helper_block_383
___copy_helper_block_386
___destroy_helper_block_387
+[MFLibrary _commitMessagesInBackground]
+[MFLibrary _updateMessageFilesInBackground]
+[MFLibrary waitForCommitsToFinish]
___35+[MFLibrary waitForCommitsToFinish]_block_invoke
+[MFLibrary setSnippetsForMessages:]
___36+[MFLibrary setSnippetsForMessages:]_block_invoke
___36+[MFLibrary setSnippetsForMessages:]_block_invoke_2
___copy_helper_block_409
___destroy_helper_block_410
___copy_helper_block_415
___destroy_helper_block_416
+[MFLibrary commitFlagsForMessage:oldFlags:]
+[MFLibrary loadMessageCountsForMailboxes]
___42+[MFLibrary loadMessageCountsForMailboxes]_block_invoke
+[MFLibrary recalculateMessageCountsForMailboxIDs:]
___51+[MFLibrary recalculateMessageCountsForMailboxIDs:]_block_invoke
___copy_helper_block_487
___destroy_helper_block_488
+[MFLibrary setSourceMailbox:forMailboxes:]
___43+[MFLibrary setSourceMailbox:forMailboxes:]_block_invoke
___copy_helper_block_504
___destroy_helper_block_505
___43+[MFLibrary setSourceMailbox:forMailboxes:]_block_invoke513
___copy_helper_block_516
___destroy_helper_block_517
+[MFLibrary removeSourceMailbox:]
___33+[MFLibrary removeSourceMailbox:]_block_invoke
___copy_helper_block_526
___destroy_helper_block_527
___33+[MFLibrary removeSourceMailbox:]_block_invoke529
+[MFLibrary removeSourceMailboxFromMailboxes:]
___46+[MFLibrary removeSourceMailboxFromMailboxes:]_block_invoke
___copy_helper_block_537
___destroy_helper_block_538
+[MFLibrary clearLabelsForMailboxes:]
___37+[MFLibrary clearLabelsForMailboxes:]_block_invoke
___copy_helper_block_542
___destroy_helper_block_543
+[MFLibrary _mailboxIDsStringForMailboxes:]
+[MFLibrary updateGmailLabelsFromDictionary:forMessages:]
___57+[MFLibrary updateGmailLabelsFromDictionary:forMessages:]_block_invoke
_addGmailLabelsToMessages
___57+[MFLibrary updateGmailLabelsFromDictionary:forMessages:]_block_invoke_2
___copy_helper_block_557
___destroy_helper_block_558
___copy_helper_block_561
___destroy_helper_block_562
+[MFLibrary _commitFlagsForMessage:oldFlags:]
___45+[MFLibrary _commitFlagsForMessage:oldFlags:]_block_invoke
___45+[MFLibrary _commitFlagsForMessage:oldFlags:]_block_invoke_2
___copy_helper_block_569
___destroy_helper_block_570
___copy_helper_block_573
___destroy_helper_block_574
+[MFLibrary setBackgroundColorForMessages:textColorForMessages:]
___64+[MFLibrary setBackgroundColorForMessages:textColorForMessages:]_block_invoke
_setColorForMessage
___64+[MFLibrary setBackgroundColorForMessages:textColorForMessages:]_block_invoke_2
___copy_helper_block_581
___destroy_helper_block_582
___copy_helper_block_585
___destroy_helper_block_586
+[MFLibrary setFlagsAndColorForMessages:]
___41+[MFLibrary setFlagsAndColorForMessages:]_block_invoke
___41+[MFLibrary setFlagsAndColorForMessages:]_block_invoke_2
___copy_helper_block_598
___destroy_helper_block_599
___copy_helper_block_602
___destroy_helper_block_603
+[MFLibrary updateSize:forMessage:]
___35+[MFLibrary updateSize:forMessage:]_block_invoke
___copy_helper_block_613
___destroy_helper_block_614
+[MFLibrary initializeDatabase:]
+[MFLibrary writeQueue]
+[MFLibrary initialize]
+[MFLibrary setupLibrary]
___25+[MFLibrary setupLibrary]_block_invoke
___25+[MFLibrary setupLibrary]_block_invoke_2
_sqlite3_traceCallback
_reloadMailboxCache
___copy_helper_block_772
___destroy_helper_block_773
+[MFLibrary _mailboxWillBeInvalidated:]
+[MFLibrary _mailboxWasRenamed:]
+[MFLibrary _mailAccountsDidChange:]
+[MFLibrary updateNormalizedSubjectsIfNeededWithHandle:]
+[MFLibrary _sendAttributesToSpotlightForMessage:path:replaceExisting:]
___71+[MFLibrary _sendAttributesToSpotlightForMessage:path:replaceExisting:]_block_invoke
___copy_helper_block_803
___destroy_helper_block_804
+[MFLibrary _sendAttributesToSpotlight:bodyData:plistData:]
+[MFLibrary _sendAttributesToSpotlight:attributes:]
___51+[MFLibrary _sendAttributesToSpotlight:attributes:]_block_invoke
___copy_helper_block_819
___destroy_helper_block_820
+[MFLibrary _spotlightSendQueue]
___32+[MFLibrary _spotlightSendQueue]_block_invoke
+[MFLibrary plistDataForMessage:subject:sender:to:dateSent:dateReceived:dateLastViewed:remoteID:originalMailboxURLString:gmailLabels:flags:mergeWithDictionary:]
+[MFLibrary _removeExtendedAttributePlistFromEMLX:]
+[MFLibrary writeEmlxFile:forMessage:withBodyData:plistData:error:]
+[MFLibrary _removeAlternatePathForEmlxPath:]
+[MFLibrary touchDirectoryForMailbox:]
+[MFLibrary deleteDataDirectoriesForMailbox:]
+[MFLibrary _updateDateLastViewed:forLibraryID:]
+[MFLibrary backfillDateLastViewedAttribute]
___44+[MFLibrary backfillDateLastViewedAttribute]_block_invoke
___copy_helper_block_891
___destroy_helper_block_892
+[MFLibrary hideMailboxesNotInLibraryFromSpotlight]
___51+[MFLibrary hideMailboxesNotInLibraryFromSpotlight]_block_invoke
___copy_helper_block_916
___destroy_helper_block_917
+[MFLibrary addGmailLabelsToEmlx]
___33+[MFLibrary addGmailLabelsToEmlx]_block_invoke
___copy_helper_block_927
___destroy_helper_block_928
+[MFLibrary fixAttachmentCache]
___31+[MFLibrary fixAttachmentCache]_block_invoke
___copy_helper_block_938
___destroy_helper_block_939
___31+[MFLibrary fixAttachmentCache]_block_invoke941
___copy_helper_block_945
___destroy_helper_block_946
+[MFLibrary isRemoteStoreAccount:]
+[MFLibrary isLocalAccount:]
+[MFLibrary isLibraryMessage:]
+[MFLibrary canUseEmlxFileWhenCopyingMessage:fromAccount:toAccount:]
+[MFLibrary cleanupTablesReferencingMessageID:inDatabase:]
+[MFLibrary updateDatabaseValuesIfNeeded]
___41+[MFLibrary updateDatabaseValuesIfNeeded]_block_invoke
___copy_helper_block_992
___destroy_helper_block_993
+[MFLibrary resetConversationIDForMessages:]
___44+[MFLibrary resetConversationIDForMessages:]_block_invoke
___44+[MFLibrary resetConversationIDForMessages:]_block_invoke_2
___copy_helper_block_1000
___destroy_helper_block_1001
___copy_helper_block_1003
___destroy_helper_block_1004
+[MFLibrary insertOrUpdateMessages:withMailbox:fetchBodies:isInitialImport:oldMessagesByNewMessage:remoteIDs:newDocumentIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:progressDelegate:updateRowIDs:missedMessages:error:]
_libraryMessageSort
___230+[MFLibrary insertOrUpdateMessages:withMailbox:fetchBodies:isInitialImport:oldMessagesByNewMessage:remoteIDs:newDocumentIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:progressDelegate:updateRowIDs:missedMessages:error:]_block_invoke
___copy_helper_block_1048
___destroy_helper_block_1049
___230+[MFLibrary insertOrUpdateMessages:withMailbox:fetchBodies:isInitialImport:oldMessagesByNewMessage:remoteIDs:newDocumentIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:progressDelegate:updateRowIDs:missedMessages:error:]_block_invoke1052
___copy_helper_block_1053
___destroy_helper_block_1054
_sortedArrayWithSortedIndexes
___230+[MFLibrary insertOrUpdateMessages:withMailbox:fetchBodies:isInitialImport:oldMessagesByNewMessage:remoteIDs:newDocumentIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:progressDelegate:updateRowIDs:missedMessages:error:]_block_invoke1070
_createAddresseeStringFromColumns
_rowidForAddressText
_rowidForMailboxURL
_referencesFromMessageHeadersAsEncodedMessageIDString
___230+[MFLibrary insertOrUpdateMessages:withMailbox:fetchBodies:isInitialImport:oldMessagesByNewMessage:remoteIDs:newDocumentIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:progressDelegate:updateRowIDs:missedMessages:error:]_block_invoke_2
___230+[MFLibrary insertOrUpdateMessages:withMailbox:fetchBodies:isInitialImport:oldMessagesByNewMessage:remoteIDs:newDocumentIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:progressDelegate:updateRowIDs:missedMessages:error:]_block_invoke_3
___copy_helper_block_1298
___destroy_helper_block_1299
___copy_helper_block_1303
___destroy_helper_block_1304
___copy_helper_block_1309
___destroy_helper_block_1310
+[MFLibrary addMessages:withMailbox:fetchBodies:isInitialImport:oldMessagesByNewMessage:remoteIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:missedMessages:error:]
+[MFLibrary addMessages:withMailbox:fetchBodies:isInitialImport:oldMessagesByNewMessage:error:]
+[MFLibrary addMessages:withMailbox:fetchBodies:oldMessagesByNewMessage:error:]
+[MFLibrary addMessages:withMailbox:progressDelegate:error:]
+[MFLibrary addMessages:withMailbox:error:]
+[MFLibrary duplicateMessages:newRemoteIDs:newDocumentIDs:forMailbox:setFlags:clearFlags:messageFlagsForMessages:createNewCacheFiles:error:]
+[MFLibrary duplicateMessages:newRemoteIDs:newDocumentIDs:forMailbox:setFlags:clearFlags:createNewCacheFiles:error:]
+[MFLibrary setAttachmentNames:forMessage:]
___43+[MFLibrary setAttachmentNames:forMessage:]_block_invoke
___43+[MFLibrary setAttachmentNames:forMessage:]_block_invoke_2
___copy_helper_block_1349
___destroy_helper_block_1350
___copy_helper_block_1353
___destroy_helper_block_1354
+[MFLibrary setThreadPriority:]
+[MFLibrary threadPriority]
+[MFLibrary invalidateMyEmailAddresses]
+[MFLibrary myAddressIDsString]
___31+[MFLibrary myAddressIDsString]_block_invoke
___31+[MFLibrary myAddressIDsString]_block_invoke_2
___copy_helper_block_1384
___destroy_helper_block_1385
+[MFLibrary clearActiveMailboxesCache]
+[MFLibrary disableActiveMailboxFiltering]
+[MFLibrary _getActiveAccountURLs:andActiveMailboxURLs:]
+[MFLibrary _rebuildActiveMailboxesCache]
+[MFLibrary _rebuildActiveMailboxesCacheIfNecessary]
+[MFLibrary _copyActiveMailboxesCache]
+[MFLibrary _isActiveMailboxID:]
+[MFLibrary _activeMailboxesClauseRebuildIfNecessary]
+[MFLibrary _setRecipientTypeForMessages:]
___42+[MFLibrary _setRecipientTypeForMessages:]_block_invoke
___copy_helper_block_1427
___destroy_helper_block_1428
+[MFLibrary sendMessagesMatchingQuery:to:options:]
___50+[MFLibrary sendMessagesMatchingQuery:to:options:]_block_invoke
_progressHandler
_sendMessagesToTargetNow
___50+[MFLibrary sendMessagesMatchingQuery:to:options:]_block_invoke_2
___copy_helper_block_1471
___destroy_helper_block_1472
___copy_helper_block_1476
___destroy_helper_block_1477
+[MFLibrary messagesMatchingQuery:options:]
+[MFLibrary messagesWhere:sortedBy:options:]
_selectClauseForOptions
+[MFLibrary _queryForMailbox:where:sortedBy:ascending:options:]
+[MFLibrary messagesForMailbox:where:sortedBy:ascending:options:]
+[MFLibrary messagesForMailbox:olderThanNumberOfDays:]
+[MFLibrary messagesForGmailLabel:inAllMailMailbox:olderThanNumberOfDays:]
+[MFLibrary unreadMessagesForMailbox:]
+[MFLibrary gatherCountsForMailbox:totalCount:unreadCount:deletedCount:totalSize:]
___82+[MFLibrary gatherCountsForMailbox:totalCount:unreadCount:deletedCount:totalSize:]_block_invoke
+[MFLibrary totalCountForMailbox:]
___34+[MFLibrary totalCountForMailbox:]_block_invoke
___copy_helper_block_1526
___destroy_helper_block_1527
+[MFLibrary unreadCountForMessageType:]
___39+[MFLibrary unreadCountForMessageType:]_block_invoke
___copy_helper_block_1535
___destroy_helper_block_1536
+[MFLibrary setMessageCountsForMailboxes]
___41+[MFLibrary setMessageCountsForMailboxes]_block_invoke
+[MFLibrary messagesWithRemoteIDs:inRemoteMailbox:options:]
___59+[MFLibrary messagesWithRemoteIDs:inRemoteMailbox:options:]_block_invoke
_messageForStmt
___copy_helper_block_1554
___destroy_helper_block_1555
+[MFLibrary messageWithRemoteID:inRemoteMailbox:options:]
___57+[MFLibrary messageWithRemoteID:inRemoteMailbox:options:]_block_invoke
___copy_helper_block_1559
___destroy_helper_block_1560
+[MFLibrary maximumRemoteIDForMailbox:]
___39+[MFLibrary maximumRemoteIDForMailbox:]_block_invoke
___copy_helper_block_1565
___destroy_helper_block_1566
+[MFLibrary getDetailsForMessagesWithRemoteIDStrings:fromMailbox:]
+[MFLibrary getDetailsForMessagesWithRemoteIDs:fromMailbox:]
___60+[MFLibrary getDetailsForMessagesWithRemoteIDs:fromMailbox:]_block_invoke
___copy_helper_block_1583
___destroy_helper_block_1584
+[MFLibrary getDetailsForMessagesWithQuery:contiguous:firstRemoteID:lastRemoteID:fromMailbox:]
___94+[MFLibrary getDetailsForMessagesWithQuery:contiguous:firstRemoteID:lastRemoteID:fromMailbox:]_block_invoke
___copy_helper_block_1600
___destroy_helper_block_1601
+[MFLibrary setStoresForMessages:]
+[MFLibrary setStoreForMessage:knownStores:]
+[MFLibrary setStoreForMessage:fromMailbox:knownStores:]
+[MFLibrary messageWithMessageID:]
+[MFLibrary messagesWithMessageIDHeader:]
+[MFLibrary messageWithLibraryID:options:]
___42+[MFLibrary messageWithLibraryID:options:]_block_invoke
___copy_helper_block_1621
___destroy_helper_block_1622
+[MFLibrary messageWithLibraryID:]
+[MFLibrary firstReplyToMessage:]
___33+[MFLibrary firstReplyToMessage:]_block_invoke
___copy_helper_block_1629
___destroy_helper_block_1630
+[MFLibrary messageHasRelatedNonJunkMessages:]
___46+[MFLibrary messageHasRelatedNonJunkMessages:]_block_invoke
___copy_helper_block_1644
___destroy_helper_block_1645
+[MFLibrary unsignedCountForQuery:monitor:]
___43+[MFLibrary unsignedCountForQuery:monitor:]_block_invoke
___copy_helper_block_1661
___destroy_helper_block_1662
+[MFLibrary boolForQuery:]
___26+[MFLibrary boolForQuery:]_block_invoke
___copy_helper_block_1670
___destroy_helper_block_1671
+[MFLibrary referencesForLibraryID:]
___36+[MFLibrary referencesForLibraryID:]_block_invoke
___copy_helper_block_1678
___destroy_helper_block_1679
+[MFLibrary copyMailboxURLToRowIDMap]
___37+[MFLibrary copyMailboxURLToRowIDMap]_block_invoke
+[MFLibrary mailboxesDidChange]
___31+[MFLibrary mailboxesDidChange]_block_invoke
+[MFLibrary urlForMailboxID:]
___29+[MFLibrary urlForMailboxID:]_block_invoke
___copy_helper_block_1685
___destroy_helper_block_1686
+[MFLibrary mailboxForMessage:]
+[MFLibrary _mailboxForMailboxID:]
+[MFLibrary remoteStoreForMessage:]
+[MFLibrary accountForMessage:]
+[MFLibrary mailboxNameForMessage:]
+[MFLibrary _loadSecondaryMetadataForMessage:fromDB:]
+[MFLibrary loadSecondaryMetadataForMessage:]
___45+[MFLibrary loadSecondaryMetadataForMessage:]_block_invoke
___copy_helper_block_1712
___destroy_helper_block_1713
+[MFLibrary snippetsForMessages:]
___33+[MFLibrary snippetsForMessages:]_block_invoke
___copy_helper_block_1719
___destroy_helper_block_1720
+[MFLibrary reloadMessage:]
___27+[MFLibrary reloadMessage:]_block_invoke
___copy_helper_block_1727
___destroy_helper_block_1728
+[MFLibrary updateFileForMessage:]
+[MFLibrary shouldCancel]
+[MFLibrary removeMessages:]
+[MFLibrary removeMessages:cleanUpAfter:]
___41+[MFLibrary removeMessages:cleanUpAfter:]_block_invoke
___41+[MFLibrary removeMessages:cleanUpAfter:]_block_invoke_2
___copy_helper_block_1771
___destroy_helper_block_1772
___copy_helper_block_1775
___destroy_helper_block_1776
+[MFLibrary compactMailbox:]
+[MFLibrary renameMailboxes:to:]
___32+[MFLibrary renameMailboxes:to:]_block_invoke
___32+[MFLibrary renameMailboxes:to:]_block_invoke_2
___copy_helper_block_1792
___destroy_helper_block_1793
___copy_helper_block_1797
___destroy_helper_block_1798
+[MFLibrary deleteMailboxes:]
+[MFLibrary deleteMailboxes:forRebuild:]
___40+[MFLibrary deleteMailboxes:forRebuild:]_block_invoke
___40+[MFLibrary deleteMailboxes:forRebuild:]_block_invoke_2
___copy_helper_block_1808
___destroy_helper_block_1809
___copy_helper_block_1812
___destroy_helper_block_1813
+[MFLibrary messagesWithMessageID:inMailbox:]
+[MFLibrary lastMessageWithMessageID:inMailbox:]
+[MFLibrary draftWithDocumentID:mailbox:]
___41+[MFLibrary draftWithDocumentID:mailbox:]_block_invoke
___copy_helper_block_1821
___destroy_helper_block_1822
+[MFLibrary _EWSFolderExistsForMailbox:errorString:]
___52+[MFLibrary _EWSFolderExistsForMailbox:errorString:]_block_invoke
___copy_helper_block_1825
___destroy_helper_block_1826
+[MFLibrary _addEWSProperty:value:forMailbox:errorString:]
___58+[MFLibrary _addEWSProperty:value:forMailbox:errorString:]_block_invoke
___copy_helper_block_1832
___destroy_helper_block_1833
+[MFLibrary _EWSProperty:forMailbox:errorString:]
___49+[MFLibrary _EWSProperty:forMailbox:errorString:]_block_invoke
___copy_helper_block_1837
___destroy_helper_block_1838
+[MFLibrary setEWSFolderId:forMailbox:]
___39+[MFLibrary setEWSFolderId:forMailbox:]_block_invoke
___copy_helper_block_1843
___destroy_helper_block_1844
___39+[MFLibrary setEWSFolderId:forMailbox:]_block_invoke1847
___copy_helper_block_1850
___destroy_helper_block_1851
+[MFLibrary EWSFolderIdForMailbox:]
+[MFLibrary EWSFolderIdsByURLForMailboxes:]
___43+[MFLibrary EWSFolderIdsByURLForMailboxes:]_block_invoke
___copy_helper_block_1869
___destroy_helper_block_1870
+[MFLibrary setEWSSyncState:forMailbox:]
+[MFLibrary EWSSyncStateForMailbox:]
+[MFLibrary updateEWSOfflineIdsToRealIds:]
___42+[MFLibrary updateEWSOfflineIdsToRealIds:]_block_invoke
___42+[MFLibrary updateEWSOfflineIdsToRealIds:]_block_invoke_2
___copy_helper_block_1884
___destroy_helper_block_1885
___copy_helper_block_1887
___destroy_helper_block_1888
+[MFLibrary allegedHighestModificationSequenceforIMAPMailboxURL:]
___65+[MFLibrary allegedHighestModificationSequenceforIMAPMailboxURL:]_block_invoke
___copy_helper_block_1896
___destroy_helper_block_1897
+[MFLibrary setAllegedHighestModificationSequence:forIMAPMailboxURL:]
___69+[MFLibrary setAllegedHighestModificationSequence:forIMAPMailboxURL:]_block_invoke
___copy_helper_block_1904
___destroy_helper_block_1905
+[MFLibrary computedHighestModificationSequenceforIMAPMailboxURL:]
___66+[MFLibrary computedHighestModificationSequenceforIMAPMailboxURL:]_block_invoke
___copy_helper_block_1910
___destroy_helper_block_1911
+[MFLibrary setComputedHighestModificationSequence:forIMAPMailboxURL:]
___70+[MFLibrary setComputedHighestModificationSequence:forIMAPMailboxURL:]_block_invoke
___copy_helper_block_1917
___destroy_helper_block_1918
+[MFLibrary loadDatabaseUUIDStringIfNeeded:]
+[MFLibrary _setDatabaseUUIDString:]
+[MFLibrary databaseUUIDString]
___31+[MFLibrary databaseUUIDString]_block_invoke
+[MFLibrary _invalidateDirectoryForMailboxes:]
+[MFLibrary dataDirectoryForMailbox:]
+[MFLibrary v2_intermediateDirectoryForLibraryID:forAttachments:]
+[MFLibrary intermediateDirectoryForLibraryID:forAttachments:]
+[MFLibrary filenameForLibraryID:part:]
+[MFLibrary _filenameForLibraryID:type:]
+[MFLibrary attachmentsDirectoryForMessage:]
+[MFLibrary dataPathForLibraryID:pathToMailbox:fileExists:]
+[MFLibrary _dataPathForLibraryID:pathToMailbox:type:]
+[MFLibrary _dataPathForMessageWithLibraryID:mailboxID:withFilename:]
+[MFLibrary dataPathForMessage:]
+[MFLibrary dataPathForMessage:part:]
+[MFLibrary _dataPathForMessage:type:]
+[MFLibrary messageWithDataPath:]
+[MFLibrary existingDataPathForMessage:]
+[MFLibrary appendData:forMessage:part:]
+[MFLibrary setData:forMessage:isPartial:]
+[MFLibrary setData:forMessage:isPartial:hasCompleteText:]
+[MFLibrary emlxPListAtURL:]
+[MFLibrary _emlxPListInFile:plistOffset:]
+[MFLibrary bodyDataAtPath:headerData:]
+[MFLibrary headerDataForMessage:]
+[MFLibrary bodyDataForMessage:andHeaderDataIfReadilyAvailable:]
+[MFLibrary bodyDataForMessage:]
+[MFLibrary fullBodyDataForMessage:andHeaderDataIfReadilyAvailable:]
+[MFLibrary fullBodyDataForMessage:]
+[MFLibrary dataForMimePart:]
+[MFLibrary _isFullEmlxLocallyAvailable:]
+[MFLibrary isMessageContentLocallyAvailable:]
+[MFLibrary _messageDataAtPath:]
+[MFLibrary fullMessageDataForMessage:]
+[MFLibrary incompleteMessagesForMailbox:directoryContents:]
___60+[MFLibrary incompleteMessagesForMailbox:directoryContents:]_block_invoke
___copy_helper_block_2037
___destroy_helper_block_2038
+[MFLibrary hasCacheFileForMessage:directoryContents:]
+[MFLibrary _hasCacheFileForMessageWithLibraryID:mailboxID:directoryContents:allowsPartials:]
+[MFLibrary hasCacheFileForMessage:part:directoryContents:]
+[MFLibrary markMessageAsViewed:viewedDate:]
+[MFLibrary queryForCriterion:options:baseTable:isSubquery:fixUpCriterion:]
+[MFLibrary queryForCriterion:options:]
___MFRelatedMessagesForWhereFromItems_block_invoke
___copy_helper_block_2082
___destroy_helper_block_2083
___MFRelatedMessagesForWhereFromItems_block_invoke2090
___MFRelatedMessagesForWhereFromItems_block_invoke_2
___copy_helper_block_2103
___destroy_helper_block_2104
___copy_helper_block_2111
___destroy_helper_block_2112
+[MFLibrary countedSpotlightQueryStringWithQueryString:]
+[MFLibrary spotlightQueryStringWithQueryString:]
+[MFLibrary createAllMailboxesSpotlightQueryWithQueryString:attributes:queryLabel:forUnreadCount:withMailboxExclusions:includeWhereFromsCriterion:]
_copyAllScopeDirectories
+[MFLibrary sendMessagesMatchingCriterion:to:options:searchType:queryLabel:async:]
_firstSpotlightCriterion
_criterionMinusSpotlightCriterion
_spotlightNotificationCallback
_shouldCancelMDQuery
+[MFLibrary spotlightCallbackDispatchQueue]
+[MFLibrary messagesMatchingCriterion:options:searchType:]
+[MFLibrary _queryForCountCriterion:]
+[MFLibrary countForCriterion:monitor:]
+[MFLibrary countForCriterion:]
+[MFLibrary boolForCriterion:]
+[MFLibrary criterionExpressionStringForStartLibraryID:count:]
+[MFLibrary filterContiguousMessages:forCriterion:options:]
+[MFLibrary rebuildMailbox:]
+[MFLibrary importMailbox:]
+[MFLibrary libraryIsImporting]
+[MFLibrary setLibraryIsImporting:]
+[MFLibrary importMessagesFromEnabledAccounts]
___46+[MFLibrary importMessagesFromEnabledAccounts]_block_invoke
___46+[MFLibrary importMessagesFromEnabledAccounts]_block_invoke_2
___copy_helper_block_2340
___destroy_helper_block_2341
___46+[MFLibrary importMessagesFromEnabledAccounts]_block_invoke2343
___copy_helper_block_2348
___destroy_helper_block_2349
+[MFLibrary _upgradeMessageDirectoriesSynchronously]
+[MFLibrary upgradeMessageDirectoriesIfNeeded]
+[MFLibrary takeAccountsOnlineAllAccounts:]
+[MFLibrary fileExists]
_pathToDatabase
+[MFLibrary isEmptyDB]
_databaseIsEmpty
+[MFLibrary dispose]
_handleCorruptDatabase
+[MFLibrary _libraryStatusCanWrite:]
+[MFLibrary libraryStatusAsWriter]
+[MFLibrary libraryStatusAsReader]
+[MFLibrary isInitialized]
+[MFLibrary setInitialized]
+[MFLibrary threadIsExecutingInDatabaseBlock]
+[MFLibrary currentMailbox]
+[MFLibrary setCurrentMailbox:]
+[MFLibrary incrementRunningIndexOfCurrentMessage]
+[MFLibrary runningIndexOfCurrentMessage]
+[MFLibrary totalNumberOfMessages]
+[MFLibrary setTotalNumberOfMessages:]
+[MFLibrary cleanOldDatabases]
+[MFLibrary prepareToReImportMessages]
+[MFLibrary calendarEventForMessageID:]
___39+[MFLibrary calendarEventForMessageID:]_block_invoke
___copy_helper_block_2415
___destroy_helper_block_2416
+[MFLibrary addCalendarEvent:toMessage:]
___40+[MFLibrary addCalendarEvent:toMessage:]_block_invoke
___copy_helper_block_2426
___destroy_helper_block_2427
+[MFLibrary updateCalendarEvent:forMessage:]
___44+[MFLibrary updateCalendarEvent:forMessage:]_block_invoke
___copy_helper_block_2437
___destroy_helper_block_2438
+[MFLibrary deleteEventForMessage:]
___35+[MFLibrary deleteEventForMessage:]_block_invoke
___copy_helper_block_2444
___destroy_helper_block_2445
+[MFLibrary mailboxIDForMailbox:loadIfNotPresent:]
___50+[MFLibrary mailboxIDForMailbox:loadIfNotPresent:]_block_invoke
___copy_helper_block_2453
___destroy_helper_block_2454
+[MFLibrary mailboxForMailboxID:forceCreation:]
+[MFLibrary _mailboxForMailboxID:forceCreation:]
+[MFLibrary mailboxIDForMailbox:]
+[MFLibrary cachedMailboxIDForMailbox:]
+[MFLibrary sqlListWithArray:]
___30+[MFLibrary sqlListWithArray:]_block_invoke
___copy_helper_block_2465
___destroy_helper_block_2466
+[MFLibrary executeBlock:isWriter:useTransaction:isPrivileged:]
+[MFLibrary executeWriteBlockInDatabase:]
+[MFLibrary executeReadBlockInDatabase:]
+[MFLibrary _checkOutDBHandleForWriting:isPrivileged:]
+[MFLibrary _checkInDBHandle:forWriting:]
+[MFLibrary flushCachedDatabases]
+[MFLibrary lastWriteMinorVersion]
___34+[MFLibrary lastWriteMinorVersion]_block_invoke
___copy_helper_block_2553
___destroy_helper_block_2554
+[MFLibrary tagDatabaseVersionIfNeeded:]
+[MFLibrary newUnsignedForQuery:db:]
+[MFLibrary didCommit:]
+[MFLibrary registerStoreForUpdates:]
+[MFLibrary _queueMessagesNotification:withUserInfo:]
___53+[MFLibrary _queueMessagesNotification:withUserInfo:]_block_invoke
___copy_helper_block_2583
___destroy_helper_block_2584
+[MFLibrary queueMessagesAddedNotification:]
___44+[MFLibrary queueMessagesAddedNotification:]_block_invoke
___copy_helper_block_2589
___destroy_helper_block_2590
+[MFLibrary queueMessagesUpdatedNotification:]
___46+[MFLibrary queueMessagesUpdatedNotification:]_block_invoke
___copy_helper_block_2595
___destroy_helper_block_2596
+[MFLibrary queueMessagesChangedNotificationForMessages:flags:oldFlagsByMessage:]
___81+[MFLibrary queueMessagesChangedNotificationForMessages:flags:oldFlagsByMessage:]_block_invoke
___copy_helper_block_2601
___destroy_helper_block_2602
+[MFLibrary queueMessageGmailLabelsChangedNotificationForMessages:]
+[MFLibrary queueMessagesCompactedNotification:]
___48+[MFLibrary queueMessagesCompactedNotification:]_block_invoke
___copy_helper_block_2609
___destroy_helper_block_2610
+[MFLibrary queueConversationsChangedNotification:]
+[MFLibrary queueStoreFinishedFirstTimeSync:]
___45+[MFLibrary queueStoreFinishedFirstTimeSync:]_block_invoke
___copy_helper_block_2613
___destroy_helper_block_2614
+[MFLibrary numberOfMessagesForAccount:]
___40+[MFLibrary numberOfMessagesForAccount:]_block_invoke
___copy_helper_block_2619
___destroy_helper_block_2620
-[_MFMessageLoadingContext description]
-[_MFMessageLoadingContext seenConversationIDs]
-[_MFMessageLoadingContext setSeenConversationIDs:]
-[_MFMessageLoadingContext messages]
-[_MFMessageLoadingContext setMessages:]
-[_MFMessageLoadingContext target]
-[_MFMessageLoadingContext setTarget:]
-[_MFMessageLoadingContext chunkSize]
-[_MFMessageLoadingContext setChunkSize:]
-[_MFMessageLoadingContext chunkInterval]
-[_MFMessageLoadingContext setChunkInterval:]
-[_MFMessageLoadingContext lastChunkSentTime]
-[_MFMessageLoadingContext setLastChunkSentTime:]
-[_MFMessageLoadingContext messagesLoaded]
-[_MFMessageLoadingContext setMessagesLoaded:]
-[_MFMessageLoadingContext options]
-[_MFMessageLoadingContext setOptions:]
-[_MFMessageLoadingContext database]
-[_MFMessageLoadingContext setDatabase:]
-[_MFMessageLoadingContext .cxx_destruct]
+[MFSqliteHandle newHandleIsWriter:]
-[MFSqliteHandle close]
-[MFSqliteHandle dealloc]
-[MFSqliteHandle newPreparedStatementWithPattern:]
-[MFSqliteHandle db]
-[MFSqliteHandle setDb:]
-[MFSqliteHandle busyTimer]
-[MFSqliteHandle setBusyTimer:]
-[MFSqliteHandle searchStringArray]
-[MFSqliteHandle setSearchStringArray:]
-[MFSqliteHandle needsUnreadCountUpdate]
-[MFSqliteHandle setNeedsUnreadCountUpdate:]
-[MFSqliteHandle .cxx_destruct]
-[_MFMessageCollector init]
-[_MFMessageCollector messages]
-[_MFMessageCollector newMessagesAvailable:conversationsMembersByConversationID:]
-[_MFMessageCollector newMessagesAvailable:conversationsMembersByConversationID:options:]
-[_MFMessageCollector newMessagesAvailable:conversationMembers:]
-[_MFMessageCollector shouldCancel]
-[_MFMessageCollector finishedSendingMessages]
-[_MFMessageCollector didCancel]
-[_MFMessageCollector setDidCancel:]
-[_MFMessageCollector .cxx_destruct]
-[_MFConversationsMessageCollector init]
-[_MFConversationsMessageCollector dealloc]
-[_MFConversationsMessageCollector query]
-[_MFConversationsMessageCollector setQuery:]
-[_MFConversationsMessageCollector messages]
-[_MFConversationsMessageCollector conversationsMembers]
-[_MFConversationsMessageCollector newMessagesAvailable:conversationsMembersByConversationID:options:]
___102-[_MFConversationsMessageCollector newMessagesAvailable:conversationsMembersByConversationID:options:]_block_invoke
___copy_helper_block_2970
___destroy_helper_block_2971
-[_MFConversationsMessageCollector shouldCancel]
-[_MFConversationsMessageCollector finishedSendingMessages]
-[_MFConversationsMessageCollector .cxx_destruct]
-[_MFDataCollector initWithMessage:isPartial:part:]
-[_MFDataCollector dealloc]
-[_MFDataCollector setData:]
-[_MFDataCollector path]
-[_MFDataCollector tempPath]
-[_MFDataCollector setTempPath:]
-[_MFDataCollector message]
-[_MFDataCollector part]
-[_MFDataCollector fileHandle]
-[_MFDataCollector setFileHandle:]
-[_MFDataCollector length]
-[_MFDataCollector setLength:]
-[_MFDataCollector isEmpty]
-[_MFDataCollector setIsEmpty:]
-[_MFDataCollector plistData]
-[_MFDataCollector setPlistData:]
-[_MFDataCollector .cxx_destruct]
-[_MFProgressHandlerMonitorContext shouldCancel]
-[_MFProgressHandlerMonitorContext progressMonitor]
-[_MFProgressHandlerMonitorContext setProgressMonitor:]
-[_MFProgressHandlerMonitorContext activityMonitor]
-[_MFProgressHandlerMonitorContext setActivityMonitor:]
-[_MFProgressHandlerMonitorContext .cxx_destruct]
+[NSString(MFLibraryID) stringWithLibraryID:]
-[NSString(MFLibraryID) initWithLibraryID:]
_busyHandler
_backgroundAnalyzeSqliteIOError
_integrityResult
___spotlightNotificationCallback_block_invoke
___copy_helper_block_3241
___destroy_helper_block_3242
___spotlightNotificationCallback_block_invoke3246
___messagesAddedForUpdateNotification_block_invoke
_printAttributesForItem
___copy_helper_block_3282
___destroy_helper_block_3283
___criterionMinusSpotlightCriterion_block_invoke
___copy_helper_block_3303
___destroy_helper_block_3304
_copyScopeDirectoriesForCriterion
___firstSpotlightCriterion_block_invoke
___copy_helper_block_3312
___destroy_helper_block_3313
_unlinkIfExistsInDirectory
___unlinkIfExistsInDirectory_block_invoke
___myAddressRowidsSubselect_block_invoke
___copy_helper_block_3349
___destroy_helper_block_3350
_dbLookupAddressAndCommentRowID
-[MFLibraryCalendarEvent originalReceivedAccountURLString]
-[MFLibraryCalendarEvent setOriginalReceivedAccountURLString:]
-[MFLibraryCalendarEvent associatedCalendarItemIdString]
-[MFLibraryCalendarEvent setAssociatedCalendarItemIdString:]
-[MFLibraryCalendarEvent location]
-[MFLibraryCalendarEvent setLocation:]
-[MFLibraryCalendarEvent uid]
-[MFLibraryCalendarEvent setUid:]
-[MFLibraryCalendarEvent startDate]
-[MFLibraryCalendarEvent setStartDate:]
-[MFLibraryCalendarEvent endDate]
-[MFLibraryCalendarEvent setEndDate:]
-[MFLibraryCalendarEvent isAllDayEvent]
-[MFLibraryCalendarEvent setIsAllDayEvent:]
-[MFLibraryCalendarEvent isOutOfDate]
-[MFLibraryCalendarEvent setIsOutOfDate:]
-[MFLibraryCalendarEvent hasBeenProcessed]
-[MFLibraryCalendarEvent setHasBeenProcessed:]
-[MFLibraryCalendarEvent isResponseRequested]
-[MFLibraryCalendarEvent setIsResponseRequested:]
-[MFLibraryCalendarEvent responseStatus]
-[MFLibraryCalendarEvent setResponseStatus:]
-[MFLibraryCalendarEvent .cxx_destruct]
-[MFLibraryIMAPMessage headers]
-[MFLibraryIMAPMessage setHeaders:]
-[MFLibraryIMAPMessage dataSource]
-[MFLibraryIMAPMessage setDataSource:]
-[MFLibraryIMAPMessage account]
-[MFLibraryIMAPMessage .cxx_destruct]
-[MFLibraryIMAPStore initWithCriterion:mailbox:readOnly:]
-[MFLibraryIMAPStore dealloc]
-[MFLibraryIMAPStore _IMAPMailbox]
-[MFLibraryIMAPStore _copyMailboxSyncEngineCreateIfNecessary:setupGatewayIfNecessary:]
-[MFLibraryIMAPStore _isRebuildingOrSynchronizing]
-[MFLibraryIMAPStore _isSynchronized]
-[MFLibraryIMAPStore _permanentFlags]
-[MFLibraryIMAPStore isReadOnly]
-[MFLibraryIMAPStore messagesForImporter]
-[MFLibraryIMAPStore openAsynchronously]
-[MFLibraryIMAPStore _openSynchronouslyUpdatingMetadata:withOptions:]
-[MFLibraryIMAPStore openSynchronouslyUpdatingMetadata:]
-[MFLibraryIMAPStore openSynchronouslyWithoutUserInteraction]
-[MFLibraryIMAPStore willDeallocPerformingInStoreCacheLock:]
-[MFLibraryIMAPStore setStoreState:fromState:]
-[MFLibraryIMAPStore _invalidate]
-[MFLibraryIMAPStore invalidateSyncEngine]
-[MFLibraryIMAPStore _shouldCallCompactWhenClosing]
-[MFLibraryIMAPStore isInbox]
-[MFLibraryIMAPStore isAllMailMailbox]
-[MFLibraryIMAPStore _fetchForCheckingNewMail:]
-[MFLibraryIMAPStore checkNewMail]
-[MFLibraryIMAPStore fetchSynchronously]
-[MFLibraryIMAPStore fetchSynchronouslyForKnownChanges]
-[MFLibraryIMAPStore cleanupSynchronously]
-[MFLibraryIMAPStore doRoutineCleanup]
___38-[MFLibraryIMAPStore doRoutineCleanup]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFLibraryIMAPStore syncEngineDidStart]
-[MFLibraryIMAPStore syncEngineDidFinish]
-[MFLibraryIMAPStore _handleStoreFinishedFirstTimeSync:]
-[MFLibraryIMAPStore canRebuild]
-[MFLibraryIMAPStore removeAllLocalMessages]
-[MFLibraryIMAPStore mailboxName]
-[MFLibraryIMAPStore mailbox]
-[MFLibraryIMAPStore canCompact]
-[MFLibraryIMAPStore doCompact]
-[MFLibraryIMAPStore _processPendingCompacts]
-[MFLibraryIMAPStore compactMessages:]
-[MFLibraryIMAPStore compactMessagesFromSyncEngine:]
-[MFLibraryIMAPStore deleteMessagesOlderThanNumberOfDays:compact:]
-[MFLibraryIMAPStore deleteLastMessageWithHeaders:compactWhenDone:]
-[MFLibraryIMAPStore undeleteMessagesWithRemoteIDs:]
-[MFLibraryIMAPStore messagesBeingAdded]
-[MFLibraryIMAPStore allowsAppend]
-[MFLibraryIMAPStore allowsOverwrite]
-[MFLibraryIMAPStore _copyFlagsFromMessages:flagsByMessage:toMessagesWithUids:withGateway:usedFlags:]
___101-[MFLibraryIMAPStore _copyFlagsFromMessages:flagsByMessage:toMessagesWithUids:withGateway:usedFlags:]_block_invoke
___copy_helper_block_358
___destroy_helper_block_359
-[MFLibraryIMAPStore _copyMessagesByID:toStore:settingFlags:newMessages:error:]
___79-[MFLibraryIMAPStore _copyMessagesByID:toStore:settingFlags:newMessages:error:]_block_invoke
___copy_helper_block_413
___destroy_helper_block_414
-[MFLibraryIMAPStore _appendToServerWithContext:error:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___55-[MFLibraryIMAPStore _appendToServerWithContext:error:]_block_invoke
___copy_helper_block_496
___destroy_helper_block_497
___55-[MFLibraryIMAPStore _appendToServerWithContext:error:]_block_invoke502
___copy_helper_block_503
___destroy_helper_block_504
-[MFLibraryIMAPStore _uidSearchForMessageIds:destinationUidNext:withGateway:]
-[MFLibraryIMAPStore undoAppendOfMessageIDs:]
-[MFLibraryIMAPStore newDictionaryForLocalFlags:serverFlags:existingDictionary:]
-[MFLibraryIMAPStore addMessages:]
-[MFLibraryIMAPStore messagesAreBeingAdded]
-[MFLibraryIMAPStore deleteMessages:moveToTrash:]
-[MFLibraryIMAPStore _synchronouslyStoreFlagsFromDictionary:forMessages:]
___73-[MFLibraryIMAPStore _synchronouslyStoreFlagsFromDictionary:forMessages:]_block_invoke
___copy_helper_block_552
___destroy_helper_block_553
-[MFLibraryIMAPStore _setFlagsFromDictionary:forMessages:]
-[MFLibraryIMAPStore recentFlagChangesForRowID:]
-[MFLibraryIMAPStore async_setGmailLabelsFromDictionary:forMessages:]
-[MFLibraryIMAPStore async_setGmailLabelsFromDictionary:forMessages:updatingServer:]
___84-[MFLibraryIMAPStore async_setGmailLabelsFromDictionary:forMessages:updatingServer:]_block_invoke
___copy_helper_block_576
___destroy_helper_block_577
___Block_byref_object_copy_581
___Block_byref_object_dispose_582
___84-[MFLibraryIMAPStore async_setGmailLabelsFromDictionary:forMessages:updatingServer:]_block_invoke583
___copy_helper_block_593
___destroy_helper_block_594
-[MFLibraryIMAPStore _synchronouslyStoreLabelsFromDictionary:forMessages:]
-[MFLibraryIMAPStore async_setFlagsFromDictionary:forMessages:]
-[MFLibraryIMAPStore async_setFlagsFromDictionary:forMessages:updatingServer:]
___78-[MFLibraryIMAPStore async_setFlagsFromDictionary:forMessages:updatingServer:]_block_invoke
___copy_helper_block_628
___destroy_helper_block_629
___78-[MFLibraryIMAPStore async_setFlagsFromDictionary:forMessages:updatingServer:]_block_invoke631
___copy_helper_block_634
___destroy_helper_block_635
-[MFLibraryIMAPStore _internalSetFlagsFromDictionary:forMessages:]
-[MFLibraryIMAPStore syncEngineDidSynchronizeMessageList]
-[MFLibraryIMAPStore persistentIDType]
-[MFLibraryIMAPStore messageWithDefaultLoadOptionsAndRowID:]
-[MFLibraryIMAPStore messageWithLibraryID:options:]
-[MFLibraryIMAPStore messagesWithRowIDs:]
-[MFLibraryIMAPStore _dataForMessage:readHeadersOnly:]
+[MFLibraryIMAPStore _newDataFromMimePart:threshold:]
-[MFLibraryIMAPStore _fetchDataForMimePart:keepInMemory:writeToDisk:]
-[MFLibraryIMAPStore dataForMimePart:]
-[MFLibraryIMAPStore _hasCachedDataForMimePart:message:]
-[MFLibraryIMAPStore hasCachedDataForMimePart:]
-[MFLibraryIMAPStore fullBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFLibraryIMAPStore fetchAndCacheBodyDataForMessages:]
___55-[MFLibraryIMAPStore fetchAndCacheBodyDataForMessages:]_block_invoke
___copy_helper_block_887
___destroy_helper_block_888
-[MFLibraryIMAPStore _waitForDataFromDownload:uid:gateway:]
-[MFLibraryIMAPStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFLibraryIMAPStore _fetchHeaderDataForMessage:fetchIfNotAvailable:]
-[MFLibraryIMAPStore colorForMessage:]
-[MFLibraryIMAPStore messageForMessageID:]
-[MFLibraryIMAPStore maximumRemoteID]
-[MFLibraryIMAPStore getDetailsForMessagesWithRemoteIDs:]
-[MFLibraryIMAPStore totalCountOfMessages]
-[MFLibraryIMAPStore compactMailbox:]
-[MFLibraryIMAPStore messagesForMailbox:where:sortedBy:ascending:options:]
-[MFLibraryIMAPStore duplicateMessages:newRemoteIDs:newDocumentIDs:forMailbox:setFlags:clearFlags:messageFlagsForMessages:createNewCacheFiles:]
-[MFLibraryIMAPStore duplicateMessages:newRemoteIDs:newDocumentIDs:forMailbox:setFlags:clearFlags:createNewCacheFiles:]
-[MFLibraryIMAPStore messageWithRemoteID:inRemoteMailbox:]
-[MFLibraryIMAPStore setBackgroundColorForMessages:textColorForMessages:]
-[MFLibraryIMAPStore canSetMessageColors]
-[MFLibraryIMAPStore copyMessagesWithTemporaryUids]
-[MFLibraryIMAPStore copyIncompleteMessages]
-[MFLibraryIMAPStore copyOfAllMessagesWithOptions:]
-[MFLibraryIMAPStore _gatewayCreateIfNeeded:options:]
-[MFLibraryIMAPStore startSynchronization]
-[MFLibraryIMAPStore _uidIndexSetForMessages:]
-[MFLibraryIMAPStore uidValidityStatus]
-[MFLibraryIMAPStore setUidValidityStatus:]
-[MFLibraryIMAPStore uidNextStatus]
-[MFLibraryIMAPStore setUidNextStatus:]
-[MFLibraryIMAPStore allegedHighestModificationSequence]
-[MFLibraryIMAPStore setAllegedHighestModificationSequence:]
-[MFLibraryIMAPStore setComputedHighestModificationSequence:]
-[MFLibraryIMAPStore _retrieveNewMessagesForCheckingNewMail:]
-[MFLibraryIMAPStore forceResync]
-[MFLibraryIMAPStore _preferredOrderForFetchingMessageBodies:]
-[MFLibraryIMAPStore hasValidCacheFileForMessage:]
-[MFLibraryIMAPStore hasValidCacheFileForUid:]
-[MFLibraryIMAPStore copyOfOldCachedMessagesContentsForUid:]
-[MFLibraryIMAPStore setUid:forMessageWithTemporaryUid:]
-[MFLibraryIMAPStore _copyOfAllMessagesSortedByUidWithOptions:]
-[MFLibraryIMAPStore _deletedMessages]
-[MFLibraryIMAPStore writeUpdatedMessageDataToDisk]
-[MFLibraryIMAPStore sortOrder]
-[MFLibraryIMAPStore isSortedAscending]
-[MFLibraryIMAPStore messagesWereAdded:conversationsMembers:duringOpen:options:]
-[MFLibraryIMAPStore _setBackgroundColorForMessages:textColorForMessages:]
-[MFLibraryIMAPStore fetchPipeline]
-[MFLibraryIMAPStore downloadCache]
-[MFLibraryIMAPStore messagesBeingRouted]
-[MFLibraryIMAPStore account]
-[MFLibraryIMAPStore _offlineCache]
-[MFLibraryIMAPStore offlineCacheIfOffline]
-[MFLibraryIMAPStore updateCountFromMailbox:fromIDLE:]
-[MFLibraryIMAPStore processResponsesFromMailbox:]
-[MFLibraryIMAPStore updateUidValidityFromMailbox:]
-[MFLibraryIMAPStore allegedHighestModificationSequenceForMailbox:]
-[MFLibraryIMAPStore computedHighestModificationSequenceForMailbox:]
-[MFLibraryIMAPStore updateComputedHighestModificationSequence:forMailbox:]
-[MFLibraryIMAPStore _updateCountFromMailbox:fromIDLE:]
-[MFLibraryIMAPStore _processResponsesFromMailbox:]
-[MFLibraryIMAPStore _updateUidValidityFromMailbox:]
-[MFLibraryIMAPStore updateSelectedGatewayFromMailbox:]
-[MFLibraryIMAPStore boostExistingFetchTo:]
-[MFLibraryIMAPStore isOpenedByUser]
-[MFLibraryIMAPStore setIsOpenedByUser:]
-[MFLibraryIMAPStore totalCount]
-[MFLibraryIMAPStore setTotalCount:]
-[MFLibraryIMAPStore supportsCustomPermanentFlags]
-[MFLibraryIMAPStore setSupportsCustomPermanentFlags:]
-[MFLibraryIMAPStore .cxx_destruct]
-[NSObject(_mf_LibraryMessageEquality) libraryID]
+[MFLibraryMessage initialize]
+[MFLibraryMessage residentMessages]
+[MFLibraryMessage _addMessageToResidentMessages:overridingPreviousMessage:]
+[MFLibraryMessage _removeMessageFromResidentMessagesWithLibraryID:]
+[MFLibraryMessage _residentMessageForLibraryID:]
-[MFLibraryMessage initWithLibraryID:]
-[MFLibraryMessage init]
-[MFLibraryMessage dealloc]
+[MFLibraryMessage messagesWithURL:]
+[MFLibraryMessage messageWithURL:]
+[MFLibraryMessage messageWithLibraryID:]
-[MFLibraryMessage messageID]
+[MFLibraryMessage messageWithPersistentID:]
+[MFLibraryMessage fetchedMessageWithRowID:]
-[MFLibraryMessage persistentIDType]
-[MFLibraryMessage persistentID]
-[MFLibraryMessage libraryID]
-[MFLibraryMessage documentID]
-[MFLibraryMessage originalMailboxURLString]
-[MFLibraryMessage type]
-[MFLibraryMessage references]
-[MFLibraryMessage setReferences:]
-[MFLibraryMessage calendarEvent]
-[MFLibraryMessage setCalendarEvent:]
-[MFLibraryMessage subject]
-[MFLibraryMessage sender]
-[MFLibraryMessage supportsSnippets]
-[MFLibraryMessage to]
-[MFLibraryMessage messageIDHeaderDigest]
-[MFLibraryMessage inReplyToHeaderDigest]
-[MFLibraryMessage messageSize]
-[MFLibraryMessage setMessageSize:]
-[MFLibraryMessage _unlockedMessageStore]
-[MFLibraryMessage dataSource]
-[MFLibraryMessage setDataSource:]
-[MFLibraryMessage primitiveDataSource]
-[MFLibraryMessage mailbox]
-[MFLibraryMessage _updateUID]
-[MFLibraryMessage _setRemoteID:]
-[MFLibraryMessage setRemoteID:]
-[MFLibraryMessage remoteID]
-[MFLibraryMessage isEqual:]
-[MFLibraryMessage hash]
-[MFLibraryMessage setIMAPFlags:]
-[MFLibraryMessage remoteFlags]
-[MFLibraryMessage uid]
-[MFLibraryMessage setUid:]
-[MFLibraryMessage options]
-[MFLibraryMessage setOptions:]
-[MFLibraryMessage loadOptionsSuffice:]
-[MFLibraryMessage isPartial]
-[MFLibraryMessage setIsPartial:]
-[MFLibraryMessage isMessageContentLocallyAvailable]
-[MFLibraryMessage isPartialMessageBodyAvailable]
-[MFLibraryMessage partsHaveBeenCached]
-[MFLibraryMessage setPartsHaveBeenCached:]
-[MFLibraryMessage hasTemporaryUid]
-[MFLibraryMessage setHasTemporaryUid:]
-[MFLibraryMessage mailboxName]
-[MFLibraryMessage setMessageFlags:mask:]
-[MFLibraryMessage setFlags:]
-[MFLibraryMessage setColorHasBeenEvaluated:]
-[MFLibraryMessage setColor:]
-[MFLibraryMessage setLibraryColor:]
-[MFLibraryMessage setColor:hasBeenEvaluated:flags:mask:]
-[MFLibraryMessage commit]
-[MFLibraryMessage _commitLater]
-[MFLibraryMessage beginChanging]
-[MFLibraryMessage endChanging:immediately:]
-[MFLibraryMessage reload]
-[MFLibraryMessage description]
___31-[MFLibraryMessage description]_block_invoke
-[MFLibraryMessage extendedDescription]
-[MFLibraryMessage _extendedDescriptionWithSubject:]
-[MFLibraryMessage path]
-[MFLibraryMessage account]
-[MFLibraryMessage preferredEmailAddressToReplyWith]
-[MFLibraryMessage setRemoteID:documentID:flags:size:mailboxID:originalMailboxID:color:conversationID:conversationPosition:]
-[MFLibraryMessage messageDataIncludingFromSpace:newDocumentID:]
-[MFLibraryMessage _calculateAttachmentInfoFromBody:]
-[MFLibraryMessage setAttachmentFilenames:]
-[MFLibraryMessage setData:isPartial:]
-[MFLibraryMessage appendData:part:]
-[MFLibraryMessage cacheBodyAndHeader]
-[MFLibraryMessage uncacheBodyAndHeader]
-[MFLibraryMessage _cachedHeaders]
-[MFLibraryMessage _cacheHeadersIfPossible:]
-[MFLibraryMessage _cachedHeaderData]
-[MFLibraryMessage _cacheHeaderDataIfPossible:]
-[MFLibraryMessage _cachedMessageBody]
-[MFLibraryMessage _cacheMessageBodyIfPossible:]
-[MFLibraryMessage _cachedMessageBodyData]
-[MFLibraryMessage _cacheMessageBodyDataIfPossible:]
-[MFLibraryMessage spotlightAttributesIncludingText:]
-[MFLibraryMessage conversationID]
-[MFLibraryMessage setConversationID:]
-[MFLibraryMessage conversationPosition]
-[MFLibraryMessage setConversationPosition:]
-[MFLibraryMessage mailboxID]
-[MFLibraryMessage setMailboxID:]
-[MFLibraryMessage originalMailboxID]
-[MFLibraryMessage setOriginalMailboxID:]
-[MFLibraryMessage size]
-[MFLibraryMessage setSize:]
-[MFLibraryMessage isBeingChanged]
-[MFLibraryMessage setIsBeingChanged:]
-[MFLibraryMessage primitiveOptions]
-[MFLibraryMessage setPrimitiveOptions:]
-[MFLibraryMessage isCompacted]
-[MFLibraryMessage setIsCompacted:]
-[MFLibraryMessage .cxx_destruct]
+[MFLibraryQueries queryForUniquingDataForMessageNumber:]
+[MFLibraryQueries queryToFindCopiesOfMessage:sentOn:receivedOn:withSize:]
+[MFLibraryQueries checkOutStatementToInsertMessage:]
+[MFLibraryQueries checkOutStatementToCompletelyUpdateMessage:]
+[MFLibraryQueries fromClauseForTables:startingFromTableExpression:]
+[MFLibraryQueries checkOutStatementForMailboxURLFromMailboxID:usingDB:]
+[MFLibraryQueries checkOutStatementForEventWithMessageID:usingDB:]
+[MFLibraryQueries checkOutStatementToInsertEvent:]
+[MFLibraryQueries bindInsertEventStatement:withEvent:messageID:]
+[MFLibraryQueries checkOutStatementToUpdateEvent:]
+[MFLibraryQueries bindUpdateEventStatement:withEvent:messageID:]
+[MFLibraryQueries queryToDeleteEventByMessageID:]
-[MFLibraryStoreMessageConsumer initWithLibraryStore:useCallbackQueue:]
-[MFLibraryStoreMessageConsumer clearLibraryStoreWeakReference]
-[MFLibraryStoreMessageConsumer newMessagesAvailable:conversationsMembersByConversationID:options:]
-[MFLibraryStoreMessageConsumer libraryNotificationObject]
-[MFLibraryStoreMessageConsumer libraryNotificationMessages]
-[MFLibraryStoreMessageConsumer searchPhaseComplete]
-[MFLibraryStoreMessageConsumer finishedSendingMessages]
-[MFLibraryStoreMessageConsumer collectorID]
-[MFLibraryStoreMessageConsumer setCollectorID:]
-[MFLibraryStoreMessageConsumer shouldCancel]
-[MFLibraryStoreMessageConsumer setShouldCancel:]
-[MFLibraryStoreMessageConsumer libraryStore]
-[MFLibraryStoreMessageConsumer setLibraryStore:]
-[MFLibraryStoreMessageConsumer callbackQueue]
-[MFLibraryStoreMessageConsumer .cxx_destruct]
+[MFLibraryStore initialize]
+[MFLibraryStore defaultLoadOptions]
-[MFLibraryStore initWithCriterion:mailbox:readOnly:]
-[MFLibraryStore _criterionContainsGmailLabelCriterion:]
-[MFLibraryStore init]
-[MFLibraryStore initWithCriterion:]
-[MFLibraryStore initWithMailbox:readOnly:]
-[MFLibraryStore initWithMailbox:]
-[MFLibraryStore initWithMailbox:readOnly:createEmptyStore:]
-[MFLibraryStore initWithAccount:]
+[MFLibraryStore sharedInstance]
-[MFLibraryStore reset]
___23-[MFLibraryStore reset]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFLibraryStore mailboxID]
-[MFLibraryStore _updateCriterionFromMailbox:]
-[MFLibraryStore newMessagesAvailable:conversationsMembers:fromLibraryStoreMessageConsumer:options:]
___100-[MFLibraryStore newMessagesAvailable:conversationsMembers:fromLibraryStoreMessageConsumer:options:]_block_invoke
___copy_helper_block_235
___destroy_helper_block_236
-[MFLibraryStore notificationMessagesFromOpen]
-[MFLibraryStore libraryFinishedSendingMessagesToLibraryStoreMessageConsumer:]
-[MFLibraryStore openAsynchronouslyWithOptions:]
-[MFLibraryStore _shouldUpdateColorsAndAttachmentsAfterOpening]
-[MFLibraryStore openSynchronouslyUpdatingMetadata:]
-[MFLibraryStore openSynchronouslyUpdatingMetadata:returnRetainedMessages:]
-[MFLibraryStore cleanupAsynchronously]
-[MFLibraryStore _openOptions]
-[MFLibraryStore totalCount]
-[MFLibraryStore copyOfAllMessages]
-[MFLibraryStore copyOfAllMessagesWithOptions:]
-[MFLibraryStore asynchronousCopyOfAllMessagesWithOptions:]
-[MFLibraryStore _asynchronousCopyOfAllMessagesWithOptions:]
-[MFLibraryStore mutableCopyOfAllMessages]
-[MFLibraryStore filterMessagesByMembership:]
-[MFLibraryStore supportsSnippets]
-[MFLibraryStore snippetsForMessages:]
-[MFLibraryStore saveSnippetsForMessages:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___42-[MFLibraryStore saveSnippetsForMessages:]_block_invoke
___copy_helper_block_338
___destroy_helper_block_339
-[MFLibraryStore async_setFlagsFromDictionary:forMessages:]
___Block_byref_object_copy_357
___Block_byref_object_dispose_358
___59-[MFLibraryStore async_setFlagsFromDictionary:forMessages:]_block_invoke
___copy_helper_block_374
___destroy_helper_block_375
___59-[MFLibraryStore async_setFlagsFromDictionary:forMessages:]_block_invoke379
___copy_helper_block_382
___destroy_helper_block_383
-[MFLibraryStore async_setGmailLabelsFromDictionary:forMessages:]
___65-[MFLibraryStore async_setGmailLabelsFromDictionary:forMessages:]_block_invoke
___copy_helper_block_408
___destroy_helper_block_409
-[MFLibraryStore async_setLocalFlagsForMessages:]
___49-[MFLibraryStore async_setLocalFlagsForMessages:]_block_invoke
___copy_helper_block_413
___destroy_helper_block_414
___49-[MFLibraryStore async_setLocalFlagsForMessages:]_block_invoke416
___copy_helper_block_417
___destroy_helper_block_418
-[MFLibraryStore setFlagsAndColorForMessages:]
-[MFLibraryStore _setFlagsAndColorForMessages:]
-[MFLibraryStore _messagesAddedToLibrary:]
-[MFLibraryStore messagesWereAdded:conversationsMembers:duringOpen:options:]
-[MFLibraryStore _messageFlagsChanged:]
-[MFLibraryStore _messagesCompacted:]
-[MFLibraryStore _messagesUpdated:]
+[MFLibraryStore filterMessages:throughSmartMailbox:]
-[MFLibraryStore _invalidate]
-[MFLibraryStore dealloc]
-[MFLibraryStore cleanupSynchronously]
-[MFLibraryStore cancelOpen]
-[MFLibraryStore cancelQuery]
-[MFLibraryStore _cancelQueryAndClearConsumer:]
-[MFLibraryStore messageForMessageID:]
-[MFLibraryStore hasCachedDataForMimePart:]
-[MFLibraryStore _fetchHeaderDataForMessage:fetchIfNotAvailable:]
-[MFLibraryStore _fetchHeaderDataForMessage:fetchIfNotAvailable:allowPartial:]
-[MFLibraryStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFLibraryStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:allowPartial:]
-[MFLibraryStore fullBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFLibraryStore deleteMessages:moveToTrash:]
-[MFLibraryStore deleteMessagesOlderThanNumberOfDays:compact:]
-[MFLibraryStore allowsAppend]
-[MFLibraryStore allowsOverwrite]
-[MFLibraryStore appendMessages:unsuccessfulOnes:newMessageIDs:newMessages:newDocumentIDsByOld:flagsToSet:forMove:error:]
-[MFLibraryStore undoAppendOfMessageIDs:]
-[MFLibraryStore canCompact]
-[MFLibraryStore _shouldCallCompactWhenClosing]
-[MFLibraryStore doCompact]
-[MFLibraryStore duplicateCopiesOfMessages:]
-[MFLibraryStore duplicateCopiesOfMessages:withDocumentIDs:excludingMessageIDs:]
-[MFLibraryStore lastMessageWithHeaders:inMailbox:]
-[MFLibraryStore deleteLastMessageWithHeaders:compactWhenDone:]
-[MFLibraryStore recentMessageWithValue:forHeader:]
-[MFLibraryStore messagesForDocumentID:]
-[MFLibraryStore dataForMimePart:]
-[MFLibraryStore writeUpdatedMessageDataToDisk]
-[MFLibraryStore updateMetadata]
-[MFLibraryStore _setNeedsAutosave]
-[MFLibraryStore _cancelAutosave]
+[MFLibraryStore createEmptyStoreForPath:]
+[MFLibraryStore storeAtPathIsWritable:]
-[MFLibraryStore _flushAllMessageData]
-[MFLibraryStore rebuildTableOfContentsAsynchronously]
-[MFLibraryStore _rebuildTableOfContentsSynchronously]
-[MFLibraryStore _numberOfMessagesToCache]
-[MFLibraryStore _invalidateObjectCachesForKey:]
-[MFLibraryStore _setOrGetValue:forKey:inCache:]
-[MFLibraryStore _updateFlagForMessage:key:value:]
-[MFLibraryStore attachmentsDirectoryForMessage:]
-[MFLibraryStore messageHasBeenDeleted:]
-[MFLibraryStore cacheDirectoryContents]
-[MFLibraryStore hasCacheFileForMessage:part:directoryContents:]
-[MFLibraryStore hasCacheFileForMessage:directoryContents:]
-[MFLibraryStore url]
-[MFLibraryStore setUrl:]
-[MFLibraryStore criterion]
-[MFLibraryStore setCriterion:]
-[MFLibraryStore startedWatcher]
-[MFLibraryStore setStartedWatcher:]
-[MFLibraryStore filesystemWatcherCookie]
-[MFLibraryStore setFilesystemWatcherCookie:]
-[MFLibraryStore .cxx_destruct]
+[MFLibraryThread allocWithZone:]
+[MFLibraryThread sharedInstance]
___33+[MFLibraryThread sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFLibraryThread dealloc]
-[MFLibraryThread _runThread]
-[MFLibraryThread addMessages:toStore:]
-[MFLibraryThread messagesBeingAddedToStore:]
-[MFLibraryThread isAddingMessagesToStore:]
-[MFLibraryThread .cxx_destruct]
-[_MFLibraryThreadRequest initWithStore:andMessages:]
-[_MFLibraryThreadRequest init]
-[_MFLibraryThreadRequest messages]
-[_MFLibraryThreadRequest setMessages:]
-[_MFLibraryThreadRequest store]
-[_MFLibraryThreadRequest isFollowOnToProgressTask]
-[_MFLibraryThreadRequest setIsFollowOnToProgressTask:]
-[_MFLibraryThreadRequest .cxx_destruct]
+[MFLibraryUpgrader initialize]
-[MFLibraryUpgrader init]
-[MFLibraryUpgrader dealloc]
-[MFLibraryUpgrader libraryStatus]
___34-[MFLibraryUpgrader libraryStatus]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFLibraryUpgrader _shouldDisplayDisturbingAndVagueWarningAboutMigrationToUser]
-[MFLibraryUpgrader resetEvaluationOfAccountsForMigration]
-[MFLibraryUpgrader unresolvedAccountPaths]
-[MFLibraryUpgrader _allAccountsAreOnSameFSAsLibraryMail]
-[MFLibraryUpgrader _evaluateAccountsForMigration]
-[MFLibraryUpgrader shouldMigrateToV2]
-[MFLibraryUpgrader isComplexMigrationToV2]
-[MFLibraryUpgrader validateMigrationPath:]
-[MFLibraryUpgrader _removeToDos:]
-[MFLibraryUpgrader run]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___24-[MFLibraryUpgrader run]_block_invoke
___copy_helper_block_266
___destroy_helper_block_267
___24-[MFLibraryUpgrader run]_block_invoke273
___copy_helper_block_281
___destroy_helper_block_282
___24-[MFLibraryUpgrader run]_block_invoke284
___copy_helper_block_289
___destroy_helper_block_290
___24-[MFLibraryUpgrader run]_block_invoke304
___copy_helper_block_307
___destroy_helper_block_308
___24-[MFLibraryUpgrader run]_block_invoke317
___copy_helper_block_329
___destroy_helper_block_330
-[MFLibraryUpgrader _firstLoginDidTimeout]
-[MFLibraryUpgrader _dropTriggers]
-[MFLibraryUpgrader _upgradeSchemaFromBackBooting]
-[MFLibraryUpgrader _upgradeSchema]
-[MFLibraryUpgrader _createNewDatabaseObjects]
-[MFLibraryUpgrader _vacuum]
-[MFLibraryUpgrader _useWALJournalingIfPossible]
-[MFLibraryUpgrader _upgradeFromTigerToLeopard]
-[MFLibraryUpgrader _populateRecipientPosition]
___47-[MFLibraryUpgrader _populateRecipientPosition]_block_invoke
-[MFLibraryUpgrader _updateCoalescedAddressReferences]
___54-[MFLibraryUpgrader _updateCoalescedAddressReferences]_block_invoke
___54-[MFLibraryUpgrader _updateCoalescedAddressReferences]_block_invoke_2
___54-[MFLibraryUpgrader _updateCoalescedAddressReferences]_block_invoke_3
-[MFLibraryUpgrader _upgradeFromLeopardToSnowLeopard]
-[MFLibraryUpgrader _upgradeFromSnowLeopardToSUSnowFelt]
-[MFLibraryUpgrader _upgradeFromSUSnowFeltToLion]
-[MFLibraryUpgrader _migrateTasksToLocalCalendar]
-[MFLibraryUpgrader _updateSmartMailboxUnreadMessages]
-[MFLibraryUpgrader _updateSmartMailboxUnreadMessagesForMailboxes:]
-[MFLibraryUpgrader _upgradeFromLionToMountainLion]
-[MFLibraryUpgrader _changeRulesLayout]
___39-[MFLibraryUpgrader _changeRulesLayout]_block_invoke
___copy_helper_block_772
___destroy_helper_block_773
-[MFLibraryUpgrader _changeSmartMailboxesLayout]
-[MFLibraryUpgrader _changeSignaturesLayout]
-[MFLibraryUpgrader _changeSignatureBundleLayout]
-[MFLibraryUpgrader _addFileExtensionToSignatures]
-[MFLibraryUpgrader _combineVIPSendersPlists]
___45-[MFLibraryUpgrader _combineVIPSendersPlists]_block_invoke
___copy_helper_block_896
___destroy_helper_block_897
-[MFLibraryUpgrader _removeMessageTypeFromRules]
___48-[MFLibraryUpgrader _removeMessageTypeFromRules]_block_invoke
___48-[MFLibraryUpgrader _removeMessageTypeFromRules]_block_invoke_2
___48-[MFLibraryUpgrader _removeMessageTypeFromRules]_block_invoke_3
___copy_helper_block_921
___destroy_helper_block_922
___copy_helper_block_924
___destroy_helper_block_925
-[MFLibraryUpgrader _removeMessageTypeFromSmartMailboxes]
___57-[MFLibraryUpgrader _removeMessageTypeFromSmartMailboxes]_block_invoke
___57-[MFLibraryUpgrader _removeMessageTypeFromSmartMailboxes]_block_invoke_2
___copy_helper_block_935
___destroy_helper_block_936
___copy_helper_block_938
___destroy_helper_block_939
-[MFLibraryUpgrader _removeMessageTypeFromSmartMailbox:localProperties:]
___72-[MFLibraryUpgrader _removeMessageTypeFromSmartMailbox:localProperties:]_block_invoke
___copy_helper_block_943
___destroy_helper_block_944
___72-[MFLibraryUpgrader _removeMessageTypeFromSmartMailbox:localProperties:]_block_invoke952
___copy_helper_block_953
___destroy_helper_block_954
-[MFLibraryUpgrader _moveSyncedFilesToLocal]
-[MFLibraryUpgrader _removeSyncedFilesMetadata]
-[MFLibraryUpgrader _cleanUpSyncedData]
___39-[MFLibraryUpgrader _cleanUpSyncedData]_block_invoke
___copy_helper_block_966
___destroy_helper_block_967
___39-[MFLibraryUpgrader _cleanUpSyncedData]_block_invoke973
___copy_helper_block_974
___destroy_helper_block_975
-[MFLibraryUpgrader _removeDuplicateRSSAccounts]
___48-[MFLibraryUpgrader _removeDuplicateRSSAccounts]_block_invoke
___copy_helper_block_990
___destroy_helper_block_991
-[MFLibraryUpgrader upgradeMailDownloadsFiles]
-[MFLibraryUpgrader _startMigratorServiceForMailDownloads]
-[MFLibraryUpgrader upgradeAppleScriptFilesAndRules]
-[MFLibraryUpgrader _startMigratorServiceForAppleScriptFilesAndRules]
-[MFLibraryUpgrader fixMailDownloadsMigrationKey]
-[MFLibraryUpgrader _fixEWSFoldersTable]
-[MFLibraryUpgrader makeAppleScriptReferencesInRulesUseOnlyLastPathComponent]
-[MFLibraryUpgrader _upgradeFromMountainLionToSUMountainCalypso]
-[MFLibraryUpgrader _upgradeFromSUMountainCalypsoToMavericks]
-[MFLibraryUpgrader _accountIsGmailAccount:]
-[MFLibraryUpgrader _mailboxURLStringsForAccount:]
___50-[MFLibraryUpgrader _mailboxURLStringsForAccount:]_block_invoke
___copy_helper_block_1115
___destroy_helper_block_1116
-[MFLibraryUpgrader _fixShadowEMLXFiles]
-[MFLibraryUpgrader _fixShadowEMLXFilesForAccount:]
___51-[MFLibraryUpgrader _fixShadowEMLXFilesForAccount:]_block_invoke
-[MFLibraryUpgrader _fixLocalMailboxes:]
___40-[MFLibraryUpgrader _fixLocalMailboxes:]_block_invoke
-[MFLibraryUpgrader _resetChangeIdentifierForGmailAccounts]
-[MFLibraryUpgrader _removeMailboxesWithAbsoluteURLs]
-[MFLibraryUpgrader _updateSpotlightAttributes]
___47-[MFLibraryUpgrader _updateSpotlightAttributes]_block_invoke
___copy_helper_block_1174
___destroy_helper_block_1175
-[MFLibraryUpgrader _setSpotlightAttributesForEMLXFilesInMailbox:mailboxURLString:]
___83-[MFLibraryUpgrader _setSpotlightAttributesForEMLXFilesInMailbox:mailboxURLString:]_block_invoke
-[MFLibraryUpgrader _getRecipientsForMessageWithLibraryID:recipientNames:recipientAddresses:dbHandle:]
-[MFLibraryUpgrader _urlStringForMailboxDirectory:account:levelFromAccountDirectory:]
-[MFLibraryUpgrader _copySpotlightAttributesWithDateSent:dateReceived:dateLastViewed:read:libraryFlags:messageID:subject:displayName:senderName:senderAddress:recipientNames:recipientAddresses:]
-[MFLibraryUpgrader _updateMailboxURLUnicodeComposition]
-[MFLibraryUpgrader updateFavoritePersistentIdentifierUnicodeComposition]
-[MFLibraryUpgrader _calculateInternationalSubjectPrefixes]
-[MFLibraryUpgrader _resetSnippetColumn]
-[MFLibraryUpgrader _resetConversationsForExistingMessages]
-[MFLibraryUpgrader _normalizeMailboxPathComponentsInMboxCache]
-[MFLibraryUpgrader _fakeLibraryUpgraderStep]
-[MFLibraryUpgrader _resetPasswords]
-[MFLibraryUpgrader _resetConfigureDynamically]
-[MFLibraryUpgrader setProgressItemTotal:]
-[MFLibraryUpgrader incrementProgressIndicator]
-[MFLibraryUpgrader incrementProgressIndicatorWithThreshold:]
-[MFLibraryUpgrader resetProgressItemsWithTotal:andStatusMessage:]
-[MFLibraryUpgrader _setHandle:]
-[MFLibraryUpgrader _handle]
-[MFLibraryUpgrader _getReaderDB]
-[MFLibraryUpgrader _unlockReaderDB:]
-[MFLibraryUpgrader _getWriterDB]
-[MFLibraryUpgrader _unlockWriterDB:]
-[MFLibraryUpgrader _getVersionInfo]
-[MFLibraryUpgrader _bootstrapVersioningEngine]
-[MFLibraryUpgrader _canRun:]
-[MFLibraryUpgrader _needsRun]
-[MFLibraryUpgrader _executeSQL:updateMinorVersion:]
-[MFLibraryUpgrader _stampCurrentMinorVersion]
-[MFLibraryUpgrader _getSQLTableCount:usingDB:]
-[MFLibraryUpgrader upgradeMailDataIfNecessary]
-[MFLibraryUpgrader upgradeRulesFromLion]
-[MFLibraryUpgrader upgradeSmartMailboxesFromLion]
-[MFLibraryUpgrader upgradeSignaturesFromLion]
-[MFLibraryUpgrader delegate]
-[MFLibraryUpgrader setDelegate:]
-[MFLibraryUpgrader readOnly]
-[MFLibraryUpgrader setReadOnly:]
-[MFLibraryUpgrader monitor]
-[MFLibraryUpgrader setMonitor:]
-[MFLibraryUpgrader migrationDestinationPath]
-[MFLibraryUpgrader setMigrationDestinationPath:]
-[MFLibraryUpgrader shouldRecalculateConversations]
-[MFLibraryUpgrader setShouldRecalculateConversations:]
-[MFLibraryUpgrader shouldUpdateSubjectPrefixes]
-[MFLibraryUpgrader setShouldUpdateSubjectPrefixes:]
-[MFLibraryUpgrader shouldResetSnippets]
-[MFLibraryUpgrader setShouldResetSnippets:]
-[MFLibraryUpgrader shouldRecalculateMessageCounts]
-[MFLibraryUpgrader setShouldRecalculateMessageCounts:]
-[MFLibraryUpgrader shouldUpdateSpotlightAttributes]
-[MFLibraryUpgrader setShouldUpdateSpotlightAttributes:]
-[MFLibraryUpgrader shouldUpdateMailboxURLs]
-[MFLibraryUpgrader setShouldUpdateMailboxURLs:]
-[MFLibraryUpgrader shouldResetPasswords]
-[MFLibraryUpgrader setShouldResetPasswords:]
-[MFLibraryUpgrader shouldResetChangeIdentifierForGmailAccounts]
-[MFLibraryUpgrader setShouldResetChangeIdentifierForGmailAccounts:]
-[MFLibraryUpgrader shouldNormalizeMailboxPaths]
-[MFLibraryUpgrader setShouldNormalizeMailboxPaths:]
-[MFLibraryUpgrader shouldResetDynamicAccountConfiguration]
-[MFLibraryUpgrader setShouldResetDynamicAccountConfiguration:]
-[MFLibraryUpgrader shouldRemoveMailboxesWithAbsoluteURLs]
-[MFLibraryUpgrader setShouldRemoveMailboxesWithAbsoluteURLs:]
-[MFLibraryUpgrader initialLastWriteMinorVersion]
-[MFLibraryUpgrader setInitialLastWriteMinorVersion:]
-[MFLibraryUpgrader activityToken]
-[MFLibraryUpgrader setActivityToken:]
-[MFLibraryUpgrader majorVersion]
-[MFLibraryUpgrader setMajorVersion:]
-[MFLibraryUpgrader minorVersion]
-[MFLibraryUpgrader setMinorVersion:]
-[MFLibraryUpgrader activity]
-[MFLibraryUpgrader setActivity:]
-[MFLibraryUpgrader upgraderDB]
-[MFLibraryUpgrader setUpgraderDB:]
-[MFLibraryUpgrader .cxx_destruct]
___removeEMLXPartFilesForPartialURL_block_invoke
+[MFLocalAccount allocWithZone:]
+[MFLocalAccount localAccount]
___30+[MFLocalAccount localAccount]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFLocalAccount dealloc]
+[MFLocalAccount defaultPathNameForAccount]
+[MFLocalAccount defaultPathNameForAccountWithHostname:username:]
-[MFLocalAccount rootMailbox]
-[MFLocalAccount identifier]
-[MFLocalAccount storeClassForMailbox:]
-[MFLocalAccount mailboxPathExtension]
-[MFLocalAccount primaryMailbox]
-[MFLocalAccount defaultsDictionary]
+[MFLocalAccount accountTypeString]
-[MFLocalAccount displayName]
-[MFLocalAccount configureDynamically]
-[MFLocalAccount setConfigureDynamically:]
-[MFLocalAccount setHostname:]
-[MFLocalAccount setUsername:]
-[MFLocalAccount password]
-[MFLocalAccount setPassword:]
-[MFLocalAccount canFetch]
-[MFLocalAccount shouldAutoFetch]
-[MFLocalAccount isOffline]
-[MFLocalAccount setIsOffline:]
-[MFLocalAccount isWillingToGoOnline]
-[MFLocalAccount setIsWillingToGoOnline:]
-[MFLocalAccount _readCustomInfoFromMailboxCache:]
-[MFLocalAccount emptyTrashFrequency]
-[MFLocalAccount shouldMoveDeletedMessagesToTrash]
-[MFLocalAccount _synchronouslyLoadListingForParent:]
_mutableCopyOfParentPath
-[MFLocalAccount _copyMailboxWithParent:name:pathComponent:attributes:existingMailbox:uuid:]
-[MFLocalAccount _setChildren:forMailbox:]
-[MFLocalAccount supportsNormalContainerOnlyMailboxes]
-[MFLocalAccount deleteConvertsStoreToFolder]
-[MFLocalAccount pathForMailboxWithParent:displayName:]
-[MFLocalAccount createMailboxWithParent:displayName:localizedDisplayName:]
-[MFLocalAccount createMailboxWithParent:displayName:error:]
-[MFLocalAccount renameMailbox:newDisplayName:parent:]
-[MFLocalAccount insertInMailboxes:atIndex:]
-[MFLocalAccount rootlessMailboxForFileSystemPath:]
-[MFLocalAccount _URLPersistenceScheme]
-[MFLocalAccount _infoForMatchingURL:]
-[MFLocalAccount synchronizesDataWithServer]
-[MFLocalAccount _specialMailboxRelativePathForType:]
-[MFLocalAccount todosMailbox]
-[MFLocalAccount isEditableByUser]
-[MFLocalAccount canParticipateInRules]
-[MFLocalAccount providesAccountInformation]
-[MFLocalAccount isZeroConfiguration]
-[MFLocalAccount isRemoteAccount]
-[MFLocalAccount hasTrashMailbox]
-[MFLocalAccount supportsAppleScript]
-[_MFRootlessMailbox displayName]
-[_MFRootlessMailbox fullPath]
-[_MFRootlessMailbox tildeAbbreviatedPath]
-[_MFRootlessMailbox storeForMailbox:createIfNeeded:]
+[MFLocationManager allocWithZone:]
+[MFLocationManager sharedManager]
___34+[MFLocationManager sharedManager]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFLocationManager initWithUserDefaultsArray:]
-[MFLocationManager init]
-[MFLocationManager dealloc]
+[MFLocationManager currentLocation]
-[MFLocationManager addLocation:]
-[MFLocationManager locationForDomain:]
-[MFLocationManager locationForIPAddress:]
-[MFLocationManager _networkChanged:]
-[MFLocationManager _determineCurrentLocation]
-[MFLocationManager _managedLocationChanged:]
-[MFLocationManager _unarchiveLocations:]
-[MFLocationManager _archivedLocations]
-[MFLocationManager current]
-[MFLocationManager setCurrent:]
-[MFLocationManager invocationQueue]
-[MFLocationManager .cxx_destruct]
-[MFNetworkLocation init]
-[MFNetworkLocation initWithDomains:IPAddresses:]
-[MFNetworkLocation initWithArchive:]
-[MFNetworkLocation archive]
-[MFNetworkLocation addDomains:IPAddresses:]
-[MFNetworkLocation domains]
-[MFNetworkLocation subnets]
-[MFNetworkLocation isForIPAddress:]
-[MFNetworkLocation isForDomain:]
-[MFNetworkLocation deliveryAccountForAccount:]
-[MFNetworkLocation setAccount:deliveryAccount:]
-[MFNetworkLocation bestDeliveryAccountForAccount:ignoreLockedDelivery:]
-[MFNetworkLocation _postChanged]
-[MFNetworkLocation isEqual:]
-[MFNetworkLocation isEqualToLocation:]
-[MFNetworkLocation hash]
-[MFNetworkLocation .cxx_destruct]
-[MFMailAccount(ScriptingSupport) indicesOfObjectsByEvaluatingObjectSpecifier:]
-[MFMailAccount(ScriptingSupport) mailboxes]
-[MFMailAccount(ScriptingSupport) replaceInMailboxes:atIndex:]
-[MFMailAccount(ScriptingSupport) insertInMailboxes:atIndex:]
-[MFMailAccount(ScriptingSupport) insertInMailboxes:]
-[MFMailAccount(ScriptingSupport) removeFromMailboxesAtIndex:]
-[MFMailAccount(ScriptingSupport) emptyTrashOnQuit]
-[MFMailAccount(ScriptingSupport) setEmptyTrashOnQuit:]
-[MFMailAccount(ScriptingSupport) emptySentMessagesOnQuit]
-[MFMailAccount(ScriptingSupport) setEmptySentMessagesOnQuit:]
-[MFMailAccount(ScriptingSupport) emptyJunkOnQuit]
-[MFMailAccount(ScriptingSupport) setEmptyJunkOnQuit:]
+[MFMailAccount initialize]
+[MFMailAccount accountsHaveBeenInitialized]
+[MFMailAccount haveAccountsBeenConfigured]
+[MFMailAccount completeDeferredAccountInitialization]
+[MFMailAccount _addAccountToSortedPaths:]
___42+[MFMailAccount _addAccountToSortedPaths:]_block_invoke
___42+[MFMailAccount _addAccountToSortedPaths:]_block_invoke_2
___42+[MFMailAccount _addAccountToSortedPaths:]_block_invoke_3
+[MFMailAccount _setupSortedPathsForAccounts:]
+[MFMailAccount _mailAccountsIncludingUnknownTypes]
+[MFMailAccount allMailAccounts]
+[MFMailAccount mailAccounts]
___29+[MFMailAccount mailAccounts]_block_invoke
+[MFMailAccount reloadMailAccounts]
+[MFMailAccount setMailAccounts:]
+[MFMailAccount _setMailAccounts:reloadingFromStorage:]
___55+[MFMailAccount _setMailAccounts:reloadingFromStorage:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[MFMailAccount addMailAccount:]
+[MFMailAccount removeMailAccountFromAccountStorageWithIdentifier:]
+[MFMailAccount setIsActive:forAccountWithIdentifier:]
+[MFMailAccount accountsWereSynced]
+[MFMailAccount newUnreadMessagesReceivedInInbox]
+[MFMailAccount setNewUnreadMessagesReceivedInInbox:]
+[MFMailAccount countOfNewUnreadMessagesReceivedInInbox]
+[MFMailAccount setCountOfNewUnreadMessagesReceivedInInbox:]
+[MFMailAccount totalCountOfMessagesReceived]
+[MFMailAccount setTotalCountOfMessagesReceived:]
+[MFMailAccount syncManagedAccountWithMCXCreateIfAbsent:]
+[MFMailAccount _removeAccountFromSortedPaths:]
___47+[MFMailAccount _removeAccountFromSortedPaths:]_block_invoke
+[MFMailAccount _activeAccountsFromArray:]
+[MFMailAccount activeAccounts]
+[MFMailAccount onlyGmailAccountsUsingAllMailAsArchiveAreActive]
+[MFMailAccount remoteAccounts]
+[MFMailAccount saveAccountInfoToDefaults]
+[MFMailAccount migrateUnreadCountInMailboxCache]
+[MFMailAccount accountWithIdentifier:]
+[MFMailAccount _accountFromArray:withIdentifier:]
+[MFMailAccount existingAccountWithType:hostname:username:]
+[MFMailAccount _accountFromArray:withType:hostname:username:]
+[MFMailAccount setAccountInfo:forAccountMatchingInfo:]
___55+[MFMailAccount setAccountInfo:forAccountMatchingInfo:]_block_invoke
___copy_helper_block_679
___destroy_helper_block_680
+[MFMailAccount _urlFromObject:]
-[MFMailAccount isValidAccountWithError:accountBeingEdited:userCanOverride:]
+[MFMailAccount allEmailAddressesIncludingFullUserName:]
+[MFMailAccount isEmailAddressInAnyAccount:]
-[MFMailAccount hasEmailAddress:]
+[MFMailAccount _updateAccountExistsForSigning]
+[MFMailAccount accountExistsForSigning]
+[MFMailAccount resetAccountExistsForSigning]
+[MFMailAccount _accountContainingEmailAddress:matchingAddress:fullUserName:]
+[MFMailAccount accountContainingEmailAddress:]
+[MFMailAccount accountForHeaders:message:]
+[MFMailAccount accountUsingHeadersFromMessage:]
+[MFMailAccount accountThatMessageIsFrom:]
+[MFMailAccount addressesThatReceivedMessage:]
+[MFMailAccount preferredEmailAddressToReplyToMessage:]
+[MFMailAccount accountThatReceivedMessage:matchingEmailAddress:fullUserName:]
-[MFMailAccount cheapStoreAtPathIsEmpty:]
+[MFMailAccount outboxMessageStore:]
+[MFMailAccount specialMailboxes]
+[MFMailAccount _specialMailboxesUsingBlock:]
+[MFMailAccount inboxMailboxes]
___31+[MFMailAccount inboxMailboxes]_block_invoke
+[MFMailAccount trashMailboxes]
___31+[MFMailAccount trashMailboxes]_block_invoke
+[MFMailAccount outboxMailboxes]
___32+[MFMailAccount outboxMailboxes]_block_invoke
+[MFMailAccount sentMessagesMailboxes]
___38+[MFMailAccount sentMessagesMailboxes]_block_invoke
+[MFMailAccount draftMailboxes]
___31+[MFMailAccount draftMailboxes]_block_invoke
+[MFMailAccount junkMailboxes]
___30+[MFMailAccount junkMailboxes]_block_invoke
+[MFMailAccount archiveMailboxes]
___33+[MFMailAccount archiveMailboxes]_block_invoke
-[MFMailAccount todosMailbox]
-[MFMailAccount notesMailbox]
-[MFMailAccount _todosMailboxUnlessUsingLocal]
-[MFMailAccount _notesMailboxUnlessUsingLocal]
-[MFMailAccount allMailMailbox]
+[MFMailAccount allMailboxes]
+[MFMailAccount accountWithPath:]
+[MFMailAccount newAccountWithPath:]
-[MFMailAccount initWithAccountInfo:]
-[MFMailAccount initWithPath:]
-[MFMailAccount dealloc]
-[MFMailAccount description]
-[MFMailAccount completeDeferredInitialization]
-[MFMailAccount isValid]
-[MFMailAccount _setAccountInfo:]
+[MFMailAccount defaultPathForAccountWithHostname:username:]
+[MFMailAccount defaultAccountDirectory]
+[MFMailAccount defaultPathNameForAccount]
+[MFMailAccount defaultPathNameForAccountWithHostname:username:]
-[MFMailAccount path]
-[MFMailAccount setPath:]
-[MFMailAccount accountDirectory]
-[MFMailAccount tildeAbbreviatedPath]
-[MFMailAccount applescriptFullUserName]
-[MFMailAccount setApplescriptFullUserName:]
-[MFMailAccount fullUserName]
-[MFMailAccount setFullUserName:]
-[MFMailAccount googleClientToken]
+[MFMailAccount defaultDeliveryAccount]
-[MFMailAccount localizedDeliveryAccountIgnoringLockedDelivery:]
-[MFMailAccount smtpIdentifier]
-[MFMailAccount setSMTPIdentifier:]
-[MFMailAccount deliveryAccount]
-[MFMailAccount setDeliveryAccount:]
-[MFMailAccount dynamicDeliveryAccount]
-[MFMailAccount _deliveryAccountWillBeRemoved:]
-[MFMailAccount _mailboxUserInfoDidChange:]
-[MFMailAccount deliveryAccountIsLocked]
-[MFMailAccount setDeliveryAccountIsLocked:]
-[MFMailAccount firstEmailAddress]
-[MFMailAccount rawEmailAddresses]
-[MFMailAccount emailAddresses]
-[MFMailAccount setEmailAddresses:]
-[MFMailAccount applescriptEmailAddresses]
-[MFMailAccount setApplescriptEmailAddresses:]
-[MFMailAccount emailAliases]
-[MFMailAccount shouldAutoFetch]
-[MFMailAccount setShouldAutoFetch:]
-[MFMailAccount disableRecentsSync]
-[MFMailAccount setDisableRecentsSync:]
-[MFMailAccount fileManager:shouldProceedAfterError:removingItemAtPath:]
-[MFMailAccount fileManager:shouldProceedAfterError:removingItemAtURL:]
-[MFMailAccount _synchronouslyInvalidateAndDelete:]
-[MFMailAccount deleteAccount]
+[MFMailAccount isAnyAccountOffline]
+[MFMailAccount isAnyAccountOnline]
+[MFMailAccount _setOnlineStateOfAllAccountsTo:]
+[MFMailAccount disconnectAllAccounts]
+[MFMailAccount connectAllAccounts]
-[MFMailAccount _setCacheWriteTimer:]
-[MFMailAccount saveCacheInBackground]
-[MFMailAccount saveCache]
-[MFMailAccount doRoutineCleanup]
-[MFMailAccount setCacheIsDirty:]
-[MFMailAccount releaseAllConnections]
-[MFMailAccount setIsOffline:]
-[MFMailAccount setIsWillingToGoOnline:]
-[MFMailAccount canFetch]
-[MFMailAccount remoteTaskQueue]
-[MFMailAccount remoteFetchQueue]
-[MFMailAccount defaultsDictionary]
-[MFMailAccount startBackgroundSynchronization]
-[MFMailAccount canAppendMessages]
-[MFMailAccount canBeSynchronized]
-[MFMailAccount synchronizeAllMailboxes]
+[MFMailAccount accountsInitializingMailboxList]
-[MFMailAccount _supportsMailboxListInitialization]
-[MFMailAccount isInitializingMailboxList]
-[MFMailAccount willInitializeMailboxList]
-[MFMailAccount didInitializeMailboxList]
+[MFMailAccount _clearAllAccountBackgroundFetchInProgress]
-[MFMailAccount needsChecking]
-[MFMailAccount setNeedsChecking]
-[MFMailAccount fetchAsynchronouslyIsAuto:]
_prepareToFetchIfNotAlreadyFetching
-[MFMailAccount boostExistingFetchTo:]
-[MFMailAccount fetchAsynchronously]
-[MFMailAccount fetchSynchronously]
-[MFMailAccount fetchSynchronouslyIsAuto:]
-[MFMailAccount isFetching]
-[MFMailAccount newUnreadMessagesHaveBeenReceivedInInbox]
-[MFMailAccount incrementCountOfNewUnreadMessagesReceivedInInbox:]
-[MFMailAccount incrementTotalCountOfMessagesReceived:]
-[MFMailAccount primaryMailbox]
-[MFMailAccount rootMailbox]
-[MFMailAccount mailboxIsRootMailbox:]
-[MFMailAccount rootMailboxExists]
-[MFMailAccount rootChildrenCanBePromoted]
-[MFMailAccount inboxMailboxCreateIfNeeded:]
-[MFMailAccount draftsMailboxCreateIfNeeded:]
-[MFMailAccount junkMailboxCreateIfNeeded:]
-[MFMailAccount sentMessagesMailboxCreateIfNeeded:]
-[MFMailAccount trashMailboxCreateIfNeeded:]
-[MFMailAccount archiveMailboxCreateIfNeeded:]
-[MFMailAccount _outboxMailboxCreateIfNeeded:]
-[MFMailAccount allMailboxes]
-[MFMailAccount allMailboxesEvenIfInactive:]
-[MFMailAccount setDraftsMailbox:]
-[MFMailAccount setTrashMailbox:]
-[MFMailAccount setJunkMailbox:]
-[MFMailAccount setSentMessagesMailbox:]
-[MFMailAccount setNotesMailbox:]
-[MFMailAccount setArchiveMailbox:]
-[MFMailAccount setToDosMailbox:]
-[MFMailAccount deleteMessagesFromMailbox:olderThanNumberOfDays:]
-[MFMailAccount _emptyFrequencyForKey:defaultValue:]
-[MFMailAccount _setEmptyFrequency:forKey:]
-[MFMailAccount emptySentMessagesFrequency]
-[MFMailAccount setEmptySentMessagesFrequency:]
-[MFMailAccount emptyJunkFrequency]
-[MFMailAccount setEmptyJunkFrequency:]
+[MFMailAccount numberOfDaysToKeepLocalTrash]
-[MFMailAccount emptyTrashFrequency]
-[MFMailAccount setEmptyTrashFrequency:]
-[MFMailAccount shouldMoveDeletedMessagesToTrash]
-[MFMailAccount setShouldMoveDeletedMessagesToTrash:]
-[MFMailAccount canMoveDeletedMessagesToTrash]
+[MFMailAccount allAccountsDeleteInPlace]
-[MFMailAccount emptySpecialMailboxesThatNeedToBeEmptiedAtQuit]
-[MFMailAccount displayName]
+[MFMailAccount synchronouslyEmptyMailboxType:inAccounts:]
-[MFMailAccount displayNameForMailbox:]
-[MFMailAccount containsMailboxes]
-[MFMailAccount resetSpecialMailboxes]
+[MFMailAccount resetAllSpecialMailboxes]
+[MFMailAccount mailboxForFileSystemPath:create:]
-[MFMailAccount mailboxPathExtension]
-[MFMailAccount canCreateNewMailboxes]
-[MFMailAccount canMoveMailboxes]
-[MFMailAccount supportsSlashesInMailboxName]
-[MFMailAccount validNameForMailbox:fromDisplayName:error:]
-[MFMailAccount canMailboxBeRenamed:]
-[MFMailAccount canMailboxBeDeleted:]
-[MFMailAccount supportsNormalContainerOnlyMailboxes]
-[MFMailAccount deleteConvertsStoreToFolder]
-[MFMailAccount createMailboxWithParent:name:]
-[MFMailAccount createMailboxWithParent:displayName:localizedDisplayName:]
-[MFMailAccount renameMailbox:newDisplayName:parent:]
-[MFMailAccount deleteMailbox:reflectToServer:]
+[MFMailAccount deleteMailboxIfEmpty:]
-[MFMailAccount invalidateChildrenOfMailbox:]
-[MFMailAccount _resetAllMailboxURLs]
-[MFMailAccount setUsername:]
-[MFMailAccount setHostname:]
-[MFMailAccount setPortNumber:]
-[MFMailAccount accountInfoDidChange]
-[MFMailAccount setConnectionError:]
-[MFMailAccount connectionError]
+[MFMailAccount inferMissingCanonicalEmailAddresses]
___52+[MFMailAccount inferMissingCanonicalEmailAddresses]_block_invoke
___copy_helper_block_1344
___destroy_helper_block_1345
+[MFMailAccount _inferMissingCanonicalEmailAddressesForAccounts:usingEmailAddresses:]
___85+[MFMailAccount _inferMissingCanonicalEmailAddressesForAccounts:usingEmailAddresses:]_block_invoke
___85+[MFMailAccount _inferMissingCanonicalEmailAddressesForAccounts:usingEmailAddresses:]_block_invoke_2
___85+[MFMailAccount _inferMissingCanonicalEmailAddressesForAccounts:usingEmailAddresses:]_block_invoke_3
___copy_helper_block_1367
___destroy_helper_block_1368
___copy_helper_block_1374
___destroy_helper_block_1375
-[MFMailAccount autodiscoverSettings:]
-[MFMailAccount _autodiscoveredSSLSetting:portNumberSetting:otherSettingsChanged:needToResetMailboxURLs:]
-[MFMailAccount storeForMailbox:]
-[MFMailAccount storeForMailbox:createIfNeeded:]
-[MFMailAccount storeClassForMailbox:]
-[MFMailAccount mailboxForRelativePath:isFilesystemPath:create:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___64-[MFMailAccount mailboxForRelativePath:isFilesystemPath:create:]_block_invoke
___copy_helper_block_1426
___destroy_helper_block_1427
-[MFMailAccount valueInMailboxesWithName:]
-[MFMailAccount objectSpecifierForMessageStore:]
-[MFMailAccount objectSpecifierForMailbox:]
-[MFMailAccount objectSpecifier]
+[MFMailAccount _accountForURL:includeInactiveAccounts:]
+[MFMailAccount accountWithSyncableURLString:includeInactiveAccounts:]
+[MFMailAccount _accountForURL:]
+[MFMailAccount infoForURL:]
+[MFMailAccount URLForInfo:]
-[MFMailAccount URLString]
-[MFMailAccount syncableURLString]
+[MFMailAccount accountWithURLString:]
+[MFMailAccount accountWithURLString:includeInactiveAccounts:]
+[MFMailAccount mailboxForURL:forceCreation:syncableURL:]
-[MFMailAccount synchronizesDataWithServer]
-[MFMailAccount isEditableByUser]
-[MFMailAccount canParticipateInRules]
-[MFMailAccount providesAccountInformation]
-[MFMailAccount isZeroConfiguration]
-[MFMailAccount isRemoteAccount]
-[MFMailAccount isGmailAccount]
-[MFMailAccount hasTrashMailbox]
-[MFMailAccount supportsAppleScript]
-[MFMailAccount storesUnseenCount]
-[MFMailAccount respondToHostBecomingReachable]
-[MFMailAccount compareIAOrder:]
-[MFMailAccount connectAndAuthenticate:]
-[MFMailAccount validationRequired]
-[MFMailAccount setValidationRequired:]
-[MFMailAccount validator:didChangeState:]
-[MFMailAccount _validatorFailedToAuthenticate:]
-[MFMailAccount validatorDidFail:]
-[MFMailAccount validatorDidFinish:]
-[MFMailAccount delegateApplicationName]
-[MFMailAccount messageDeliveryDidFinish:]
+[MFMailAccount normalizeMailboxPathComponentsInAllAccounts]
+[MFMailAccount _normalizePathComponentsInMailboxesDictionary:accountClass:]
___76+[MFMailAccount _normalizePathComponentsInMailboxesDictionary:accountClass:]_block_invoke
___copy_helper_block_1530
___destroy_helper_block_1531
+[MFMailAccount _mailAccountsAreInitialized]
+[MFMailAccount setAllEmailAddresses:withFullUserNames:]
+[MFMailAccount _mailboxListingNotificationAreEnabled]
+[MFMailAccount _disableMailboxListingNotifications]
+[MFMailAccount _enableMailboxListingNotifications:]
+[MFMailAccount _accountWithPath:relativePath:]
___47+[MFMailAccount _accountWithPath:relativePath:]_block_invoke
___copy_helper_block_1549
___destroy_helper_block_1550
-[MFMailAccount _setPath:]
-[MFMailAccount setIsActive:]
-[MFMailAccount _postMailAccountsHaveChangedIfNeeded]
+[MFMailAccount _postMailAccountsHaveChanged]
+[MFMailAccount _pathComponentForMailboxName:]
+[MFMailAccount _mailboxNameForPathComponent:]
-[MFMailAccount _readCustomInfoFromMailboxCache:]
-[MFMailAccount _writeCustomInfoToMailboxCache:]
-[MFMailAccount _copyMailboxWithParent:name:pathComponent:attributes:existingMailbox:]
-[MFMailAccount _synchronouslyLoadListingForParent:]
-[MFMailAccount _loadMailboxListingIntoCache:parent:addedMailboxes:removedMailboxes:]
___85-[MFMailAccount _loadMailboxListingIntoCache:parent:addedMailboxes:removedMailboxes:]_block_invoke
___copy_helper_block_1592
___destroy_helper_block_1593
-[MFMailAccount _mailboxesWereRemovedFromTree:withFileSystemPaths:]
-[MFMailAccount _usesMailboxCache]
-[MFMailAccount _readMailboxCache]
-[MFMailAccount _synchronizeMailboxListWithFileSystemBeforeImport:]
-[MFMailAccount _synchronizeMailboxListWithFileSystem]
-[MFMailAccount _synchronizeMailboxListWithFileSystemBeforeImport]
-[MFMailAccount _finishSynchronizingMailboxesAfterImport]
-[MFMailAccount _loadEntriesFromFileSystemPath:parent:]
-[MFMailAccount _writeMailboxCache]
_dictionaryForMailbox
-[MFMailAccount _insertMailbox:intoParent:withDisplayName:]
___59-[MFMailAccount _insertMailbox:intoParent:withDisplayName:]_block_invoke
___copy_helper_block_1647
___destroy_helper_block_1648
-[MFMailAccount _setChildren:forMailbox:]
-[MFMailAccount _setChildren:addedChild:forMailbox:]
-[MFMailAccount _deleteMailbox:reflectToServer:]
-[MFMailAccount _fetchSynchronouslyIfNeeded]
-[MFMailAccount backgroundFetchCompleted]
-[MFMailAccount _emptySpecialMailboxesIfNeeded]
-[MFMailAccount _emptySpecialMailboxesIfNeededForQuit:]
-[MFMailAccount _clearAllPathBasedCachesAndDelete:]
+[MFMailAccount _setOutboxMailbox:]
+[MFMailAccount _outboxMailbox]
-[MFMailAccount _defaultSpecialMailboxRelativePathForType:]
-[MFMailAccount _assignSpecialMailboxToAppropriateIvar:forType:]
-[MFMailAccount _setSpecialMailboxRelativePath:forType:]
-[MFMailAccount _setSpecialMailbox:forType:]
-[MFMailAccount _specialMailboxRelativePathForType:]
-[MFMailAccount _specialMailboxWithType:create:]
-[MFMailAccount _canEmptyMessagesFromMailbox:]
-[MFMailAccount _shouldLogDeleteActivity]
-[MFMailAccount _infoForMatchingURL:]
-[MFMailAccount _URLPersistenceScheme]
-[MFMailAccount _URLInternalConnectionScheme]
-[MFMailAccount _URLExternalConnectionScheme]
+[MFMailAccount keyPathsForValuesAffecting_URLPersistenceHostname]
-[MFMailAccount _URLPersistenceHostname]
-[MFMailAccount _URLForInfo:]
-[MFMailAccount _mailboxPathPrefix:]
-[MFMailAccount rootMailboxEvenIfInactive:]
_configureMailboxCacheEvenIfInactive
-[MFMailAccount iaSettingsIncludingPassword:]
-[MFMailAccount _validateIfNeeded]
-[MFMailAccount validator]
-[MFMailAccount setValidator:]
-[MFMailAccount .cxx_destruct]
-[MCMessage(MCMailAccountAdapter) mailAccount]
___loadAllEmailAddresses_block_invoke
+[MFMailbox initialize]
+[MFMailbox logMailboxUUIDErrors]
___33+[MFMailbox logMailboxUUIDErrors]_block_invoke
+[MFMailbox refreshUnreadCountOnSelect]
+[MFMailbox setRefreshUnreadCountOnSelect:]
-[MFMailbox isSmartMailbox]
-[MFMailbox setIsSmartMailbox:]
-[MFMailbox _registerForSmartMailboxNotification]
+[MFMailbox smartMailboxes]
+[MFMailbox setSmartMailboxes:]
+[MFMailbox smartMailboxPlaceholders]
+[MFMailbox addSmartMailboxPlaceholder:]
+[MFMailbox removeAllSmartMailboxPlaceholders]
+[MFMailbox _smartMailboxWithIdentifier:inArray:]
+[MFMailbox smartMailboxWithIdentifier:]
+[MFMailbox smartMailboxesEnumeratorIncludingFlagMailboxes:VIPSenderMailboxes:]
+[MFMailbox isSmartMailboxDictionaryCompatible:]
-[MFMailbox smartMailboxEncodingVersion]
-[MFMailbox isSmartMailboxExpressibleInTigerSchema]
+[MFMailbox mailboxTypeAllowsConversations:]
+[MFMailbox mailboxTypeIsAlwaysUnread:]
+[MFMailbox mailboxTypeAllowsDeduplication:]
-[MFMailbox dealloc]
_releaseChildren
-[MFMailbox init]
-[MFMailbox initWithAccount:]
-[MFMailbox initWithName:attributes:forAccount:]
-[MFMailbox initWithName:pathComponent:attributes:forAccount:]
-[MFMailbox initWithMailbox:]
-[MFMailbox initWithDictionaryRepresentation:copyUUID:]
+[MFMailbox mailboxWithPersistentIdentifier:]
+[MFMailbox mailboxFromPath:]
-[MFMailbox persistentIdentifier]
-[MFMailbox dictionaryRepresentation]
-[MFMailbox representedMailbox]
-[MFMailbox cancelUnreadCountQuery]
-[MFMailbox prepareForDeletion]
-[MFMailbox extendedDisplayName]
-[MFMailbox displayNameUsingAccountNameIfSpecial:]
-[MFMailbox displayName]
-[MFMailbox genericDisplayName]
-[MFMailbox labelName]
-[MFMailbox setPendingNameChange:]
-[MFMailbox canBeRenamed]
-[MFMailbox setName:pathComponent:]
-[MFMailbox _enqueueUnreadCountChangeNotification]
-[MFMailbox notifyForUnreadCount:andOldUnreadCount:]
-[MFMailbox unseenCountIsKnown]
-[MFMailbox unseenCount]
___24-[MFMailbox unseenCount]_block_invoke
-[MFMailbox hasMessages]
-[MFMailbox children]
-[MFMailbox hasChildren]
-[MFMailbox _invalidateVisibleChildrenCaches]
-[MFMailbox displayIndex]
-[MFMailbox setDisplayIndex:]
-[MFMailbox displayIndexCanBeModified]
-[MFMailbox isManuallySorted]
-[MFMailbox setIsManuallySorted:]
-[MFMailbox isVisibleFlaggedMailbox]
-[MFMailbox setIsVisibleFlaggedMailbox:]
-[MFMailbox suggestedDisplayIndexForChildMailbox:hidingGmail:]
-[MFMailbox _updateSortedChildrenIfNeeded]
___42-[MFMailbox _updateSortedChildrenIfNeeded]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMailbox numberOfVisibleChildrenHidingGmail:]
-[MFMailbox numberOfSortedChildrenHidingGmail:]
-[MFMailbox childEnumerator]
-[MFMailbox childEnumeratorIncludingHiddenChildren:]
-[MFMailbox depthFirstEnumerator]
-[MFMailbox numberOfChildren]
-[MFMailbox childAtIndex:]
-[MFMailbox visibleChildAtIndex:]
-[MFMailbox sortedChildAtIndex:hidingGmail:]
-[MFMailbox _gmailWhiteMailboxChild]
-[MFMailbox isGmailWhiteMailboxOrDescendant:]
-[MFMailbox isValidGmailLabel]
-[MFMailbox indexOfChild:]
-[MFMailbox childWithName:]
-[MFMailbox childWithPathComponent:]
-[MFMailbox unusedChildPathComponent:]
-[MFMailbox mutableCopyOfChildren]
-[MFMailbox mutableCopyOfChildrenIncludingHiddenChildren:hidingGmail:]
-[MFMailbox mailboxComparatorWithAccount:]
___42-[MFMailbox mailboxComparatorWithAccount:]_block_invoke
___copy_helper_block_533
___destroy_helper_block_534
-[MFMailbox _deleteChildrenWithURLsIfInvalid:fullPaths:]
-[MFMailbox setChildren:]
_retainChildren
_saveChildMailboxNames
___25-[MFMailbox setChildren:]_block_invoke
___copy_helper_block_622
___destroy_helper_block_623
-[MFMailbox invalidateChildren]
-[MFMailbox sortChildren]
-[MFMailbox parent]
-[MFMailbox setParent:]
-[MFMailbox hasAlternateParent]
-[MFMailbox _saveMailboxNameIfNeeded]
-[MFMailbox deepCopy]
-[MFMailbox setRepresentedAccount:]
-[MFMailbox representedAccount]
-[MFMailbox account]
-[MFMailbox accountURLString]
-[MFMailbox applescriptAccount]
-[MFMailbox isValid]
-[MFMailbox invalidate]
-[MFMailbox isContainer]
-[MFMailbox isStore]
-[MFMailbox isSpecialMailbox]
-[MFMailbox isPlainSmartMailbox]
-[MFMailbox isGmailImportantLabel]
-[MFMailbox isAllMailMailbox]
+[MFMailbox _mailboxesFromCriterion:]
+[MFMailbox displayNameForMessage:mailboxCriteria:]
___51+[MFMailbox displayNameForMessage:mailboxCriteria:]_block_invoke
-[MFMailbox _stringByAppendingPathComponentsToAccountPath:relativeToTree:generateFileSystemPath:]
-[MFMailbox accountRelativePath]
-[MFMailbox accountRelativeFilesystemPath]
-[MFMailbox fullPath]
-[MFMailbox realFullPath]
-[MFMailbox tildeAbbreviatedPath]
-[MFMailbox pathRelativeToMailbox:]
-[MFMailbox URL]
-[MFMailbox _URLStringWithAccount:]
-[MFMailbox URLString]
-[MFMailbox syncableURLString]
-[MFMailbox _URLStringIsSyncable:]
-[MFMailbox indexToInsertChildMailbox:]
-[MFMailbox isDescendantOfMailbox:]
-[MFMailbox isDescendantOfMailboxWithType:]
-[MFMailbox isStoreConvertibleToFolder]
-[MFMailbox description]
-[MFMailbox type]
-[MFMailbox setType:]
-[MFMailbox setPrimitiveType:]
-[MFMailbox preferredMessageType]
-[MFMailbox isVisible]
+[MFMailbox typeIsGeneric:]
-[MFMailbox attributes]
-[MFMailbox setAttributes:]
___27-[MFMailbox setAttributes:]_block_invoke
___copy_helper_block_730
___destroy_helper_block_731
-[MFMailbox setPrimitiveAttributes:]
-[MFMailbox isIndexable]
-[MFMailbox _updateDontIndexFlagFile]
+[MFMailbox setShouldIndexTrash:]
+[MFMailbox reimportJunk]
+[MFMailbox setShouldIndexJunk:]
-[MFMailbox isFirstTimeSync]
-[MFMailbox setIsFirstTimeSync:]
-[MFMailbox hasFirstTimeSyncBeenDetermined]
-[MFMailbox _loadUserInfo]
-[MFMailbox _userInfoDidLoad:]
-[MFMailbox userInfoObjectForKey:]
-[MFMailbox setUserInfoObject:forKey:]
-[MFMailbox userInfoBoolForKey:]
-[MFMailbox setUserInfoBool:forKey:]
-[MFMailbox forceSaveUserInfo]
-[MFMailbox assignNewUUID]
-[MFMailbox saveUserInfo]
-[MFMailbox userInfoDictionary]
-[MFMailbox setUserInfoWithDictionary:]
___39-[MFMailbox setUserInfoWithDictionary:]_block_invoke
___copy_helper_block_797
___destroy_helper_block_798
-[MFMailbox _saveMailboxesWithDirtyUserInfo]
-[MFMailbox _saveMailboxesWithDirtyUserInfoWithDelay]
-[MFMailbox _userInfoIsDirty]
+[MFMailbox setCanMarkUserInfoAsDirty:]
-[MFMailbox setUserInfoIsDirty:]
-[MFMailbox _ancestralAccount]
-[MFMailbox criteria]
-[MFMailbox setCriteria:]
-[MFMailbox flushCriteria]
-[MFMailbox _mailboxExclusionCriteria]
-[MFMailbox criterion]
-[MFMailbox modifiedVIPCriterionForInboxOnly]
-[MFMailbox _abGroupsUsedInCriteria]
-[MFMailbox criteriaAreValid:]
-[MFMailbox _isNormalMailbox]
-[MFMailbox displayCount]
-[MFMailbox setDisplayCount:]
-[MFMailbox deletedCount]
-[MFMailbox setMessageCounts:]
+[MFMailbox queueUpdateCountsForMailboxes:]
___43+[MFMailbox queueUpdateCountsForMailboxes:]_block_invoke
___43+[MFMailbox queueUpdateCountsForMailboxes:]_block_invoke_2
___copy_helper_block_881
___destroy_helper_block_882
___43+[MFMailbox queueUpdateCountsForMailboxes:]_block_invoke884
___copy_helper_block_887
___destroy_helper_block_888
___copy_helper_block_890
___destroy_helper_block_891
-[MFMailbox store]
-[MFMailbox storeCreateIfNeeded:]
-[MFMailbox isStoreReadOnlyCreateIfNeeded:]
-[MFMailbox failedToOpen]
-[MFMailbox openFailureError]
-[MFMailbox setFailedToOpen:error:]
-[MFMailbox copyWithZone:]
-[MFMailbox allowsMoveDeletedMessagesToTrash]
-[MFMailbox isPlaceholder]
-[MFMailbox isValidDestinationMailbox]
-[MFMailbox isEqualToSmartMailbox:]
-[MFMailbox _addressBookDidChange:]
-[MFMailbox _VIPSendersChanged:]
-[MFMailbox smartMailboxVersion]
-[MFMailbox setSmartMailboxVersion:]
-[MFMailbox syncId]
-[MFMailbox setSyncId:]
-[MFMailbox storeIsReadOnly]
-[MFMailbox setStoreIsReadOnly:]
-[MFMailbox name]
-[MFMailbox setName:]
-[MFMailbox pathComponent]
-[MFMailbox setPathComponent:]
-[MFMailbox unreadCountQueryObserverID]
-[MFMailbox setUnreadCountQueryObserverID:]
-[MFMailbox uuidUpdatedInDatabase]
-[MFMailbox setUuidUpdatedInDatabase:]
-[MFMailbox respectsMailboxExclusions]
-[MFMailbox setRespectsMailboxExclusions:]
-[MFMailbox uuid]
-[MFMailbox setUuid:]
-[MFMailbox needsToSaveMailboxName]
-[MFMailbox setNeedsToSaveMailboxName:]
-[MFMailbox allCriteriaMustBeSatisfied]
-[MFMailbox setAllCriteriaMustBeSatisfied:]
-[MFMailbox isPublicOrShared]
-[MFMailbox setIsPublicOrShared:]
-[MFMailbox .cxx_destruct]
-[_MFMailboxEnumerator initWithTree:]
-[_MFMailboxEnumerator init]
-[_MFMailboxEnumerator dealloc]
-[_MFMailboxEnumerator nextObject]
-[_MFSmartMailboxesEnumerator initWithSmartMailboxes:]
-[_MFSmartMailboxesEnumerator init]
-[_MFSmartMailboxesEnumerator nextObject]
-[_MFSmartMailboxesEnumerator smartMailboxes]
-[_MFSmartMailboxesEnumerator nextMailboxIndex]
-[_MFSmartMailboxesEnumerator setNextMailboxIndex:]
-[_MFSmartMailboxesEnumerator currentMailboxEnumerator]
-[_MFSmartMailboxesEnumerator setCurrentMailboxEnumerator:]
-[_MFSmartMailboxesEnumerator .cxx_destruct]
-[MFCriterion(SmartMailboxCycleDetection) targetSmartMailbox]
-[MFMailbox(SmartMailboxCycleDetection) isPointedToByCriterion:traversedMailboxes:]
-[MFMailbox(SmartMailboxCycleDetection) isPointedToBySmartMailbox:traversedMailboxes:]
-[MFMailbox(SmartMailboxCycleDetection) isPointedToBySmartMailbox:]
-[_MFMailboxChildrenEnumerator initWithTree:includeHiddenChildren:]
-[_MFMailboxChildrenEnumerator init]
-[_MFMailboxChildrenEnumerator dealloc]
-[_MFMailboxChildrenEnumerator nextObject]
-[_MFMailboxChildrenEnumerator includeHidden]
-[MFMessageCounts initWithTotal:unread:unseen:deleted:unreadAdjustedForDuplicates:]
-[MFMessageCounts description]
-[MFMessageCounts totalCount]
-[MFMessageCounts unreadCount]
-[MFMessageCounts unseenCount]
-[MFMessageCounts deletedCount]
-[MFMessageCounts unreadAdjustedForDuplicates]
-[MCMessage(MCMailboxAdapter) mailMailbox]
-[IMAPMailbox(MCMailboxAdapter) mailMailbox]
-[MFMailbox(ScriptingSupport) objectSpecifier]
-[MFMailbox(ScriptingSupport) applescriptContainer]
-[MFMailbox(ScriptingSupport) applescriptChildren]
-[MFMailbox(ScriptingSupport) messages]
-[MFMailbox(ScriptingSupport) removeFromMessagesAtIndex:]
-[MFMailbox(ScriptingSupport) mailboxName]
-[MFMailbox(ScriptingSupport) setMailboxName:]
-[MFMailbox(ScriptingSupport) valueInMessagesWithUniqueID:]
+[MFMailboxDirectoryScanner enumerateMailboxesAtDirectory:usingBlock:]
___70+[MFMailboxDirectoryScanner enumerateMailboxesAtDirectory:usingBlock:]_block_invoke
___70+[MFMailboxDirectoryScanner enumerateMailboxesAtDirectory:usingBlock:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
+[MFMailDropPreferencesManager allocWithZone:]
+[MFMailDropPreferencesManager sharedInstance]
___46+[MFMailDropPreferencesManager sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMailDropPreferencesManager init]
___36-[MFMailDropPreferencesManager init]_block_invoke
___copy_helper_block_71
___destroy_helper_block_72
-[MFMailDropPreferencesManager dealloc]
-[MFMailDropPreferencesManager attachmentTTL]
-[MFMailDropPreferencesManager maxMessageSize]
-[MFMailDropPreferencesManager minMessageSize]
-[MFMailDropPreferencesManager validateURL:]
+[MFMailMigrator migrateFromV1ToV2Layout:isComplex:progressDelegate:]
+[MFMailMigrator isMigrating]
-[MFMailMigrator initWithDestinationPath:isComplex:progressDelegate:]
-[MFMailMigrator dealloc]
-[MFMailMigrator _numberOfEmlxFilesInLostAndFound]
-[MFMailMigrator _numberOfEmlxFiles]
-[MFMailMigrator _numberOfMessagesInDB]
-[MFMailMigrator _messageTraceLibraryData]
-[MFMailMigrator _prefixOfString:fromSet:]
-[MFMailMigrator _string:hasPrefixInSet:]
-[MFMailMigrator _string:hasSuffixInSet:]
-[MFMailMigrator _directoryExistsAtPath:]
-[MFMailMigrator _stringByAppendingV2MailboxSuffix:]
+[MFMailMigrator path:hasPrefixInArray:]
___40+[MFMailMigrator path:hasPrefixInArray:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMailMigrator _handleAttachmentsMigrationResult:error:message:libraryID:]
-[MFMailMigrator fileManager:shouldProceedAfterError:removingItemAtPath:]
-[MFMailMigrator fileManager:shouldRemoveItemAtPath:]
-[MFMailMigrator _lostItemsForBaseDirectory:]
-[MFMailMigrator _mailboxSuffixes]
-[MFMailMigrator _accountPrefixes]
-[MFMailMigrator _migrateMailboxesFromDirectory:toDirectory:baseDirectory:usingUUID:mailboxCacheDictionary:accountPrefix:]
-[MFMailMigrator _shouldIgnoreFilename:]
-[MFMailMigrator _migrateFromV1ToV2Layout]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___42-[MFMailMigrator _migrateFromV1ToV2Layout]_block_invoke
___copy_helper_block_401
___destroy_helper_block_402
___42-[MFMailMigrator _migrateFromV1ToV2Layout]_block_invoke432
___copy_helper_block_441
___destroy_helper_block_442
___42-[MFMailMigrator _migrateFromV1ToV2Layout]_block_invoke445
___copy_helper_block_446
___destroy_helper_block_447
___42-[MFMailMigrator _migrateFromV1ToV2Layout]_block_invoke508
___copy_helper_block_515
___destroy_helper_block_516
-[MFMailMigrator _captureDiagnosticsForMigrationOutEmlxCount:lostFoundEmlxCount:]
___81-[MFMailMigrator _captureDiagnosticsForMigrationOutEmlxCount:lostFoundEmlxCount:]_block_invoke
___copy_helper_block_637
___destroy_helper_block_638
-[MFMailMigrator _saveSubpathsWithAttributesOfDirectoryAtPath:destinationPath:symbolicLinks:mboxCacheFiles:infoPlistFiles:outEmlxCount:outLostFoundEmlxCount:shouldPersist:]
-[MFMailMigrator _savePlistFiles:destinationPath:]
-[MFMailMigrator _copyWithCompressionFromPath:toPath:]
_fatalBomError
_fatalBomFileError
-[MFMailMigrator fileManager]
-[MFMailMigrator setFileManager:]
-[MFMailMigrator supportDirectory]
-[MFMailMigrator destinationSupportDirectory]
-[MFMailMigrator tempSupportDirectoryV2]
-[MFMailMigrator supportDirectoryV2]
-[MFMailMigrator mailDataDirectoryV2]
-[MFMailMigrator migrationSuccessfulFilepath]
-[MFMailMigrator v1ItemsToMigrateFilepath]
-[MFMailMigrator logDirectory]
-[MFMailMigrator lostItemsFilepath]
-[MFMailMigrator lostAndFoundDirectory]
-[MFMailMigrator isComplex]
-[MFMailMigrator isUsingAlternateDestination]
-[MFMailMigrator progressDelegate]
-[MFMailMigrator progressChunkSize]
-[MFMailMigrator setProgressChunkSize:]
-[MFMailMigrator messagesProgressCount]
-[MFMailMigrator setMessagesProgressCount:]
-[MFMailMigrator v1CleanupCount]
-[MFMailMigrator setV1CleanupCount:]
-[MFMailMigrator isTrackingCleanupProgress]
-[MFMailMigrator setIsTrackingCleanupProgress:]
-[MFMailMigrator emlxCountPreMigration]
-[MFMailMigrator setEmlxCountPreMigration:]
-[MFMailMigrator emlxCountPostMigration]
-[MFMailMigrator setEmlxCountPostMigration:]
-[MFMailMigrator lostAndFoundEmlxCount]
-[MFMailMigrator setLostAndFoundEmlxCount:]
-[MFMailMigrator messageCountPreMigration]
-[MFMailMigrator setMessageCountPreMigration:]
-[MFMailMigrator .cxx_destruct]
-[_MFZipStream initWithDestinationPath:]
-[_MFZipStream dealloc]
-[_MFZipStream appendData:]
-[_MFZipStream closeStream]
+[NSObject(MainThreadMessaging) _mf_mainThreadPerform:]
+[NSObject(MainThreadMessaging) mf_performBlockOnMainThread:waitUntilDone:]
-[NSNotificationCenter(MainThreadPosting) postNotificationInMainThread:]
-[MFMessageAddressee initWithDisplayName:address:type:message:]
-[MFMessageAddressee isEqual:]
-[MFMessageAddressee hash]
-[MFMessageAddressee formattedAddress]
-[MFMessageAddressee displayName]
-[MFMessageAddressee setDisplayName:]
-[MFMessageAddressee address]
-[MFMessageAddressee setAddress:]
-[MFMessageAddressee objectSpecifier]
-[MFMessageAddressee message]
-[MFMessageAddressee setMessage:]
-[MFMessageAddressee type]
-[MFMessageAddressee .cxx_destruct]
+[MFMessageContext sharedContext]
___33+[MFMessageContext sharedContext]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMessageContext init]
-[MFMessageContext dealloc]
-[MFMessageContext async_setFlagsFromDictionary:forMessages:]
___61-[MFMessageContext async_setFlagsFromDictionary:forMessages:]_block_invoke
___61-[MFMessageContext async_setFlagsFromDictionary:forMessages:]_block_invoke_2
___copy_helper_block_36
___destroy_helper_block_37
-[MFMessageContext async_setFlagWithKey:state:forMessages:]
-[MFMessageContext async_setJunkMailLevel:forMessages:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___55-[MFMessageContext async_setJunkMailLevel:forMessages:]_block_invoke
___55-[MFMessageContext async_setJunkMailLevel:forMessages:]_block_invoke_2
___copy_helper_block_59
___destroy_helper_block_60
___55-[MFMessageContext async_setJunkMailLevel:forMessages:]_block_invoke62
-[MFMessageContext async_cacheHeaderAndBodyForMessage:monitor:]
___63-[MFMessageContext async_cacheHeaderAndBodyForMessage:monitor:]_block_invoke
___63-[MFMessageContext async_cacheHeaderAndBodyForMessage:monitor:]_block_invoke_2
___63-[MFMessageContext async_cacheHeaderAndBodyForMessage:monitor:]_block_invoke_3
___copy_helper_block_95
___destroy_helper_block_96
___copy_helper_block_115
___destroy_helper_block_116
-[MFMessageContext filesystemQueue]
-[MFMessageContext waitingQueue]
-[MFMessageContext .cxx_destruct]
-[MFMessageCriterion(ApplescriptRuleCriterion) ruleType]
-[MFMessageCriterion(ApplescriptRuleCriterion) setRuleType:]
-[MFMessageCriterion(ApplescriptRuleCriterion) ruleHeader]
-[MFMessageCriterion(ApplescriptRuleCriterion) setRuleHeader:]
-[MFMessageCriterion(ApplescriptRuleCriterion) ruleQualifier]
-[MFMessageCriterion(ApplescriptRuleCriterion) setRuleQualifier:]
-[MFMessageCriterion(ApplescriptRuleCriterion) ruleExpression]
-[MFMessageCriterion(ApplescriptRuleCriterion) setRuleExpression:]
+[MFMessageCriterion initialize]
+[MFMessageCriterion messagesInConversationCriterionWithConversationIDs:]
-[MFMessageCriterion initWithDictionary:andRemoveRecognizedKeysIfMutable:]
-[MFMessageCriterion originalGroupUniqueID]
-[MFMessageCriterion isEqual:]
-[MFMessageCriterion hash]
-[MFMessageCriterion isEquivalent:]
___35-[MFMessageCriterion isEquivalent:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMessageCriterion dictionaryRepresentation]
-[MFMessageCriterion setCriterionIdentifier:]
-[MFMessageCriterion recursiveGroupUniqueIDs]
-[MFMessageCriterion _headersRequiredForEvaluation]
-[MFMessageCriterion addHeadersRequiredForRoutingToArray:]
-[MFMessageCriterion _evaluateDateCriterion:]
-[MFMessageCriterion _evaluateHeaderCriterion:]
-[MFMessageCriterion _evaluateBodyCriterion:fetchBody:needsBody:]
-[MFMessageCriterion _evaluateAddressBookCriterion:]
-[MFMessageCriterion _doesGroup:containSender:]
-[MFMessageCriterion _evaluateMemberOfGroupCriterion:]
-[MFMessageCriterion _evaluateMemberOfVIPSendersCriterion:]
-[MFMessageCriterion _evaluateAccountCriterion:]
-[MFMessageCriterion _evaluateAddressHistoryCriterion:]
___55-[MFMessageCriterion _evaluateAddressHistoryCriterion:]_block_invoke
___copy_helper_block_378
___destroy_helper_block_379
+[MFMessageCriterion _updateAddressDisplayNames:]
-[MFMessageCriterion _evaluateFullNameCriterion:]
-[MFMessageCriterion _evaluateIsDigitallySignedCriterion:]
-[MFMessageCriterion _evaluateIsEncryptedCriterion:]
-[MFMessageCriterion _evaluateMessageTypeCriterion:]
-[MFMessageCriterion _evaluatePriorityIsNormalCriterion:]
-[MFMessageCriterion _evaluatePriorityIsHighCriterion:]
-[MFMessageCriterion _evaluatePriorityIsLowCriterion:]
-[MFMessageCriterion _evaluateJunkMailHeaders:]
-[MFMessageCriterion _evaluateJunkMailCriterion:fetchBody:needsBody:]
-[MFMessageCriterion _evaluateAttachmentCriterion:fetchBody:needsBody:]
-[MFMessageCriterion _evaluateAttachmentTypeCriterion:fetchBody:needsBody:]
-[MFMessageCriterion _evaluateCompoundCriterion:]
-[MFMessageCriterion _evaluateFlagCriterion:]
-[MFMessageCriterion _evaluateMailboxCriterion:]
-[MFMessageCriterion _evaluateGmailLabelCriterion:]
-[MFMessageCriterion _mailboxURLString:satisfiesQualifier:forExpression:]
-[MFMessageCriterion _evaluateSpecialMailboxCriterion:]
-[MFMessageCriterion _evaluateFlaggedStatusCriterion:]
-[MFMessageCriterion doesMessageSatisfyRuleEvaluationCriterion:fetchBody:needsBody:]
-[MFMessageCriterion _evaluateMessage:fetchBody:needsBody:]
-[MFMessageCriterion evaluateMessage:]
+[MFMessageCriterion criterionTypeForString:]
+[MFMessageCriterion stringForCriterionType:]
-[MFMessageCriterion hasExpression]
-[MFMessageCriterion allowsEmptyExpression]
-[MFMessageCriterion hasQualifier]
-[MFMessageCriterion isValid:options:]
-[MFMessageCriterion containsSpotlightCriterion]
-[MFMessageCriterion emailAddressesForVIPCriterion]
-[MFMessageCriterion emailAddressesForGroupCriterion]
-[MFMessageCriterion criterionByExpandingGroup]
-[MFMessageCriterion criterionByExpandingSpecialMailboxCriterion]
-[MFMessageCriterion _containsCriterion:]
-[MFMessageCriterion containsLastViewedDateCriterion]
-[MFMessageCriterion containsIncludeConversationsCriterion]
-[MFMessageCriterion containsMessageIsNotInATrashMailboxCriterion]
-[MFMessageCriterion containsRelativeDateCriteria]
-[MFMessageCriterion containsAddressBookCriteria]
-[MFMessageCriterion specialMailboxTypeCode]
-[MFMessageCriterion setSpecialMailboxTypeCode:]
-[MFMessageCriterion groupUniqueID]
-[MFMessageCriterion setGroupUniqueID:]
-[MFMessageCriterion .cxx_destruct]
+[MFMessageDeliverer newWithMessage:]
+[MFMessageDeliverer deliverMessage:askForReadReceipt:]
+[MFMessageDeliverer deliverMessage:]
-[MFMessageDeliverer initWithMessage:]
-[MFMessageDeliverer account]
-[MFMessageDeliverer setAccount:]
-[MFMessageDeliverer headersForDelivery]
-[MFMessageDeliverer _headersForDeliveryFromHeaders:]
-[MFMessageDeliverer deliverAsynchronously]
-[MFMessageDeliverer deliverSynchronously]
___42-[MFMessageDeliverer deliverSynchronously]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMessageDeliverer deliverMessageHeaderData:bodyData:toRecipients:]
-[MFMessageDeliverer delegate]
-[MFMessageDeliverer setDelegate:]
-[MFMessageDeliverer askForReadReceipt]
-[MFMessageDeliverer setAskForReadReceipt:]
-[MFMessageDeliverer message]
-[MFMessageDeliverer setMessage:]
-[MFMessageDeliverer deliveryStatus]
-[MFMessageDeliverer setDeliveryStatus:]
-[MFMessageDeliverer .cxx_destruct]
-[MFMessageReplyGenerator dealloc]
-[MFMessageReplyGenerator generateMessageWithType:originalMessage:newContent:forwardHeaders:completionHandler:]
___111-[MFMessageReplyGenerator generateMessageWithType:originalMessage:newContent:forwardHeaders:completionHandler:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMessageReplyGenerator observeValueForKeyPath:ofObject:change:context:]
___74-[MFMessageReplyGenerator observeValueForKeyPath:ofObject:change:context:]_block_invoke
___copy_helper_block_176
___destroy_helper_block_177
-[MFMessageReplyGenerator documentView]
-[MFMessageReplyGenerator setDocumentView:]
-[MFMessageReplyGenerator completionHandler]
-[MFMessageReplyGenerator setCompletionHandler:]
-[MFMessageReplyGenerator contentToAdd]
-[MFMessageReplyGenerator setContentToAdd:]
-[MFMessageReplyGenerator attributionLine]
-[MFMessageReplyGenerator setAttributionLine:]
-[MFMessageReplyGenerator messageHeaders]
-[MFMessageReplyGenerator setMessageHeaders:]
-[MFMessageReplyGenerator me]
-[MFMessageReplyGenerator setMe:]
-[MFMessageReplyGenerator .cxx_destruct]
+[MFMessageRouter initialize]
+[MFMessageRouter writeRulesTimer]
+[MFMessageRouter setWriteRulesTimer:]
+[MFMessageRouter scheduleWriteRules]
+[MFMessageRouter _unScheduleWriteRules]
+[MFMessageRouter observeValueForKeyPath:ofObject:change:context:]
+[MFMessageRouter _updateICalRule:]
+[MFMessageRouter _setupAddInvitationDefault]
+[MFMessageRouter _iCalSettingChangedFromICal:]
+[MFMessageRouter _hasColorRules]
+[MFMessageRouter colorChangeCounter]
+[MFMessageRouter setColorChangeCounter:]
+[MFMessageRouter enqueueColorRulesDidChange]
+[MFMessageRouter _colorRuleExistsAfterRule:]
___45+[MFMessageRouter _colorRuleExistsAfterRule:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[MFMessageRouter colorsUpdateDynamically]
___42+[MFMessageRouter colorsUpdateDynamically]_block_invoke
+[MFMessageRouter ruleAffectingColorsDidChange:]
+[MFMessageRouter ruleDidChange:]
+[MFMessageRouter _skipAOSJunkFilter]
___37+[MFMessageRouter _skipAOSJunkFilter]_block_invoke
+[MFMessageRouter mailboxWillBeRenamedOrInvalidated]
+[MFMessageRouter _mailboxBecameInvalid:]
+[MFMessageRouter _accountWillBeDeleted:]
+[MFMessageRouter _mailboxWasRenamed:]
+[MFMessageRouter defaultAppleEmailAddresses]
+[MFMessageRouter _defaultSortRules]
+[MFMessageRouter iCalRule]
+[MFMessageRouter _setICalRule:]
+[MFMessageRouter _sortRulesFromDictionaryRepresentations:junkRule:iCalRule:]
+[MFMessageRouter _sortRuleDictionaryRepresentations]
+[MFMessageRouter _setupSortRules]
___34+[MFMessageRouter _setupSortRules]_block_invoke
___copy_helper_block_316
___destroy_helper_block_317
+[MFMessageRouter _readRulesFromDisk]
___37+[MFMessageRouter _readRulesFromDisk]_block_invoke
___copy_helper_block_341
___destroy_helper_block_342
+[MFMessageRouter _writeRulesToDiskInBackground]
+[MFMessageRouter _synchronouslyWriteRulesToDisk]
___49+[MFMessageRouter _synchronouslyWriteRulesToDisk]_block_invoke
___copy_helper_block_363
___destroy_helper_block_364
+[MFMessageRouter rules]
+[MFMessageRouter activeRules]
+[MFMessageRouter numberOfRules]
+[MFMessageRouter ruleAtIndex:]
+[MFMessageRouter removeRuleAtIndex:]
+[MFMessageRouter insertRule:atIndex:]
+[MFMessageRouter addRule:]
+[MFMessageRouter removeRule:]
+[MFMessageRouter _updateUnrecognizedRulesAfterAddingIndex:]
+[MFMessageRouter _updateUnrecognizedRulesAfterRemovingIndex:]
+[MFMessageRouter tryToReconnectAutoDeactivatedRules]
+[MFMessageRouter loadDestinationMailboxes]
+[MFMessageRouter _mailboxListingChanged:]
+[MFMessageRouter headersRequiredForRouting]
+[MFMessageRouter headersRequiredForRoutingDidChange]
+[MFMessageRouter _putRulesThatWantsToHandleMessage:intoArray:colorRulesOnly:fetchingBody:needsBody:]
+[MFMessageRouter colorForMessage:highlightTextUsingColor:]
+[MFMessageRouter junkMailBehavior]
+[MFMessageRouter setJunkMailBehavior:]
+[MFMessageRouter evaluateJunkMailBehaviorFromRules]
+[MFMessageRouter _ensureJunkRuleBehaviorMatchesPreference]
+[MFMessageRouter routeJunkMessagesInMailboxes:]
_routeMessagesAccordingToRule
+[MFMessageRouter _junkMailRuleForBehavior:abCriterion:ahCriterion:fnCriterion:]
+[MFMessageRouter junkMailRule]
+[MFMessageRouter setJunkMailRule:]
+[MFMessageRouter userJunkMailRule]
+[MFMessageRouter defaultJunkMailRule]
+[MFMessageRouter _safeToMarkAsNotJunkRule]
-[MFMessageRouter _routeMessagesIndividually]
+[MFMessageRouter reloadRules]
-[MFMessageRouter routeMessages:fromStores:fetchingBodies:messagesNeedingBodies:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___81-[MFMessageRouter routeMessages:fromStores:fetchingBodies:messagesNeedingBodies:]_block_invoke
___copy_helper_block_582
___destroy_helper_block_583
___81-[MFMessageRouter routeMessages:fromStores:fetchingBodies:messagesNeedingBodies:]_block_invoke598
___copy_helper_block_605
___destroy_helper_block_606
-[MFMessageRouter asynchronouslyRouteMessages:]
-[MFMessageRouter _routeQueuedMessages]
-[MFMessageRouter waitForRoutingToFinish]
-[MFMessageRouter setEstimatedNumberOfMessagesToRoute:]
+[MFMessageRouter junkMailEvaluationAfterRules]
+[MFMessageRouter setJunkMailEvaluationAfterRules:]
+[MFMessageRouter junkMailTrustHeaders]
+[MFMessageRouter setJunkMailTrustHeaders:]
+[MFMessageRouter junkMailHeaderFlags]
+[MFMessageRouter _applyRulesToMailboxes:]
+[MFMessageRouter applyRulesAsynchronouslyToMailboxes:]
+[MFMessageRouter addInvitationsToCalendarAutomatically]
+[MFMessageRouter _addICalRule]
+[MFMessageRouter setAddInvitationsToCalendarAutomatically:]
+[MFMessageRouter addInvitationsToCalendarFromMessages:]
+[MFMessageRouter syncedRulesSyncedFile]
+[MFMessageRouter saveRulesIfNeeded]
-[MFMessageRouter store]
-[MFMessageRouter setStore:]
-[MFMessageRouter numMessagesRoutedSoFar]
-[MFMessageRouter setNumMessagesRoutedSoFar:]
-[MFMessageRouter numMessagesToBeRouted]
-[MFMessageRouter setNumMessagesToBeRouted:]
-[MFMessageRouter isUserAction]
-[MFMessageRouter setIsUserAction:]
-[MFMessageRouter .cxx_destruct]
-[_MFRoutingDictionaryContext description]
-[_MFRoutingDictionaryContext transferredOrDeleted]
-[_MFRoutingDictionaryContext setTransferredOrDeleted:]
-[_MFRoutingDictionaryContext rejectedMessages]
-[_MFRoutingDictionaryContext setRejectedMessages:]
-[_MFRoutingDictionaryContext messagesToBeDeleted]
-[_MFRoutingDictionaryContext setMessagesToBeDeleted:]
-[_MFRoutingDictionaryContext destinationStores]
-[_MFRoutingDictionaryContext setDestinationStores:]
-[_MFRoutingDictionaryContext .cxx_destruct]
+[MFMessageRouterUtilities rulesConflictResolver]
___49+[MFMessageRouterUtilities rulesConflictResolver]_block_invoke
+[MFMessageRouterUtilities sortRulesPath]
___41+[MFMessageRouterUtilities sortRulesPath]_block_invoke
___41+[MFMessageRouterUtilities sortRulesPath]_block_invoke_2
+[MFMessageRouterUtilities syncedRulesPath]
___43+[MFMessageRouterUtilities syncedRulesPath]_block_invoke
___43+[MFMessageRouterUtilities syncedRulesPath]_block_invoke_2
+[MFMessageRouterUtilities unsyncedRulesPath]
___45+[MFMessageRouterUtilities unsyncedRulesPath]_block_invoke
___45+[MFMessageRouterUtilities unsyncedRulesPath]_block_invoke_2
+[MFMessageRouterUtilities rulesActiveStatePath]
___48+[MFMessageRouterUtilities rulesActiveStatePath]_block_invoke
___48+[MFMessageRouterUtilities rulesActiveStatePath]_block_invoke_2
+[MFMessageRouterUtilities shouldSpotlightIndexJunkLevel]
+[MFMessageRouterUtilities resetShouldSpotlightIndexJunkLevel]
-[MFMessageRule(Applescript) updateIsActive]
-[MFMessageRule(Applescript) actionColorMessage]
-[MFMessageRule(Applescript) setActionColorMessage:]
-[MFMessageRule(Applescript) highlightColorValue:]
-[MFMessageRule(Applescript) actionDeleteMessage]
-[MFMessageRule(Applescript) setActionDeleteMessage:]
-[MFMessageRule(Applescript) actionForwardToAddress]
-[MFMessageRule(Applescript) setActionForwardToAddress:]
-[MFMessageRule(Applescript) actionForwardText]
-[MFMessageRule(Applescript) setActionForwardText:]
-[MFMessageRule(Applescript) actionMarkAsFlagged]
-[MFMessageRule(Applescript) setActionMarkAsFlagged:]
-[MFMessageRule(Applescript) actionMarkAsFlaggedStatus]
-[MFMessageRule(Applescript) setActionMarkAsFlaggedStatus:]
-[MFMessageRule(Applescript) actionMarkAsRead]
-[MFMessageRule(Applescript) setActionMarkAsRead:]
-[MFMessageRule(Applescript) actionPlaySound]
-[MFMessageRule(Applescript) setActionPlaySound:]
-[MFMessageRule(Applescript) actionRedirectToAddress]
-[MFMessageRule(Applescript) setActionRedirectToAddress:]
-[MFMessageRule(Applescript) actionReplyText]
-[MFMessageRule(Applescript) setActionReplyText:]
-[MFMessageRule(Applescript) actionRunApplescript]
-[MFMessageRule(Applescript) setActionRunApplescript:]
-[MFMessageRule(Applescript) ruleDescription]
-[MFMessageRule(Applescript) setRuleDescription:]
-[MFMessageRule(Applescript) insertInCriteria:atIndex:]
-[MFMessageRule(Applescript) insertInCriteria:]
-[MFMessageRule(Applescript) removeFromCriteriaAtIndex:]
-[MFMessageRule(Applescript) setAddress:forResponseType:]
+[MFMessageRule initialize]
+[MFMessageRule appleScriptLock]
-[MFMessageRule copyWithZone:]
-[MFMessageRule description]
-[MFMessageRule isEqual:]
-[MFMessageRule hash]
-[MFMessageRule isEquivalentExceptForTitleAndIDs:]
___50-[MFMessageRule isEquivalentExceptForTitleAndIDs:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMessageRule init]
___21-[MFMessageRule init]_block_invoke
-[MFMessageRule initWithRule:]
-[MFMessageRule mailboxURLStringForMailbox:]
-[MFMessageRule mailboxPathForMailboxURL:createIfNeeded:]
-[MFMessageRule initWithDictionaryRepresentation:]
-[MFMessageRule dictionaryRepresentation]
-[MFMessageRule _updateDefaultAppleEmailAddressRule]
-[MFMessageRule _appendMessages:fromSourceMailbox:toDestinationMailbox:destinationStores:rejectedMessages:messagesToBeDeleted:]
-[MFMessageRule performActionsOnMessages:sourceStores:destinationStores:transferredOrDeleted:rejectedMessages:messagesToBeDeleted:]
___131-[MFMessageRule performActionsOnMessages:sourceStores:destinationStores:transferredOrDeleted:rejectedMessages:messagesToBeDeleted:]_block_invoke
___copy_helper_block_466
___destroy_helper_block_467
-[MFMessageRule _performUserNotificationAction:]
-[MFMessageRule _performAutoResponseActionOnMessage:encrypt:includeOrignalMessageText:]
-[MFMessageRule _performAutoResponseActionOnMessages:]
-[MFMessageRule _performAppleScriptActionWithMessages:]
___55-[MFMessageRule _performAppleScriptActionWithMessages:]_block_invoke
___55-[MFMessageRule _performAppleScriptActionWithMessages:]_block_invoke_2
___55-[MFMessageRule _performAppleScriptActionWithMessages:]_block_invoke_3
___copy_helper_block_620
___destroy_helper_block_621
___copy_helper_block_626
___destroy_helper_block_627
___copy_helper_block_629
___destroy_helper_block_630
-[MFMessageRule _performAddInvitationAttachmentToCalendarActionOnMessages:]
-[MFMessageRule addHeadersRequiredForRoutingToArray:]
-[MFMessageRule doesMessageSatisfyCriteria:fetchBody:needsBody:]
-[MFMessageRule isValid:options:]
-[MFMessageRule ruleName]
-[MFMessageRule setRuleName:]
-[MFMessageRule version]
-[MFMessageRule isTerminalAction]
-[MFMessageRule isActive]
-[MFMessageRule setIsActive:]
-[MFMessageRule isActiveSyncState]
-[MFMessageRule setIsActiveSyncState:]
-[MFMessageRule allCriteriaMustBeSatisfied]
-[MFMessageRule setAllCriteriaMustBeSatisfied:]
-[MFMessageRule criteria]
-[MFMessageRule setCriteria:]
-[MFMessageRule insertObject:inCriteriaAtIndex:]
-[MFMessageRule removeObjectFromCriteriaAtIndex:]
-[MFMessageRule shouldTransferMessage]
-[MFMessageRule setShouldTransferMessage:]
-[MFMessageRule shouldCopyMessage]
-[MFMessageRule setShouldCopyMessage:]
-[MFMessageRule _destinationMailbox:withURL:createIfNeeded:setUsingBlock:]
-[MFMessageRule _setDestinationIvar:toDestinationMailbox:destinationURLIvar:]
-[MFMessageRule _destinationMailboxCreateIfNeeded:]
___51-[MFMessageRule _destinationMailboxCreateIfNeeded:]_block_invoke
___copy_helper_block_737
___destroy_helper_block_738
-[MFMessageRule destinationMailbox]
-[MFMessageRule setDestinationMailbox:]
-[MFMessageRule _copyDestinationMailboxCreateIfNeeded:]
___55-[MFMessageRule _copyDestinationMailboxCreateIfNeeded:]_block_invoke
___copy_helper_block_745
___destroy_helper_block_746
-[MFMessageRule copyDestinationMailbox]
-[MFMessageRule setCopyDestinationMailbox:]
-[MFMessageRule _tryToGetMailboxForURLString:]
-[MFMessageRule tryToReconnectDestinationIfNeeded]
-[MFMessageRule invalidateDestinationMailboxesForURLString:]
-[MFMessageRule appleScriptDestinationMailbox]
-[MFMessageRule appleScriptCopyDestinationMailbox]
-[MFMessageRule _evaluateIfNeeded:andSetUsingBlock:]
-[MFMessageRule setAppleScriptCopyDestinationMailbox:]
___54-[MFMessageRule setAppleScriptCopyDestinationMailbox:]_block_invoke
___copy_helper_block_755
___destroy_helper_block_756
-[MFMessageRule setAppleScriptDestinationMailbox:]
___50-[MFMessageRule setAppleScriptDestinationMailbox:]_block_invoke
___copy_helper_block_760
___destroy_helper_block_761
-[MFMessageRule flagsToApply]
-[MFMessageRule setFlagsToApply:]
-[MFMessageRule appleScriptPath]
-[MFMessageRule setAppleScriptPath:]
-[MFMessageRule color]
-[MFMessageRule setColor:]
-[MFMessageRule highlightTextUsingColor]
-[MFMessageRule setHighlightTextUsingColor:]
-[MFMessageRule affectsColorEvaluation]
-[MFMessageRule autoResponseType]
-[MFMessageRule setAutoResponseType:]
-[MFMessageRule autoResponseRecipients]
-[MFMessageRule setAutoResponseRecipients:]
-[MFMessageRule responseMessage]
-[MFMessageRule handleDidChangeIfNeeded]
-[MFMessageRule handleDidChange]
-[MFMessageRule setResponseMessage:]
-[MFMessageRule soundPath]
-[MFMessageRule setSoundPath:]
-[MFMessageRule shouldStopEvaluatingRules]
-[MFMessageRule setShouldStopEvaluatingRules:]
-[MFMessageRule shouldNotifyUser]
-[MFMessageRule setShouldNotifyUser:]
-[MFMessageRule addInvitationAttachmentToCalendar]
-[MFMessageRule setAddInvitationAttachmentToCalendar:]
-[MFMessageRule shouldSendNotification]
-[MFMessageRule setShouldSendNotification:]
-[MFMessageRule isEqualToRule:]
+[MFMessageRule isRuleDictionaryCompatible:]
-[MFMessageRule objectSpecifier]
-[MFMessageRule uniqueId]
-[MFMessageRule setUniqueId:]
-[MFMessageRule otherInfo]
-[MFMessageRule isJunkMailRule]
-[MFMessageRule setIsJunkMailRule:]
-[MFMessageRule isSafeToMarkAsNotJunkRule]
-[MFMessageRule setIsSafeToMarkAsNotJunkRule:]
-[MFMessageRule isCalendarRule]
-[MFMessageRule setIsCalendarRule:]
-[MFMessageRule didChange]
-[MFMessageRule setDidChange:]
-[MFMessageRule .cxx_destruct]
+[MFMessageRuleCriterion noJunkCriterion]
+[MFMessageRuleCriterion noTrashCriterion]
+[MFMessageRuleCriterion noSentCriterion]
+[MFMessageRuleCriterion conversationsCriterion]
-[MFMessageRuleCriterion setRuleType:]
-[MFMessageRuleCriterion setRuleQualifier:]
-[MFMessageRuleCriterion setRuleExpression:]
-[MFMessageRuleCriterion setCriterionIdentifier:]
-[MFMessageRuleCriterion objectSpecifier]
-[MFMessageRuleCriterion rule]
-[MFMessageRuleCriterion setRule:]
-[MFMessageRuleCriterion .cxx_destruct]
___MFGetComparatorFromCompareFunction_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMessageSortingInformation dealloc]
-[MFMessageSortingInformation isSortedAscending]
-[MFMessageSortingInformation setIsSortedAscending:]
-[MFMessageSortingInformation skipAutomaticSecondarySort]
-[MFMessageSortingInformation setSkipAutomaticSecondarySort:]
-[MFMessageSortingInformation sortContext]
-[MFMessageSortingInformation setSortContext:]
-[MFMessageSortingInformation sortValues]
-[MFMessageSortingInformation setSortValues:]
-[MFMessageSortingValue colorForSort]
-[MFMessageSortingValue dateLastViewedAsTimeIntervalSince1970]
-[MFMessageSortingValue messageFlags]
-[MFMessageSortingValue senderDisplayName]
-[MFMessageSortingValue messageSize]
-[MFMessageSortingValue numberOfAttachments]
-[MFMessageSortingValue subject]
-[MFMessageSortingValue subjectPrefixLength]
-[MFMessageSortingValue to]
-[MFMessageSortingValue dateReceivedAsTimeIntervalSince1970]
-[MFMessageSortingValue dateSentAsTimeIntervalSince1970]
-[MFMessageSortingValue mailbox]
-[MFMessageSortingValue uidForSort]
-[MFMessageSortingValue libraryID]
+[MFMessageSortingValue equivalentSortsForSort:]
+[MFMessageSortingValue addSortData:forMessages:sortOrder:withDelegate:]
+[MFMessageSortingValue copySortDataForMessages:sortOrders:includeDataForAutomaticSecondarySort:withDelegate:]
+[MFMessageSortingValue _automaticSecondarySortForPrimarySort:]
+[MFMessageSortingValue mutableCopyOfSortData:]
___47+[MFMessageSortingValue mutableCopyOfSortData:]_block_invoke
___copy_helper_block_173
___destroy_helper_block_174
+[MFMessageSortingValue _newSortOrderDictionary]
___48+[MFMessageSortingValue _newSortOrderDictionary]_block_invoke
+[MFMessageSortingValue removeMessage:fromSortData:]
___52+[MFMessageSortingValue removeMessage:fromSortData:]_block_invoke
___copy_helper_block_194
___destroy_helper_block_195
+[MFMessageSortingValue addMessage:toSortData:withDelegate:]
___60+[MFMessageSortingValue addMessage:toSortData:withDelegate:]_block_invoke
___copy_helper_block_198
___destroy_helper_block_199
+[MFMessageSortingValue addMessages:toSortData:withDelegate:]
___61+[MFMessageSortingValue addMessages:toSortData:withDelegate:]_block_invoke
___copy_helper_block_201
___destroy_helper_block_202
+[MFMessageSortingValue removeEverythingExceptMessages:fromSortData:]
___69+[MFMessageSortingValue removeEverythingExceptMessages:fromSortData:]_block_invoke
___copy_helper_block_206
___destroy_helper_block_207
-[_MFMessageSortingValueSender dealloc]
-[_MFMessageSortingValueSender description]
-[_MFMessageSortingValueSender senderDisplayName]
-[_MFMessageSortingValueSender setSenderDisplayName:]
-[_MFMessageSortingValueColor description]
-[_MFMessageSortingValueColor colorForSort]
-[_MFMessageSortingValueColor setColorForSort:]
-[_MFMessageSortingValueDateLastViewed description]
-[_MFMessageSortingValueDateLastViewed dateLastViewedAsTimeIntervalSince1970]
-[_MFMessageSortingValueDateLastViewed setDateLastViewedAsTimeIntervalSince1970:]
-[_MFMessageSortingValueMessageFlags description]
-[_MFMessageSortingValueMessageFlags messageFlags]
-[_MFMessageSortingValueMessageFlags setMessageFlags:]
-[_MFMessageSortingValueMessageSize description]
-[_MFMessageSortingValueMessageSize messageSize]
-[_MFMessageSortingValueMessageSize setMessageSize:]
-[_MFMessageSortingValueNumberOfAttachments description]
-[_MFMessageSortingValueNumberOfAttachments numberOfAttachments]
-[_MFMessageSortingValueNumberOfAttachments setNumberOfAttachments:]
-[_MFMessageSortingValueSubject dealloc]
-[_MFMessageSortingValueSubject description]
-[_MFMessageSortingValueSubject subject]
-[_MFMessageSortingValueSubject setSubject:]
-[_MFMessageSortingValueSubject subjectPrefixLength]
-[_MFMessageSortingValueSubject setSubjectPrefixLength:]
-[_MFMessageSortingValueTo dealloc]
-[_MFMessageSortingValueTo description]
-[_MFMessageSortingValueTo to]
-[_MFMessageSortingValueTo setTo:]
-[_MFMessageSortingValueDateReceived description]
-[_MFMessageSortingValueDateReceived dateReceivedAsTimeIntervalSince1970]
-[_MFMessageSortingValueDateReceived setDateReceivedAsTimeIntervalSince1970:]
-[_MFMessageSortingValueDateSent description]
-[_MFMessageSortingValueDateSent dateSentAsTimeIntervalSince1970]
-[_MFMessageSortingValueDateSent setDateSentAsTimeIntervalSince1970:]
-[_MFMessageSortingValueMailbox dealloc]
-[_MFMessageSortingValueMailbox description]
-[_MFMessageSortingValueMailbox mailbox]
-[_MFMessageSortingValueMailbox setMailbox:]
-[_MFMessageSortingValueLibraryID description]
-[_MFMessageSortingValueLibraryID libraryID]
-[_MFMessageSortingValueLibraryID setLibraryID:]
-[MFCachedMailboxInfo init]
-[MFCachedMailboxInfo dealloc]
-[MFCachedMailboxInfo updateWithMessage:]
-[MFCachedMailboxInfo mailboxID]
-[MFCachedMailboxInfo setMailboxID:]
-[MFCachedMailboxInfo mailboxType]
-[MFCachedMailboxInfo setMailboxType:]
-[MFCachedMailboxInfo mailbox]
-[MFCachedMailboxInfo setMailbox:]
_compareMessagesByReadStatus
_compareMessagesBySubject
_compareMessagesByDateReceived
_compareMessagesBySender
_compareMessagesByNumberOfAttachments
_compareMessagesByReceiver
_compareMessagesByFlags
_compareMessagesByDateSent
_compareMessagesByLocation
_compareMessagesByColor
_compareMessagesBySize
_compareMessagesByDateLastViewed
_compareMessagesByUniqueID
_compareMessagesByDate
_compareStringValues
_compareSubjects
+[MFMessageStore initialize]
+[MFMessageStore numberOfCurrentlyOpenStores]
+[MFMessageStore descriptionOfOpenStores]
+[MFMessageStore _storeCreationMarker]
+[MFMessageStore _copyRawAvailableStoreForMailbox:wantsCreate:shouldCreate:]
+[MFMessageStore currentlyAvailableStoreForMailbox:]
+[MFMessageStore currentlyAvailableStoresForAccount:]
+[MFMessageStore registerAvailableStore:forMailbox:]
+[MFMessageStore removeStoreFromCache:]
-[MFMessageStore queueSaveChangesInvocation]
-[MFMessageStore willDeallocPerformingInStoreCacheLock:]
+[MFMessageStore createEmptyStoreIfNeededForPath:notIndexable:]
+[MFMessageStore createEmptyStoreForPath:]
+[MFMessageStore storeAtPathIsWritable:]
+[MFMessageStore cheapStoreAtPathIsEmpty:]
-[MFMessageStore init]
-[MFMessageStore initWithMailbox:readOnly:createEmptyStore:]
-[MFMessageStore initWithAccount:]
-[MFMessageStore initWithMailbox:readOnly:]
-[MFMessageStore _messageStoreCommonInit]
-[MFMessageStore copyWithZone:]
-[MFMessageStore dealloc]
-[MFMessageStore reset]
___23-[MFMessageStore reset]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMessageStore resetAllMessages]
-[MFMessageStore openAsynchronously]
-[MFMessageStore openAsynchronouslyWithOptions:]
-[MFMessageStore openSynchronously]
-[MFMessageStore openSynchronouslyUpdatingMetadata:]
-[MFMessageStore updateMetadataAsynchronously]
-[MFMessageStore updateMetadata]
-[MFMessageStore cleanupAsynchronously]
-[MFMessageStore _cleanupSynchronouslyIfCancelOpenPosted]
-[MFMessageStore cleanupSynchronously]
-[MFMessageStore willOpen]
-[MFMessageStore didOpenWithMessages:]
-[MFMessageStore cancelOpen]
-[MFMessageStore writeUpdatedMessageDataToDisk]
-[MFMessageStore saveChanges]
-[MFMessageStore invalidateSavingChanges:]
-[MFMessageStore account]
-[MFMessageStore mailbox]
-[MFMessageStore createDummyMailboxIfNecessary]
-[MFMessageStore isSmartMailbox]
-[MFMessageStore allMailboxRepresentations]
-[MFMessageStore isOpened]
-[MFMessageStore displayName]
-[MFMessageStore displayNameForLogging]
-[MFMessageStore description]
-[MFMessageStore isTrash]
-[MFMessageStore isFirstTimeSync]
-[MFMessageStore setIsFirstTimeSync:]
-[MFMessageStore messageFlagsDidChange:flags:]
-[MFMessageStore structureDidChange]
-[MFMessageStore messagesWereAdded:]
-[MFMessageStore messagesWereCompacted:]
-[MFMessageStore messagesWereUpdated:]
-[MFMessageStore totalCount]
-[MFMessageStore copyOfAllMessages]
-[MFMessageStore mutableCopyOfAllMessages]
-[MFMessageStore copyOfAllMessagesWithOptions:]
-[MFMessageStore setAllMessages:]
-[MFMessageStore indexOfMessageInAllMessages:]
-[MFMessageStore addMessagesToAllMessages:]
-[MFMessageStore removeAllMessagesAtIndexes:]
-[MFMessageStore removeMessageFromAllMessages:]
-[MFMessageStore _defaultRouterDestination]
-[MFMessageStore routeMessages:fetchingBodies:messagesNeedingBodies:]
-[MFMessageStore finishRoutingMessages:routed:]
___47-[MFMessageStore finishRoutingMessages:routed:]_block_invoke
___copy_helper_block_342
___destroy_helper_block_343
-[MFMessageStore routeMessages:isUserAction:fetchingBodies:messagesNeedingBodies:]
-[MFMessageStore canRebuild]
-[MFMessageStore rebuildTableOfContentsAsynchronously]
-[MFMessageStore canCompact]
-[MFMessageStore doCompact]
-[MFMessageStore deleteMessagesOlderThanNumberOfDays:compact:]
-[MFMessageStore async_deleteMessages:moveToTrash:]
___51-[MFMessageStore async_deleteMessages:moveToTrash:]_block_invoke
___copy_helper_block_395
___destroy_helper_block_396
-[MFMessageStore deleteMessages:moveToTrash:]
-[MFMessageStore undeleteMessages:movedToStore:newMessageIDs:]
-[MFMessageStore undeleteMessages:]
-[MFMessageStore deleteLastMessageWithHeaders:compactWhenDone:]
-[MFMessageStore allowsAppend]
-[MFMessageStore allowsOverwrite]
-[MFMessageStore allowsDeleteInPlace]
+[MFMessageStore succesfulMessagesFromMessages:unsuccessfulOnes:]
+[MFMessageStore copyMessages:toMailbox:shouldDelete:]
-[MFMessageStore undoAppendOfMessageIDs:]
-[MFMessageStore finishCopyOfMessages:fromStore:originalsWereDeleted:]
-[MFMessageStore appendMessages:unsuccessfulOnes:newMessageIDs:newMessages:newDocumentIDsByOld:flagsToSet:forMove:error:]
-[MFMessageStore appendMessages:unsuccessfulOnes:newMessageIDs:newMessages:flagsToSet:forMove:error:]
-[MFMessageStore appendMessages:unsuccessfulOnes:newMessageIDs:newMessages:flagsToSet:forMove:]
-[MFMessageStore appendMessages:unsuccessfulOnes:newMessageIDs:newMessages:flagsToSet:]
-[MFMessageStore appendMessages:unsuccessfulOnes:newMessageIDs:newMessages:forMove:]
-[MFMessageStore appendMessages:unsuccessfulOnes:newMessageIDs:newMessages:]
-[MFMessageStore appendMessages:unsuccessfulOnes:newMessageIDs:]
-[MFMessageStore appendMessages:unsuccessfulOnes:]
-[MFMessageStore recentMessageWithValue:forHeader:]
___51-[MFMessageStore recentMessageWithValue:forHeader:]_block_invoke
___copy_helper_block_457
___destroy_helper_block_458
___51-[MFMessageStore recentMessageWithValue:forHeader:]_block_invoke464
___copy_helper_block_467
___destroy_helper_block_468
-[MFMessageStore messagesForDocumentID:]
___40-[MFMessageStore messagesForDocumentID:]_block_invoke
___copy_helper_block_472
___destroy_helper_block_473
-[MFMessageStore messageForMessageID:]
-[MFMessageStore _numberOfMessagesToCache]
-[MFMessageStore headerDataForMessage:fetchIfNotAvailable:allowPartial:]
-[MFMessageStore headerDataForMessage:fetchIfNotAvailable:]
-[MFMessageStore headerDataForMessage:]
-[MFMessageStore headerDataForMessage:allowPartial:]
-[MFMessageStore bodyDataForMessage:fetchIfNotAvailable:allowPartial:]
-[MFMessageStore bodyDataForMessage:fetchIfNotAvailable:]
-[MFMessageStore bodyDataForMessage:]
-[MFMessageStore fullBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFMessageStore fullBodyDataForMessage:andHeaderDataIfReadilyAvailable:]
-[MFMessageStore fullBodyDataForMessage:]
-[MFMessageStore bodyForMessage:fetchIfNotAvailable:]
-[MFMessageStore bodyForMessage:fetchIfNotAvailable:updateFlags:]
-[MFMessageStore bodyForMessage:fetchIfNotAvailable:updateFlags:allowPartial:]
-[MFMessageStore updateBodyFlagsForMessage:body:]
-[MFMessageStore headersForMessage:]
-[MFMessageStore headersForMessage:fetchIfNotAvailable:]
-[MFMessageStore hasCachedDataForMimePart:]
-[MFMessageStore uniquedString:]
-[MFMessageStore setUniquedStrings:]
-[MFMessageStore addUniquedStrings:]
-[MFMessageStore colorForMessage:]
-[MFMessageStore supportsSnippets]
-[MFMessageStore snippetsForMessages:]
-[MFMessageStore saveSnippetsForMessages:]
___42-[MFMessageStore saveSnippetsForMessages:]_block_invoke
___copy_helper_block_560
___destroy_helper_block_561
-[MFMessageStore setPrimitiveFlagsFromDictionary:forMessages:]
___62-[MFMessageStore setPrimitiveFlagsFromDictionary:forMessages:]_block_invoke
___copy_helper_block_573
___destroy_helper_block_574
-[MFMessageStore async_setFlagsFromDictionary:forMessages:]
-[MFMessageStore async_setGmailLabelsFromDictionary:forMessages:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___65-[MFMessageStore async_setGmailLabelsFromDictionary:forMessages:]_block_invoke
___65-[MFMessageStore async_setGmailLabelsFromDictionary:forMessages:]_block_invoke_2
___copy_helper_block_604
___destroy_helper_block_605
___copy_helper_block_608
___destroy_helper_block_609
___65-[MFMessageStore async_setGmailLabelsFromDictionary:forMessages:]_block_invoke613
___copy_helper_block_616
___destroy_helper_block_617
-[MFMessageStore async_setLocalFlagsForMessages:]
___49-[MFMessageStore async_setLocalFlagsForMessages:]_block_invoke
___49-[MFMessageStore async_setLocalFlagsForMessages:]_block_invoke_2
___copy_helper_block_621
___destroy_helper_block_622
___copy_helper_block_625
___destroy_helper_block_626
-[MFMessageStore async_setFlagWithKey:state:forMessages:]
-[MFMessageStore setColor:highlightTextOnly:forMessages:]
-[MFMessageStore startSynchronization]
-[MFMessageStore updateNumberOfAttachmentsForMessages:]
-[MFMessageStore updateNumberOfAttachmentsAndColorsForMessages:]
-[MFMessageStore updateMessageColorsSynchronouslyForMessages:]
-[MFMessageStore async_setJunkMailLevel:forMessages:trainJunkMailDatabase:userRecorded:]
-[MFMessageStore sendResponseType:forMeetingMessage:]
-[MFMessageStore status]
-[MFMessageStore fetchSynchronously]
-[MFMessageStore fetchSynchronouslyForKnownChanges]
-[MFMessageStore invalidateSyncEngine]
-[MFMessageStore suggestSortOrder:ascending:]
-[MFMessageStore sortOrder]
-[MFMessageStore isSortedAscending]
-[MFMessageStore invalidateMessage:]
-[MFMessageStore invalidateMessages:]
+[MFMessageStore _autosaveMessageStore:]
-[MFMessageStore _cancelAutosave]
-[MFMessageStore _setNeedsAutosave]
-[MFMessageStore _fetchHeaderDataForMessage:fetchIfNotAvailable:]
-[MFMessageStore _fetchHeaderDataForMessage:fetchIfNotAvailable:allowPartial:]
-[MFMessageStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFMessageStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:allowPartial:]
-[MFMessageStore _fetchBodyForMessage:fetchIfNotAvailable:updateFlags:allowPartial:]
-[MFMessageStore _fetchBodyForMessage:updateFlags:]
-[MFMessageStore _shouldCallCompactWhenClosing]
-[MFMessageStore _isReadyToBeInvalidated]
-[MFMessageStore setStoreState:fromState:]
-[MFMessageStore storeState]
-[MFMessageStore _invalidate]
-[MFMessageStore _invalidateInBackground]
-[MFMessageStore _lockFilePath]
-[MFMessageStore _acquireLockFile]
-[MFMessageStore _removeLockFile]
-[MFMessageStore flushAllCaches]
___32-[MFMessageStore flushAllCaches]_block_invoke
___copy_helper_block_693
___destroy_helper_block_694
-[MFMessageStore _flushAllMessageData]
-[MFMessageStore _rebuildTableOfContentsSynchronously]
-[MFMessageStore _setOrGetBody:forMessage:updateFlags:]
-[MFMessageStore _invalidateObjectCachesForKey:]
-[MFMessageStore _setOrGetValue:forKey:inCache:]
-[MFMessageStore _cachedBodyForMessage:valueIfNotPresent:]
-[MFMessageStore _cachedHeadersForMessage:valueIfNotPresent:]
-[MFMessageStore _cachedBodyDataForMessage:valueIfNotPresent:]
-[MFMessageStore _cachedHeaderDataForMessage:valueIfNotPresent:]
-[MFMessageStore updateMessageColorsSynchronouslyForMessages:postingNotification:]
-[MFMessageStore updateMessages:updateColor:updateNumberOfAttachments:]
-[MFMessageStore _setBackgroundColorForMessages:textColorForMessages:]
_setColorForMessage
-[MFMessageStore _setFlagsAndColorForMessages:]
-[MFMessageStore messagesWereAdded:conversationsMembers:duringOpen:options:]
-[MFMessageStore _updateFlagForMessage:key:value:]
-[MFMessageStore _updateFlagColor:forMessage:]
-[MFMessageStore attachmentsDirectoryForMessage:]
-[MFMessageStore setNumberOfAttachments:isSigned:isEncrypted:forMessage:]
-[MFMessageStore dataForMimePart:]
-[MFMessageStore isReadOnly]
-[MFMessageStore setIsReadOnly:]
-[MFMessageStore openMonitor]
-[MFMessageStore setOpenMonitor:]
-[MFMessageStore hasUnsavedChangesToMessageData]
-[MFMessageStore setHasUnsavedChangesToMessageData:]
-[MFMessageStore forceInvalidation]
-[MFMessageStore setForceInvalidation:]
-[MFMessageStore deleteQueue]
-[MFMessageStore openAndCloseMailboxQueue]
-[MFMessageStore .cxx_destruct]
-[MFMessageStore(ReleaseHack) retain]
-[MFMessageStore(ReleaseHack) retainCount]
-[MFMessageStore(ReleaseHack) release]
-[MFMessageStore(ScriptingSupport) objectSpecifier]
-[MFMessageStore(ScriptingSupport) objectSpecifierForMessage:]
-[MFLibraryStore(ScriptingSupport) objectSpecifierForMessage:]
-[MFLibraryIMAPStore(ScriptingSupport) objectSpecifierForMessage:]
+[MFMessageThread messagesByExpandingThreads:]
-[MFMessageThread initWithMessages:]
-[MFMessageThread init]
-[MFMessageThread appliedFlagColors]
-[MFMessageThread dealloc]
-[MFMessageThread _changeDictionaryForTaskID:toModify:]
-[MFMessageThread conversationID]
-[MFMessageThread options]
+[MFMessageThread _newestFirstEnumerator:]
-[MFMessageThread _filteredMessagesEnumerator]
-[MFMessageThread addMessages:usingComparator:]
-[MFMessageThread deleteMessages:]
___34-[MFMessageThread deleteMessages:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFMessageThread commitPendingChangesForTaskID:]
-[MFMessageThread discardPendingChangesForTaskID:]
-[MFMessageThread flagsHaveChanged]
-[MFMessageThread updateSubjectEtc]
-[MFMessageThread formattedUnreadMessageCount]
-[MFMessageThread numberOfFilteredMessages]
-[MFMessageThread filteredMessages]
-[MFMessageThread filteredMessageAtIndex:]
-[MFMessageThread numberOfUnreadMessages]
-[MFMessageThread setNewestMessage:]
-[MFMessageThread setNewestReceivedMessage:]
-[MFMessageThread setNewestSentMessage:]
-[MFMessageThread setOldestMessage:]
-[MFMessageThread to]
-[MFMessageThread subject]
-[MFMessageThread dateReceivedAsTimeIntervalSince1970]
-[MFMessageThread dateSentAsTimeIntervalSince1970]
-[MFMessageThread dateLastViewedAsTimeIntervalSince1970]
-[MFMessageThread sender]
-[MFMessageThread sendersString]
-[MFMessageThread senderDisplayName]
-[MFMessageThread senderDisplayNameInfo]
-[MFMessageThread messageID]
-[MFMessageThread dataSource]
-[MFMessageThread messageBody]
-[MFMessageThread messageSize]
-[MFMessageThread numberOfAttachments]
-[MFMessageThread _updateFilteredMessages:]
-[MFMessageThread copyWithZone:]
-[MFMessageThread isThread]
-[MFMessageThread isOpen]
-[MFMessageThread setIsOpen:]
-[MFMessageThread willBeDeletedIfMessagesAreDeleted:]
-[MFMessageThread sortMessagesUsingComparator:]
-[MFMessageThread invertOrderOfMessages]
-[MFMessageThread oldestMessage]
-[MFMessageThread newestMessage]
-[MFMessageThread newestSentMessage]
-[MFMessageThread newestReadMessage]
-[MFMessageThread snippetMessage]
-[MFMessageThread _setJunkFlags]
-[MFMessageThread messageWithHighestLibraryID]
+[MFMessageThread _storeForMailbox:fromStores:cache:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___53+[MFMessageThread _storeForMailbox:fromStores:cache:]_block_invoke
___copy_helper_block_291
___destroy_helper_block_292
-[MFMessageThread mailbox]
-[MFMessageThread gmailLabels]
+[MFMessageThread findNewestMessageInMessages:]
+[MFMessageThread findNewestReceivedMessageInMessages:]
+[MFMessageThread findNewestSentMessageInMessages:]
+[MFMessageThread findNewestReadMessageInMessages:]
+[MFMessageThread findSnippetMessageInMessages:]
+[MFMessageThread findMessageWithHighestLibraryIDInMessages:]
+[MFMessageThread sendersStringForMessages:]
-[MFMessageThread isThreadOpen]
-[MFMessageThread setIsThreadOpen:]
-[MFMessageThread showDateInSubject]
-[MFMessageThread setShowDateInSubject:]
-[MFMessageThread .cxx_destruct]
-[MCMessage(Threads) conversationID]
-[MCMessage(Threads) conversationPosition]
-[MCMessage(Threads) appliedFlagColors]
-[MFNeXTStore init]
-[MFNeXTStore dealloc]
-[MFNeXTStore _releaseMboxData]
-[MFNeXTStore openSynchronouslyUpdatingMetadata:]
-[MFNeXTStore incomingMessages]
-[MFNeXTStore messagesForImporter]
-[MFNeXTStore updateMetadata]
-[MFNeXTStore _lockFilePath]
-[MFNeXTStore _invalidate]
-[MFNeXTStore writeUpdatedMessageDataToDisk]
-[MFNeXTStore canRebuild]
-[MFNeXTStore _rebuildTableOfContentsSynchronously]
-[MFNeXTStore _flushAllMessageData]
-[MFNeXTStore tableOfContents:loadedMessages:]
-[MFNeXTStore _resetAllMessages]
-[MFNeXTStore messageForMessageID:]
-[MFNeXTStore _fetchHeaderDataForMessage:fetchIfNotAvailable:allowPartial:]
_copyIncomingMboxData
_copyMboxData
-[MFNeXTStore _fetchHeaderDataForMessage:fetchIfNotAvailable:]
-[MFNeXTStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:allowPartial:]
-[MFNeXTStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFNeXTStore canCompact]
-[MFNeXTStore doCompact]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___24-[MFNeXTStore doCompact]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFNeXTStore _deleteAttachments:]
-[MFNeXTStore _appendMessage:toFile:]
-[MFNeXTStore _addIDsForAppendedMessages:toArray:]
-[MFNeXTStore _appendMessages:successes:failures:mboxName:tableOfContents:]
_makeMboxPathWritable
-[MFNeXTStore allowsAppend]
-[MFNeXTStore appendMessages:unsuccessfulOnes:newMessageIDs:newMessages:flagsToSet:forMove:error:]
-[MFNeXTStore undoAppendOfMessageIDs:]
-[MFNeXTStore _incorporateMailFromIncoming]
-[MFNeXTStore _writeMessagesToIncomingMail:unsuccessfulOnes:newMessageIDs:]
+[MFNeXTStore createEmptyStoreForPath:]
+[MFNeXTStore storeAtPathIsWritable:]
+[MFNeXTStore cheapStoreAtPathIsEmpty:]
-[MFNeXTStore suggestSortOrder:ascending:]
-[MFNeXTStore sortOrder]
-[MFNeXTStore isSortedAscending]
-[MFNeXTStore _shouldCallCompactWhenClosing]
-[MFNeXTStore rebuildingTOC]
-[MFNeXTStore setRebuildingTOC:]
-[MFNeXTStore .cxx_destruct]
+[NSAppleScript(MessageRuleAdditions) _newScriptAtPath:errorInfo:]
+[NSAppleScript(MessageRuleAdditions) appleEventDescriptionWithName:andArguments:]
+[NSAppleScript(MessageRuleAdditions) appleEventDescriptionWithEventClass:eventID:andArguments:]
+[NSAppleScript(MessageRuleAdditions) appleScriptLock]
-[NSAppleEventDescriptor(MessageRuleAdditions) isSendToSelfEvent]
-[NSArray(AppleScriptConveniences) arrayByEvaluatingObjectSpecifiers]
-[NSDictionary(MailAdditions) mutableSomewhatDeepCopy]
-[NSFileManager(MailAdditions) canWriteToDirectoryAtPath:]
-[NSFileManager(MailAdditions) canWriteToFileAtPath:]
-[NSFileManager(MailAdditions) pathsAtDirectory:beginningWithString:]
-[NSFileManager(MailAdditions) deleteFilesInSortedArray:matchingPrefix:fromDirectory:]
-[NSFileManager(MailAdditions) pathByResolvingAliasesInPath:]
-[NSFileManager(MailAdditions) localizedFullPath:]
-[NSFileManager(MailAdditions) pathByUniquingPath:]
-[NSFileManager(MailAdditions) uniquePathInDirectory:withName:extension:]
-[NSFileManager(MailAdditions) mf_subpathsOfDirectoryAtPath:]
+[NSFileWrapper(HFSExtensions) _quarantinePropertiesQueue]
___58+[NSFileWrapper(HFSExtensions) _quarantinePropertiesQueue]_block_invoke
+[NSFileWrapper(HFSExtensions) loadMessageExtensions]
-[NSFileWrapper(HFSExtensions) couldConfuseWindowsClients]
-[NSFileWrapper(HFSExtensions) setShouldBeViewedInline:]
__changeFileAttributes
-[NSFileWrapper(HFSExtensions) shouldBeViewedInline]
-[NSFileWrapper(HFSExtensions) remoteAccessMimeType]
-[NSFileWrapper(HFSExtensions) setSavedPath:]
-[NSFileWrapper(HFSExtensions) savedPath]
-[NSFileWrapper(HFSExtensions) _Message_writeToURL:options:originalContentsURL:error:]
___86-[NSFileWrapper(HFSExtensions) _Message_writeToURL:options:originalContentsURL:error:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[NSFileWrapper(HFSExtensions) _Message_initWithURL:options:error:]
-[NSFileWrapper(HFSExtensions) _Message_setPreferredFilename:]
-[NSFileWrapper(HFSExtensions) _Message_updateFromPath:checkOnly:exists:]
+[NSFileWrapper(UniquePaths) uniquedPathForFile:inDirectory:]
+[NSSound(MailAdditions) _playNextSound]
+[NSSound(MailAdditions) _playSound]
+[NSSound(MailAdditions) sound:didFinishPlaying:]
+[NSSound(MailAdditions) _setupPlayList]
___40+[NSSound(MailAdditions) _setupPlayList]_block_invoke
+[NSSound(MailAdditions) _addSoundOrPathToPlayList:playImmediately:]
+[NSSound(MailAdditions) addSoundToPlayList:playImmediately:]
+[NSSound(MailAdditions) addSoundPathToPlayList:playImmediately:]
+[NSSound(MailAdditions) validPathToSound:]
+[NSSound(MailAdditions) systemLibrarySoundsDirs]
+[NSSound(MailAdditions) librarySoundsDirs]
+[NSSound(MailAdditions) networkLibrarySoundsDirs]
+[NSSound(MailAdditions) tildeLibrarySoundsDirs]
+[NSSound(MailAdditions) containerLibrarySoundsDirs]
+[NSSound(MailAdditions) appendSoundsToPaths:]
+[NSSound(MailAdditions) soundsAtPaths:]
-[NSSound(MailAdditions) _playAsMailSound]
-[NSString(MailFrameworkAdditions) hexIntValue]
-[NSString(MailFrameworkAdditions) hexLongLongValue]
-[NSString(MailFrameworkAdditions) smartCapitalizedString]
-[NSString(MailFrameworkAdditions) stringByReplacingCharactersInSet:withCharacter:]
-[NSString(MailFrameworkAdditions) stringByChangingBodyTagToDiv]
-[NSString(MailFrameworkAdditions) stringByRemovingLineEndingsForHTML]
-[NSString(MailFrameworkAdditions) specialSlash]
-[NSString(MailFrameworkAdditions) stringByReplacingSlashesWithSpecialSlashes]
-[NSString(MailFrameworkAdditions) stringByReplacingSpecialSlashesWithSlashes]
-[NSString(MailFrameworkAdditions) stringByReplacingSpecialSlashesWith:]
-[NSString(MailFrameworkAdditions) containsOnlyWhitespace]
-[NSString(MailFrameworkAdditions) containsOnlyBreakingWhitespace]
+[NSString(MailFrameworkAdditions) stringWithData:encoding:]
-[NSString(MailFrameworkAdditions) fileSystemString]
-[NSString(MailFrameworkAdditions) foldedStringForSuggestionsOriginatedExactMatchSearches]
+[NSString(MailFrameworkAdditions) stringWithAttachmentCharacter]
___65+[NSString(MailFrameworkAdditions) stringWithAttachmentCharacter]_block_invoke
-[NSString(MailFrameworkAdditions) compareAsInts:]
-[NSString(MailFrameworkAdditions) encodedMessageIDString]
-[NSString(MailFrameworkAdditions) uniqueFilenameWithRespectToFilenames:]
-[NSString(MailFrameworkAdditions) firstLine]
-[NSString(MailFrameworkAdditions) secondToLastPathComponent]
-[NSString(MailFrameworkAdditions) hasPrefixIgnoreCaseAndDiacritics:]
-[NSString(MailFrameworkAdditions) validURLString]
-[NSString(MailFrameworkAdditions) percentEscapedURLString]
-[NSString(MailFrameworkAdditions) isEqualExceptForFinalSlash:]
+[MFParentalControlAccount allocWithZone:]
+[MFParentalControlAccount parentalControlAccount]
___50+[MFParentalControlAccount parentalControlAccount]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFParentalControlAccount dealloc]
+[MFParentalControlAccount originalAccountForIncomingMailbox:]
+[MFParentalControlAccount allMailboxes]
+[MFParentalControlAccount mailboxForAccount:]
+[MFParentalControlAccount storeForMailbox:]
+[MFParentalControlAccount storeForAccount:]
+[MFParentalControlAccount _mailboxNameForAccount:]
-[MFParentalControlAccount storeClassForMailbox:]
-[MFParentalControlAccount mailboxPathExtension]
+[MFParentalControlManager allocWithZone:]
+[MFParentalControlManager sharedManager]
___41+[MFParentalControlManager sharedManager]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFParentalControlManager init]
-[MFParentalControlManager dealloc]
-[MFParentalControlManager parentalControlDirectory]
-[MFParentalControlManager isParentEmailAvailable]
-[MFParentalControlManager headersRequiredForParentalControl]
-[MFParentalControlManager deleteAccount:]
-[MFParentalControlManager _cleanupPCStoresAfterDelay:]
-[MFParentalControlManager _approveSenders:sourcePCMailbox:destinationAccount:]
___79-[MFParentalControlManager _approveSenders:sourcePCMailbox:destinationAccount:]_block_invoke
___copy_helper_block_128
___destroy_helper_block_129
-[MFParentalControlManager _rejectSenders:sourcePCMailbox:]
-[MFParentalControlManager _openStoreForPCMailbox:keepOpen:]
-[MFParentalControlManager _openStoreForPCMailbox:]
-[MFParentalControlManager _openPCStoreForAccount:]
-[MFParentalControlManager _makeRequestMessageForMessage:isOutgoingMessage:]
-[MFParentalControlManager _deliverMessage:]
-[MFParentalControlManager _recentRequestsFilePath]
-[MFParentalControlManager _recentRequestsNoLock]
-[MFParentalControlManager _hasRecentlySentPermissionRequestForSender:]
-[MFParentalControlManager _removeSendersFromRecentRequests:]
-[MFParentalControlManager _hasPendingRequestForSender:]
-[MFParentalControlManager _requestApprovalForIncomingMessage:srcStore:pcStore:messageInPCStore:]
-[MFParentalControlManager _reallyRequestApprovalForIncomingMessage:srcStore:pcStore:messageInPCStore:]
-[MFParentalControlManager _approveAddresses:responseFromAccount:]
-[MFParentalControlManager _rejectAddresses:responseFromAccount:]
-[MFParentalControlManager _cleanupPCStore:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___44-[MFParentalControlManager _cleanupPCStore:]_block_invoke
___copy_helper_block_354
___destroy_helper_block_355
-[MFParentalControlManager _reallyCleanupPCStores]
-[MFParentalControlManager _cleanupPCStores]
-[MFParentalControlManager processIncomingMessage:messageIsParentResponse:]
-[MFParentalControlManager haveEmailsBeenApproved:unapprovedOnes:]
-[MFParentalControlManager _deliverApprovalRequestMessage:forOutgoingMessage:]
-[MFParentalControlManager _requestApprovalForOutgoingMessage:srcStore:]
-[MFParentalControlManager requestApprovalForOutgoingMessage:]
-[MFParentalControlManager saveChanges]
-[MFParentalControlManager _makeResponseMessageToRequest:approve:]
-[MFParentalControlManager _deliverResponseMessage:requestMessage:]
-[MFParentalControlManager _respondToRequest:approve:]
-[MFParentalControlManager approveRequest:]
-[MFParentalControlManager rejectRequest:]
-[MFParentalControlManager isEmail:inEmailList:]
-[MFParentalControlManager _approveEmailListChanged:]
-[MFParentalControlManager isDirty]
-[MFParentalControlManager setIsDirty:]
-[MFParentalControlManager _saveChangesWithDelay]
-[MFParentalControlManager tasks]
-[MFParentalControlManager .cxx_destruct]
-[MCMessage(ParentalControl) isParentResponseMessage:isRejected:requestedAddresses:requestIsForSenders:]
-[MCMessage(ParentalControl) isChildRequestMessage:requestIsForSenders:childAddress:permissionRequestState:]
-[MCMessage(ParentalControl) isChildRequestMessage]
-[MCMessage(ParentalControl) setPermissionRequestState:]
+[MFParentalControlSettings allocWithZone:]
+[MFParentalControlSettings sharedInstance]
___43+[MFParentalControlSettings sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFParentalControlSettings init]
-[MFParentalControlSettings dealloc]
-[MFParentalControlSettings _updateCachedDataForEnabledState:approvedList:postNotification:]
+[MFParentalControlSettings isEmail:inEmailList:]
__indexOfAddressInList
-[MFParentalControlSettings _reallyHandleDefaultsChange]
-[MFParentalControlSettings _defaultsDidChange]
-[MFParentalControlSettings _approveEmailListChanged:]
-[MFParentalControlSettings isParentalControlEnabled]
-[MFParentalControlSettings parentEmails]
-[MFParentalControlSettings isParentEmail:]
-[MFParentalControlSettings _isSelfEmail:]
-[MFParentalControlSettings _approvedEmails]
-[MFParentalControlSettings hasEmailBeenApproved:]
-[MFParentalControlSettings haveEmailsBeenApproved:unapprovedOnes:]
-[MFParentalControlSettings _dictionaryFromEmail:]
-[MFParentalControlSettings _approveEmail:]
-[MFParentalControlSettings approveEmails:]
-[MFParentalControlSettings _rejectEmail:]
-[MFParentalControlSettings rejectEmails:]
-[MFParentalControlSettings parentalControlEnabledTimeIntervalSince1970]
____indexOfAddressInList_block_invoke
___copy_helper_block_184
___destroy_helper_block_185
-[MFParentalControlStore _shouldCallCompactWhenClosing]
-[MFParentalControlStore _defaultRouterDestination]
-[MFParentalControlStore realAccount]
-[MFParentalControlStore setParentalControlMessageState:forMessage:]
-[MFParentalControlStore setParentalControlMessageState:forMessages:]
-[MFParentalControlStore saveChanges]
+[NSString(MailPathUtils) pathWithDirectory:filename:extension:]
-[NSString(MailPathUtils) uniquePathWithMaximumLength:]
-[NSString(MailPathUtils) deletePath]
-[NSString(MailPathUtils) isSubdirectoryOfPath:]
-[NSString(MailPathUtils) stringByReallyAbbreviatingWithTildeInPath]
___68-[NSString(MailPathUtils) stringByReallyAbbreviatingWithTildeInPath]_block_invoke
-[NSString(MailPathUtils) betterStringByResolvingSymlinksInPath]
___64-[NSString(MailPathUtils) betterStringByResolvingSymlinksInPath]_block_invoke
+[NSString(MailPathUtils) resetBetterStringByResolvingSymlinksInPath]
+[MFPersistenceManager tildeUnresolvedBaseMailDirectory]
+[MFPersistenceManager unresolvedBaseMailDirectory]
+[MFPersistenceManager baseMailDirectory]
+[MFPersistenceManager nonContainerizedMailRootDirectory]
+[MFPersistenceManager persistenceLayoutIsV1]
+[MFPersistenceManager resetV1Layout]
+[MFPersistenceManager supportDirectory]
+[MFPersistenceManager mailDataDirectoryName]
+[MFPersistenceManager mailAccountDirectory]
+[MFPersistenceManager defaultMailDirectory]
+[MFPersistenceManager mailDataDirectory]
+[MFPersistenceManager mailDataSupportDirectory]
+[MFPersistenceManager autoDownloadDirectoryPath]
___49+[MFPersistenceManager autoDownloadDirectoryPath]_block_invoke
+[MFPersistenceManager adjustAccountPathForV2:]
+[MFPersistenceManager _adjustPathForV2:usingPrefix:]
___53+[MFPersistenceManager _adjustPathForV2:usingPrefix:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFPOPAccount(Applescript) deleteMessagesWhenMovedFromInbox]
-[MFPOPAccount(Applescript) setDeleteMessagesWhenMovedFromInbox:]
-[MFPOPAccount(Applescript) deleteMessagesOnServer]
-[MFPOPAccount(Applescript) setDeleteMessagesOnServer:]
-[MFPOPAccount(Applescript) mailboxes]
-[MFPOPAccount(Applescript) objectSpecifierForMailbox:]
-[MFPOPAccount(Applescript) valueInMailboxesWithName:]
-[MFPOPAccount initWithAccountInfo:]
-[MFPOPAccount newConnectedConnectionDiscoveringBestSettings:withConnectTimeout:readWriteTimeout:]
-[MFPOPAccount authenticatedConnection]
-[MFPOPAccount connectAndAuthenticate:]
-[MFPOPAccount _configureFetcherObject]
-[MFPOPAccount fetchSynchronously]
-[MFPOPAccount resetFetcher]
-[MFPOPAccount isFirstTimeSync]
-[MFPOPAccount setIsFirstTimeSync:]
-[MFPOPAccount releaseAllConnections]
+[MFPOPAccount accountTypeString]
-[MFPOPAccount iaServiceType]
-[MFPOPAccount canGoOffline]
-[MFPOPAccount setIsOffline:]
-[MFPOPAccount _readCustomInfoFromMailboxCache:]
+[MFPOPAccount standardPorts]
+[MFPOPAccount standardSSLPorts]
-[MFPOPAccount defaultPortNumber]
-[MFPOPAccount defaultSecurePortNumber]
-[MFPOPAccount saslProfileName]
-[MFPOPAccount keychainProtocol]
-[MFPOPAccount requiresAuthentication]
-[MFPOPAccount storeClassForMailbox:]
-[MFPOPAccount mailboxPathExtension]
-[MFPOPAccount primaryMailbox]
-[MFPOPAccount containsMailboxes]
-[MFPOPAccount canCreateNewMailboxes]
-[MFPOPAccount canMailboxBeRenamed:]
-[MFPOPAccount _setPath:]
-[MFPOPAccount bigMessageWarningSize]
-[MFPOPAccount setBigMessageWarningSize:]
-[MFPOPAccount messageDeletionPolicy]
-[MFPOPAccount setMessageDeletionPolicy:]
-[MFPOPAccount delayedMessageDeletionInterval]
-[MFPOPAccount setDelayedMessageDeletionInterval:]
-[MFPOPAccount deleteMessagesNow:]
-[MFPOPAccount deleteSeenMessagesNow]
-[MFPOPAccount insertInMailboxes:atIndex:]
-[MFPOPAccount acquireConnectionActivityLock]
-[MFPOPAccount relinquishConnectionActivityLock]
-[MFPOPAccount archiveMailboxCreateIfNeeded:]
-[MFPOPAccount canAuthenticateWithScheme:]
-[MFPOPAccount newSeenMessagesManager]
-[MFPOPAccount _addAccountAndSeenMessagesToMessageManager]
-[MFPOPAccount _URLPersistenceScheme]
-[MFPOPAccount _infoForMatchingURL:]
-[MFPOPAccount storeForMailbox:createIfNeeded:]
-[MFPOPAccount logPOPFetchTimes]
-[MFPOPAccount fetcher]
-[MFPOPAccount setFetcher:]
-[MFPOPAccount fetchMonitor]
-[MFPOPAccount setFetchMonitor:]
-[MFPOPAccount fetcherNeedsReset]
-[MFPOPAccount setFetcherNeedsReset:]
-[MFPOPAccount deletingMessages]
-[MFPOPAccount setDeletingMessages:]
-[MFPOPAccount hasDoneBackgroundSynchronization]
-[MFPOPAccount setHasDoneBackgroundSynchronization:]
-[MFPOPAccount .cxx_destruct]
-[MFPOPConnection init]
-[MFPOPConnection setDelegate:context:]
-[MFPOPConnection account]
-[MFPOPConnection setAccount:]
-[MFPOPConnection _setupConnection]
-[MFPOPConnection _startTLS]
-[MFPOPConnection _completeConnectionWithResult:]
-[MFPOPConnection authenticationMechanisms]
-[MFPOPConnection authenticate]
-[MFPOPConnection _authenticateWithSaslClient:]
-[MFPOPConnection _authenticateWithNonPlainTextSchemes]
-[MFPOPConnection _authenticateWithPlainTextSchemes]
-[MFPOPConnection _supportsPlainTextSchemes]
-[MFPOPConnection quit]
-[MFPOPConnection _quit]
-[MFPOPConnection _capabilities]
-[MFPOPConnection _supportsStartTLS]
-[MFPOPConnection _supportsUSER]
-[MFPOPConnection _supportsAPOP]
-[MFPOPConnection _supportsResponseCodes]
-[MFPOPConnection _supportsAuthResponseCode]
-[MFPOPConnection _apopWithUsername:password:]
-[MFPOPConnection _user:]
-[MFPOPConnection _pass:]
-[MFPOPConnection messagesAvailable]
-[MFPOPConnection doStat]
-[MFPOPConnection getMessageNumbers:andMessageIdsByNumber:]
-[MFPOPConnection sizeOfMessageNumber:]
-[MFPOPConnection _getListResults]
-[MFPOPConnection messageIDForMessageNumber:]
-[MFPOPConnection setMessageID:forMessageNumber:]
-[MFPOPConnection newMessageHeaderForMessageNumber:]
-[MFPOPConnection getTopOfMessageNumber:intoMutableData:]
-[MFPOPConnection fetchMessages:totalBytes:]
___44-[MFPOPConnection fetchMessages:totalBytes:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFPOPConnection _retr:]
-[MFPOPConnection _newDataForMessage:ofSize:informDelegate:]
-[MFPOPConnection deleteMessagesOnServer:]
___42-[MFPOPConnection deleteMessagesOnServer:]_block_invoke
___copy_helper_block_448
___destroy_helper_block_449
-[MFPOPConnection dele:]
-[MFPOPConnection _sendCommand:dontLogIndex:withArguments:]
-[MFPOPConnection _readAndParseSingleLineResponseIsCapabilities:isAuthentication:]
-[MFPOPConnection _copyResponseLineData]
-[MFPOPConnection _parseErrorFromResponseData:isCapabilitiesError:isAuthenticationError:]
-[MFPOPConnection _parseSingleLineResponse:status:responseCode:textRange:humanReadableText:]
-[MFPOPConnection _readMultilineResponseWithMaxSize:intoMutableData:informDelegate:]
-[MFPOPConnection context]
-[MFPOPConnection setContext:]
-[MFPOPConnection numberOfMessagesToFetch]
-[MFPOPConnection setNumberOfMessagesToFetch:]
-[MFPOPConnection numberOfMessagesFetched]
-[MFPOPConnection setNumberOfMessagesFetched:]
-[MFPOPConnection totalBytesToFetch]
-[MFPOPConnection setTotalBytesToFetch:]
-[MFPOPConnection totalBytesReceived]
-[MFPOPConnection setTotalBytesReceived:]
-[MFPOPConnection currentlyFetchingMessage]
-[MFPOPConnection setCurrentlyFetchingMessage:]
-[MFPOPConnection activityMonitorKey]
-[MFPOPConnection setActivityMonitorKey:]
-[MFPOPConnection numberOfMessagesAvailable]
-[MFPOPConnection setNumberOfMessagesAvailable:]
-[MFPOPConnection connectionShouldPrefetchMessages]
-[MFPOPConnection setConnectionShouldPrefetchMessages:]
-[MFPOPConnection .cxx_destruct]
-[MFPOPMessage initWithPOP3FetchStore:]
-[MFPOPMessage account]
-[MFPOPMessage mailbox]
-[MFPOPMessage dataSource]
-[MFPOPMessage setDataSource:]
-[MFPOPMessage messageSize]
-[MFPOPMessage messageDataIncludingFromSpace:newDocumentID:]
-[MFPOPMessage remoteMailboxURLString]
-[MFPOPMessage originalMailboxURLString]
-[MFPOPMessage messageNumber]
-[MFPOPMessage setMessageNumber:]
-[MFPOPMessage messageID]
-[MFPOPMessage setMessageID:]
-[MFPOPMessage messageData]
-[MFPOPMessage setMessageData:]
-[MFPOPMessage .cxx_destruct]
-[MFPOPSizeEngine initWithAccount:]
-[MFPOPSizeEngine dealloc]
-[MFPOPSizeEngine allMessageIDs]
-[MFPOPSizeEngine infoWithKey:forMessageWithID:]
-[MFPOPSizeEngine _newMessageInfoFromMessageHeaders:]
-[MFPOPSizeEngine _remoteMailboxURL]
-[MFPOPSizeEngine _runWorkerThread]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___35-[MFPOPSizeEngine _runWorkerThread]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___35-[MFPOPSizeEngine _runWorkerThread]_block_invoke187
___copy_helper_block_206
___destroy_helper_block_207
-[MFPOPSizeEngine _prepareToRefresh]
-[MFPOPSizeEngine _fetchCompleted:]
-[MFPOPSizeEngine _deleteServerMessagesCompleted:]
-[MFPOPSizeEngine _messageFlagsChanged:]
-[MFPOPSizeEngine .cxx_destruct]
-[MFPOPStore initWithAccount:]
-[MFPOPStore init]
-[MFPOPStore initWithMailbox:readOnly:createEmptyStore:]
-[MFPOPStore account]
-[MFPOPStore deleteMessages:]
___29-[MFPOPStore deleteMessages:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFPOPStore fetchSynchronously]
___32-[MFPOPStore fetchSynchronously]_block_invoke
___copy_helper_block_192
___destroy_helper_block_193
-[MFPOPStore _handleStoreFinishedFirstTimeSync:]
-[MFPOPStore _createDirectoryIfNeeded]
-[MFPOPStore _authenticatedConnection]
-[MFPOPStore _backgroundFetchFailed:]
-[MFPOPStore _firstAndLast:onConnection:alreadySeen:]
-[MFPOPStore _messageIDForNumber:serverIdsByNumber:connection:]
-[MFPOPStore _shouldDeleteSeenMessage:messageID:deletionPolicy:cutoffDate:url:inbox:]
-[MFPOPStore _removeDeletedMessagesWithNumbers:fromSeenMessageManager:connection:]
___82-[MFPOPStore _removeDeletedMessagesWithNumbers:fromSeenMessageManager:connection:]_block_invoke
___copy_helper_block_313
___destroy_helper_block_314
-[MFPOPStore _deleteMessagesMarkedForDeletionUsingManager:]
-[MFPOPStore _closeConnection:]
-[MFPOPStore _addMessageNumberToDelete:]
-[MFPOPStore _clearMessageNumbersToDelete]
-[MFPOPStore _copyMessageNumbersToDelete]
-[MFPOPStore mailbox]
-[MFPOPStore isOpened]
-[MFPOPStore displayName]
-[MFPOPStore _fetchHeaderDataForMessage:fetchIfNotAvailable:allowPartial:]
-[MFPOPStore _fetchHeaderDataForMessage:fetchIfNotAvailable:]
-[MFPOPStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:allowPartial:]
-[MFPOPStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:]
-[MFPOPStore messageForMessageID:]
-[MFPOPStore writeUpdatedMessageDataToDisk]
-[MFPOPStore _setNeedsAutosave]
-[MFPOPStore _cancelAutosave]
-[MFPOPStore messageFlagsDidChange:flags:]
-[MFPOPStore connectionShouldPrefetchMessages]
-[MFPOPStore connection:receivedNumberOfBytes:]
-[MFPOPStore connection:willRetrieveMessageNumber:header:size:]
___63-[MFPOPStore connection:willRetrieveMessageNumber:header:size:]_block_invoke
___copy_helper_block_373
___destroy_helper_block_374
-[MFPOPStore connection:didRetrieveData:forMessageNumber:]
-[MFPOPStore cancel]
-[MFPOPStore _defaultRouterDestination]
-[MFPOPStore messagesWillBeRouted:]
-[MFPOPStore messagesWereRouted:]
-[MFPOPStore routerCancelled]
-[MFPOPStore setRouterCancelled:]
-[MFPOPStore .cxx_destruct]
-[MFPreparedStatement initWithString:andDb:]
-[MFPreparedStatement dealloc]
-[MFPreparedStatement sqliteFinalize]
-[MFPreparedStatement reset]
-[MFPreparedStatement clearBindings]
-[MFPreparedStatement compiled]
-[MFQuoteParser strippedQuoteBlockWithHtml:]
+[MFRecoveredMessage spotlightAttributesForBodyData:plistData:]
-[MFRecoveredMessage initWithPath:]
-[MFRecoveredMessage _initWithBodyData:]
-[MFRecoveredMessage init]
-[MFRecoveredMessage initWithURL:]
-[MFRecoveredMessage _extendedAttributes]
-[MFRecoveredMessage _loadFileDataIfNeeded]
-[MFRecoveredMessage _parseFileData:]
-[MFRecoveredMessage _parseBodyDataWithPList:]
-[MFRecoveredMessage messageID]
-[MFRecoveredMessage remoteMailboxURLString]
-[MFRecoveredMessage originalMailboxURLString]
-[MFRecoveredMessage headerDataFetchIfNotAvailable:allowPartial:]
-[MFRecoveredMessage headers]
-[MFRecoveredMessage headersIfAvailable]
-[MFRecoveredMessage messageDataIncludingFromSpace:newDocumentID:]
-[MFRecoveredMessage bodyData]
-[MFRecoveredMessage bodyDataFetchIfNotAvailable:allowPartial:]
-[MFRecoveredMessage dataForMimePart:]
-[MFRecoveredMessage hasCachedDataForMimePart:]
-[MFRecoveredMessage messageBody]
-[MFRecoveredMessage messageBodyIfAvailable]
-[MFRecoveredMessage messageBodyFetchIfNotAvailable:allowPartial:]
-[MFRecoveredMessage messageBodyUpdatingFlags:]
-[MFRecoveredMessage messageBodyForIndexing]
-[MFRecoveredMessage messageBodyIfAvailableUpdatingFlags:]
-[MFRecoveredMessage account]
-[MFRecoveredMessage mailbox]
-[MFRecoveredMessage dataSource]
-[MFRecoveredMessage setDataSource:]
-[MFRecoveredMessage remoteFlags]
-[MFRecoveredMessage messageFlags]
-[MFRecoveredMessage moreMessageFlags]
-[MFRecoveredMessage flushCachedData]
-[MFRecoveredMessage setMessageID:directory:]
-[MFRecoveredMessage description]
-[MFRecoveredMessage spotlightAttributesIncludingText:]
-[MFRecoveredMessage path]
-[MFRecoveredMessage remoteID]
-[MFRecoveredMessage setRemoteID:]
-[MFRecoveredMessage remoteMailboxURL]
-[MFRecoveredMessage setRemoteMailboxURL:]
-[MFRecoveredMessage originalMailboxURL]
-[MFRecoveredMessage setOriginalMailboxURL:]
-[MFRecoveredMessage gmailLabelIDs]
-[MFRecoveredMessage setGmailLabelIDs:]
-[MFRecoveredMessage loadedFileData]
-[MFRecoveredMessage setLoadedFileData:]
-[MFRecoveredMessage .cxx_destruct]
-[MFRecoveredStore initWithMailbox:readOnly:pathsToImport:]
-[MFRecoveredStore init]
-[MFRecoveredStore initWithMailbox:readOnly:createEmptyStore:]
-[MFRecoveredStore initWithAccount:]
-[MFRecoveredStore writeUpdatedMessageDataToDisk]
-[MFRecoveredStore messagesForImporter]
-[MFRecoveredStore pathsToImport]
-[MFRecoveredStore .cxx_destruct]
-[MFRedundantContentMarkup initWithMessage:parsedMessage:ancestorUsedForComparison:messageBodyWithRedundantTextMarkers:messageContainsRedundantText:matchedEntireAncestorContiguously:]
-[MFRedundantContentMarkup description]
-[MFRedundantContentMarkup message]
-[MFRedundantContentMarkup parsedMessage]
-[MFRedundantContentMarkup ancestorUsedForComparison]
-[MFRedundantContentMarkup messageBodyWithRedundantTextMarkers]
-[MFRedundantContentMarkup redundantContentSenderName]
-[MFRedundantContentMarkup matchedEntireAncestorContiguously]
-[MFRedundantContentMarkup messageContainsRedundantText]
-[MFRedundantContentMarkup .cxx_destruct]
-[_MFRedundantTextIdentifierAttachmentContext initWithAttachmentName:attachmentSize:attachmentIsDownloaded:]
-[_MFRedundantTextIdentifierAttachmentContext description]
-[_MFRedundantTextIdentifierAttachmentContext isEqualTo:]
-[_MFRedundantTextIdentifierAttachmentContext attachmentName]
-[_MFRedundantTextIdentifierAttachmentContext attachmentExtension]
-[_MFRedundantTextIdentifierAttachmentContext attachmentSize]
-[_MFRedundantTextIdentifierAttachmentContext attachmentIsDownloaded]
-[_MFRedundantTextIdentifierAttachmentContext .cxx_destruct]
-[_MFRedundantTextIdentifierParseContext initWithBuffer:bufferStartIndex:bufferLength:searchInForwardDirection:attachmentContextsByURL:]
-[_MFRedundantTextIdentifierParseContext description]
+[_MFRedundantTextIdentifierParseContext normalizedStringForEntity:]
+[_MFRedundantTextIdentifierParseContext normalizeEntitiesInString:]
___68+[_MFRedundantTextIdentifierParseContext normalizeEntitiesInString:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___68+[_MFRedundantTextIdentifierParseContext normalizeEntitiesInString:]_block_invoke116
___copy_helper_block_121
___destroy_helper_block_122
-[_MFRedundantTextIdentifierParseContext charactersInMessageWithCurrentIndexMarked]
-[_MFRedundantTextIdentifierParseContext remainingCharacters]
-[_MFRedundantTextIdentifierParseContext readAndAdvanceToEndOfTagIsCloseTag:shouldParseAttachmentTags:]
-[_MFRedundantTextIdentifierParseContext readElementIsCloseElement:shouldParseAttachmentTags:]
-[_MFRedundantTextIdentifierParseContext parseAttachmentFilenameFromAttribute:]
-[_MFRedundantTextIdentifierParseContext advanceToEndOfCommentIfExists]
-[_MFRedundantTextIdentifierParseContext advanceToClosingTagMatchingOpenTag:]
-[_MFRedundantTextIdentifierParseContext isBlockLevelTag:]
-[_MFRedundantTextIdentifierParseContext incrementCurrentIndex]
-[_MFRedundantTextIdentifierParseContext incrementCurrentIndexBy:]
-[_MFRedundantTextIdentifierParseContext currentCharFromBuffer]
-[_MFRedundantTextIdentifierParseContext nextCharacterToMatch]
-[_MFRedundantTextIdentifierParseContext charFromBufferAtIndex:]
-[_MFRedundantTextIdentifierParseContext advancePastNonContentTagsAndWhitespaceParsingAttachmentPlaceholders:]
-[_MFRedundantTextIdentifierParseContext readAndAdvanceToEndOfEntityIfExists]
-[_MFRedundantTextIdentifierParseContext advanceToEndOfAttachmentPlaceholderIfExists]
-[_MFRedundantTextIdentifierParseContext advanceToEndOfLine]
-[_MFRedundantTextIdentifierParseContext advanceToEndOfLine:]
-[_MFRedundantTextIdentifierParseContext resetCurrentIndex]
-[_MFRedundantTextIdentifierParseContext parseAndSanitizeAttributionLineInRange:]
-[_MFRedundantTextIdentifierParseContext buffer]
-[_MFRedundantTextIdentifierParseContext bufferStartIndex]
-[_MFRedundantTextIdentifierParseContext bufferLength]
-[_MFRedundantTextIdentifierParseContext currentIndex]
-[_MFRedundantTextIdentifierParseContext setCurrentIndex:]
-[_MFRedundantTextIdentifierParseContext startMatchIndexForCurrentLine]
-[_MFRedundantTextIdentifierParseContext setStartMatchIndexForCurrentLine:]
-[_MFRedundantTextIdentifierParseContext searchInForwardDirection]
-[_MFRedundantTextIdentifierParseContext setSearchInForwardDirection:]
-[_MFRedundantTextIdentifierParseContext startTagCharacter]
-[_MFRedundantTextIdentifierParseContext endTagCharacter]
-[_MFRedundantTextIdentifierParseContext startEntityCharacter]
-[_MFRedundantTextIdentifierParseContext endEntityCharacter]
-[_MFRedundantTextIdentifierParseContext isParsingEntity]
-[_MFRedundantTextIdentifierParseContext setIsParsingEntity:]
-[_MFRedundantTextIdentifierParseContext entityValueCharacter]
-[_MFRedundantTextIdentifierParseContext setEntityValueCharacter:]
-[_MFRedundantTextIdentifierParseContext entityStartIndex]
-[_MFRedundantTextIdentifierParseContext setEntityStartIndex:]
-[_MFRedundantTextIdentifierParseContext isParsingAttachment]
-[_MFRedundantTextIdentifierParseContext setIsParsingAttachment:]
-[_MFRedundantTextIdentifierParseContext attachmentContext]
-[_MFRedundantTextIdentifierParseContext setAttachmentContext:]
-[_MFRedundantTextIdentifierParseContext attachmentStartIndex]
-[_MFRedundantTextIdentifierParseContext setAttachmentStartIndex:]
-[_MFRedundantTextIdentifierParseContext attachmentEndIndex]
-[_MFRedundantTextIdentifierParseContext setAttachmentEndIndex:]
-[_MFRedundantTextIdentifierParseContext attachmentIsTag]
-[_MFRedundantTextIdentifierParseContext setAttachmentIsTag:]
-[_MFRedundantTextIdentifierParseContext attachmentContextsByURL]
-[_MFRedundantTextIdentifierParseContext .cxx_destruct]
-[MFRedundantTextIdentifier initWithMessage:parsedMessage:ancestorMessage:ancestorParsedMessage:]
+[MFRedundantTextIdentifier initialize]
-[MFRedundantTextIdentifier _attachmentContextsByURLforAttachmentsByURL:]
+[MFRedundantTextIdentifier _htmlMarkerForContentType:]
-[MFRedundantTextIdentifier redundantContentMarkup]
-[MFRedundantTextIdentifier .cxx_destruct]
-[_MFRedundantTextIdentifierSolutionContext initWithReply:replyStartIndex:replyLength:replyAttachmentContextsByURL:original:originalStartIndex:originalLength:originalAttachmentContextsByURL:searchInForwardDirection:]
-[_MFRedundantTextIdentifierSolutionContext description]
-[_MFRedundantTextIdentifierSolutionContext redundantRanges]
-[_MFRedundantTextIdentifierSolutionContext addRedundantRanges:]
-[_MFRedundantTextIdentifierSolutionContext redundantAttachmentStartIndexes]
-[_MFRedundantTextIdentifierSolutionContext addRedundantAttachmentStartIndexes:]
-[_MFRedundantTextIdentifierSolutionContext attributionLineRanges]
-[_MFRedundantTextIdentifierSolutionContext addAttributionLineRanges:]
-[_MFRedundantTextIdentifierSolutionContext computeRedundantRangesInReply]
-[_MFRedundantTextIdentifierSolutionContext computeAttributionRangesInReply]
___76-[_MFRedundantTextIdentifierSolutionContext computeAttributionRangesInReply]_block_invoke
_copyRegexForAttributionLineType
-[_MFRedundantTextIdentifierSolutionContext addRangeWithStart:end:toArray:]
-[_MFRedundantTextIdentifierSolutionContext contentTypeForIndex:]
-[_MFRedundantTextIdentifierSolutionContext location:isInRangeArray:startingIndex:]
-[_MFRedundantTextIdentifierSolutionContext replyBuffer]
-[_MFRedundantTextIdentifierSolutionContext replyStartIndex]
-[_MFRedundantTextIdentifierSolutionContext setReplyStartIndex:]
-[_MFRedundantTextIdentifierSolutionContext replyLength]
-[_MFRedundantTextIdentifierSolutionContext originalBuffer]
-[_MFRedundantTextIdentifierSolutionContext originalStartIndex]
-[_MFRedundantTextIdentifierSolutionContext setOriginalStartIndex:]
-[_MFRedundantTextIdentifierSolutionContext originalLength]
-[_MFRedundantTextIdentifierSolutionContext originalAttachmentContextsByURL]
-[_MFRedundantTextIdentifierSolutionContext replyAttachmentContextsByURL]
-[_MFRedundantTextIdentifierSolutionContext startingIndexForRedundantRanges]
-[_MFRedundantTextIdentifierSolutionContext setStartingIndexForRedundantRanges:]
-[_MFRedundantTextIdentifierSolutionContext startingIndexForAttributionLineRanges]
-[_MFRedundantTextIdentifierSolutionContext setStartingIndexForAttributionLineRanges:]
-[_MFRedundantTextIdentifierSolutionContext lastIndexMatchedInOriginal]
-[_MFRedundantTextIdentifierSolutionContext setLastIndexMatchedInOriginal:]
-[_MFRedundantTextIdentifierSolutionContext lastIndexMatchedInReply]
-[_MFRedundantTextIdentifierSolutionContext setLastIndexMatchedInReply:]
-[_MFRedundantTextIdentifierSolutionContext searchInForwardDirection]
-[_MFRedundantTextIdentifierSolutionContext setSearchInForwardDirection:]
-[_MFRedundantTextIdentifierSolutionContext matchedEntireOriginalContiguously]
-[_MFRedundantTextIdentifierSolutionContext setMatchedEntireOriginalContiguously:]
-[_MFRedundantTextIdentifierSolutionContext .cxx_destruct]
-[_MFRedundantTextIdentifierSolutionGenerator initWithReply:replyLength:replyAttachmentContextsByURL:original:originalLength:originalAttachmentContextsByURL:]
-[_MFRedundantTextIdentifierSolutionGenerator generateBestSolution]
-[_MFRedundantTextIdentifierSolutionGenerator generateBestSolutionInForwardDirection:replyStartIndex:originalStartIndex:]
-[_MFRedundantTextIdentifierSolutionGenerator replyBuffer]
-[_MFRedundantTextIdentifierSolutionGenerator originalBuffer]
-[_MFRedundantTextIdentifierSolutionGenerator replyLength]
-[_MFRedundantTextIdentifierSolutionGenerator originalLength]
-[_MFRedundantTextIdentifierSolutionGenerator replyAttachmentContextsByURL]
-[_MFRedundantTextIdentifierSolutionGenerator originalAttachmentContextsByURL]
-[_MFRedundantTextIdentifierSolutionGenerator .cxx_destruct]
+[MFRemoteAttachmentManager allocWithZone:]
+[MFRemoteAttachmentManager sharedInstance]
___43+[MFRemoteAttachmentManager sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFRemoteAttachmentManager init]
-[MFRemoteAttachmentManager dealloc]
-[MFRemoteAttachmentManager remoteAttachmentsByURLForMessage:allowDownloading:]
___79-[MFRemoteAttachmentManager remoteAttachmentsByURLForMessage:allowDownloading:]_block_invoke
___copy_helper_block_63
___destroy_helper_block_64
-[MFRemoteAttachmentManager _attachmentForURL:filename:mimeType:filesize:downloadDirectory:isMailDropImageArchive:isAutoArchive:allowDownloading:isMailDropIndividualImage:expirationDate:]
___187-[MFRemoteAttachmentManager _attachmentForURL:filename:mimeType:filesize:downloadDirectory:isMailDropImageArchive:isAutoArchive:allowDownloading:isMailDropIndividualImage:expirationDate:]_block_invoke
___copy_helper_block_82
___destroy_helper_block_83
___187-[MFRemoteAttachmentManager _attachmentForURL:filename:mimeType:filesize:downloadDirectory:isMailDropImageArchive:isAutoArchive:allowDownloading:isMailDropIndividualImage:expirationDate:]_block_invoke118
___copy_helper_block_125
___destroy_helper_block_126
-[MFRemoteAttachmentManager downloadQueue]
-[MFRemoteAttachmentManager .cxx_destruct]
-[MFRemoteAppendMessagesContext description]
-[MFRemoteAppendMessagesContext messages]
-[MFRemoteAppendMessagesContext setMessages:]
-[MFRemoteAppendMessagesContext flagsToSet]
-[MFRemoteAppendMessagesContext setFlagsToSet:]
-[MFRemoteAppendMessagesContext someMsgsWentToServer]
-[MFRemoteAppendMessagesContext setSomeMsgsWentToServer:]
-[MFRemoteAppendMessagesContext missedMessages]
-[MFRemoteAppendMessagesContext setMissedMessages:]
-[MFRemoteAppendMessagesContext addedMessageIDs]
-[MFRemoteAppendMessagesContext setAddedMessageIDs:]
-[MFRemoteAppendMessagesContext addedMessages]
-[MFRemoteAppendMessagesContext setAddedMessages:]
-[MFRemoteAppendMessagesContext addedDocumentIDsByOld]
-[MFRemoteAppendMessagesContext setAddedDocumentIDsByOld:]
-[MFRemoteAppendMessagesContext unreadCountDelta]
-[MFRemoteAppendMessagesContext setUnreadCountDelta:]
-[MFRemoteAppendMessagesContext destUidNext]
-[MFRemoteAppendMessagesContext setDestUidNext:]
-[MFRemoteAppendMessagesContext forMove]
-[MFRemoteAppendMessagesContext setForMove:]
-[MFRemoteAppendMessagesContext .cxx_destruct]
-[MFRemoteStore account]
-[MFRemoteStore forceResync]
-[MFRemoteStore URLString]
-[MFRemoteStore _shouldUpdateColorsAndAttachmentsAfterOpening]
-[MFRemoteStore _cachedBodyForMessage:valueIfNotPresent:]
-[MFRemoteStore _cachedHeadersForMessage:valueIfNotPresent:]
-[MFRemoteStore _cachedBodyDataForMessage:valueIfNotPresent:]
-[MFRemoteStore _cachedHeaderDataForMessage:valueIfNotPresent:]
-[MFRemoteStore willAddMessages]
-[MFRemoteStore didAddMessages]
-[MFRemoteStore enqueuedMessageChangesInExistingRequest]
-[MFRemoteStore addMessages:withMailbox:fetchBodies:oldMessagesByNewMessage:]
-[MFRemoteStore addMessages:withMailbox:fetchBodies:isInitialImport:oldMessagesByNewMessage:remoteIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:]
-[MFRemoteStore messagesForMailbox:olderThanNumberOfDays:]
-[MFRemoteStore compactMessages:]
-[MFRemoteStore messageWithLibraryID:options:]
-[MFRemoteStore updateMessagesLocally:missedMessages:newMessageIDs:]
-[MFRemoteStore appendMessages:unsuccessfulOnes:newMessageIDs:newMessages:newDocumentIDsByOld:flagsToSet:forMove:error:]
-[MFRemoteStore _doAppend:fromStore:error:]
-[MFRemoteStore _appendToServerWithContext:error:]
-[MFRemoteStore deleteMessagesOlderThanNumberOfDays:compact:]
-[MFRemoteStore undeleteMessagesWithDetails:]
-[MFRemoteStoreAccount initWithAccountInfo:]
+[MFRemoteStoreAccount powerIsUnlimited]
-[MFRemoteStoreAccount behaviorTracker]
___39-[MFRemoteStoreAccount behaviorTracker]_block_invoke
-[MFRemoteStoreAccount setDisplayName:]
-[MFRemoteStoreAccount _infoForMatchingURL:]
-[MFRemoteStoreAccount fetchSynchronously]
-[MFRemoteStoreAccount canGoOffline]
-[MFRemoteStoreAccount cachePolicy]
-[MFRemoteStoreAccount setCachePolicy:permanently:]
-[MFRemoteStoreAccount _storedCachePolicy]
-[MFRemoteStoreAccount shouldCacheAttachmentsForMessageWithDateReceived:]
+[MFRemoteStoreAccount cachePoliciesNeedUpdating]
-[MFRemoteStoreAccount storeDraftsOnServer]
___43-[MFRemoteStoreAccount storeDraftsOnServer]_block_invoke
-[MFRemoteStoreAccount setStoreDraftsOnServer:]
-[MFRemoteStoreAccount storeJunkOnServer]
-[MFRemoteStoreAccount setStoreJunkOnServer:]
-[MFRemoteStoreAccount storeJunkOnServerDefault]
-[MFRemoteStoreAccount storeSentMessagesOnServer]
___49-[MFRemoteStoreAccount storeSentMessagesOnServer]_block_invoke
-[MFRemoteStoreAccount setStoreSentMessagesOnServer:]
-[MFRemoteStoreAccount storeTrashOnServer]
-[MFRemoteStoreAccount setStoreTrashOnServer:]
-[MFRemoteStoreAccount _isMailboxTypeStoredLocally:]
-[MFRemoteStoreAccount _setStoreSpecialMailboxType:onServer:]
-[MFRemoteStoreAccount _renameLocalSpecialMailboxesToName:]
-[MFRemoteStoreAccount _localMailboxRelativePathForType:usingDisplayName:]
-[MFRemoteStoreAccount _specialMailboxWithType:create:]
-[MFRemoteStoreAccount _specialMailboxWithType:create:isLocal:]
-[MFRemoteStoreAccount _setSpecialMailbox:forType:]
-[MFRemoteStoreAccount _canEmptyMessagesFromMailbox:]
-[MFRemoteStoreAccount _writeMailboxCache]
-[MFRemoteStoreAccount _shouldCacheAggressively]
-[MFRemoteStoreAccount canBeSynchronized]
-[MFRemoteStoreAccount considerSynchronizingNow]
-[MFRemoteStoreAccount startBackgroundSynchronization]
-[MFRemoteStoreAccount _startBackgroundSynchronizationHighPriority:]
-[MFRemoteStoreAccount needToSynchronizeMailboxCaches]
-[MFRemoteStoreAccount resetNeedToSynchronizeMailboxCaches]
-[MFRemoteStoreAccount _synchronizeAccountWithServerHighPriority:]
-[MFRemoteStoreAccount _synchronizeMailboxListHighPriority:]
-[MFRemoteStoreAccount synchronizesDataWithServer]
-[MFRemoteStoreAccount didSynchronizeMailboxCachesAndFoundChanges:]
-[MFRemoteStoreAccount _synchronizeMailboxes:]
-[MFRemoteStoreAccount _addMailboxesToSynchronize:]
___51-[MFRemoteStoreAccount _addMailboxesToSynchronize:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFRemoteStoreAccount _popMailboxToSynchronize]
-[MFRemoteStoreAccount _removeAllMailboxesToSynchronize]
-[MFRemoteStoreAccount mailboxURLStringsToSynchronize]
-[MFRemoteStoreAccount _shouldSynchronizeMailbox:]
-[MFRemoteStoreAccount _synchronizeMailboxesSynchronously]
-[MFRemoteStoreAccount _checkForNewMessagesInStore:]
-[MFRemoteStoreAccount offlineCacheDirectory]
-[MFRemoteStoreAccount presentOverQuotaAlert]
-[MFRemoteStoreAccount synchronizationThreadIsRunning]
-[MFRemoteStoreAccount setSynchronizationThreadIsRunning:]
-[MFRemoteStoreAccount addedEAToAccountFolder]
-[MFRemoteStoreAccount setAddedEAToAccountFolder:]
-[MFRemoteStoreAccount .cxx_destruct]
-[MFRemoteStoreSizeEngine initWithAccount:]
-[MFRemoteStoreSizeEngine dealloc]
-[MFRemoteStoreSizeEngine usageForMailbox:]
-[MFRemoteStoreSizeEngine _prepareToRefresh]
-[MFRemoteStoreSizeEngine _shouldStartWorkerThread]
-[MFRemoteStoreSizeEngine _refetchListing:]
-[MFRemoteStoreSizeEngine _handleMailboxSizeChanged:]
-[MFRemoteStoreSizeEngine .cxx_destruct]
-[MFRemoteStoreSizeEngine(Internal) _getSizeForMailbox:]
-[MFRemoteStoreSizeEngine(Internal) _changeUsageInfo:forMailbox:refetchQuotas:]
-[MFRemoteStoreSizeEngine(Internal) _sizeChangedForMailbox:]
-[MFRemoteStoreSizeEngine(Internal) _mailboxSizeChanged:]
-[MFRemoteStoreSizeEngine(Internal) _mailboxBecameInvalid:]
-[MFRemoteStoreSizeEngine(Internal) countOfMailboxesToSize]
-[MFRemoteStoreSizeEngine(Internal) popMailboxToSize]
-[MFRemoteStoreSizeEngine(Internal) addMailboxesToSizeFromArray:]
-[MFRemoteStoreSizeEngine(Internal) allUsageByMailboxKeys]
+[MFSeenMessage automaticallyNotifiesObserversForKey:]
-[MFSeenMessage setAccount:]
-[MFSeenMessage dateSeen]
-[MFSeenMessage setDateSeen:]
-[MFSeenMessage messageID]
-[MFSeenMessage setMessageID:]
-[MFSeenMessage shouldDeleteFromServer]
-[MFSeenMessage setShouldDeleteFromServer:]
-[MFSeenMessage isOnServer]
-[MFSeenMessage setIsOnServer:]
-[MFSeenMessagesManager initWithAccountID:createAccount:]
-[MFSeenMessagesManager init]
-[MFSeenMessagesManager _accountForAccountID:]
-[MFSeenMessagesManager _addAccountWithID:]
-[MFSeenMessagesManager seenMessageForMessageID:]
-[MFSeenMessagesManager countOfSeenMessages]
-[MFSeenMessagesManager addMessageID:dateSeen:]
-[MFSeenMessagesManager removeMessageIDs:]
-[MFSeenMessagesManager seenMessages]
-[MFSeenMessagesManager messagesToBeDeletedFromServer]
-[MFSeenMessagesManager removeServerDeletedMessages]
-[MFSeenMessagesManager removeMessagesNotOnServer:]
-[MFSeenMessagesManager saveChanges]
-[MFSeenMessagesManager _configureManagedObjectContext]
-[MFSeenMessagesManager account]
-[MFSeenMessagesManager setAccount:]
-[MFSeenMessagesManager managedObjectContext]
-[MFSeenMessagesManager setManagedObjectContext:]
-[MFSeenMessagesManager .cxx_destruct]
+[_MFSeenMessagesStore allocWithZone:]
+[_MFSeenMessagesStore sharedInstance]
___38+[_MFSeenMessagesStore sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[_MFSeenMessagesStore init]
-[_MFSeenMessagesStore dealloc]
-[_MFSeenMessagesStore _managedObjectModel]
-[_MFSeenMessagesStore persistentStoreCoordinator]
-[_MFSeenMessagesStore persistentStorePath]
-[_MFSeenMessagesStore accountEntity]
-[_MFSeenMessagesStore setAccountEntity:]
-[_MFSeenMessagesStore seenMessageEntity]
-[_MFSeenMessagesStore setSeenMessageEntity:]
-[_MFSeenMessagesStore .cxx_destruct]
-[MFSizeEngine initWithAccount:]
-[MFSizeEngine init]
-[MFSizeEngine account]
-[MFSizeEngine totalUsage]
-[MFSizeEngine refresh]
-[MFSizeEngine cancel]
-[MFSizeEngine start]
-[MFSizeEngine stop]
-[MFSizeEngine monitor]
-[MFSizeEngine setMonitor:]
-[MFSizeEngine isActive]
-[MFSizeEngine setIsActive:]
-[MFSizeEngine monitorAccessKey]
-[MFSizeEngine setMonitorAccessKey:]
-[MFSizeEngine .cxx_destruct]
-[MFSizeEngine(Internal) _startWorkerThreadIfNeeded]
-[MFSizeEngine(Internal) _workerThreadFinished:]
-[MFSizeEngine(Internal) _runWorkerThread]
-[MFSizeEngine(Internal) _prepareToRefresh]
-[MFSizeEngine(Internal) _shouldStartWorkerThread]
-[MFSizeEngine(Internal) _postChangeNotificationWithUserInfo:]
+[MFSmartMailboxUnreadCountManager initialize]
+[MFSmartMailboxUnreadCountManager allocWithZone:]
+[MFSmartMailboxUnreadCountManager sharedInstance]
___50+[MFSmartMailboxUnreadCountManager sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFSmartMailboxUnreadCountManager init]
-[MFSmartMailboxUnreadCountManager dealloc]
-[MFSmartMailboxUnreadCountManager _canCreateQuery]
-[MFSmartMailboxUnreadCountManager _updateSmartMailboxUnreadCountUsingSpotlight:useTotalCount:]
_unreadCountCallback
-[MFSmartMailboxUnreadCountManager _libraryMessagesFlagsChanged:]
___65-[MFSmartMailboxUnreadCountManager _libraryMessagesFlagsChanged:]_block_invoke
___copy_helper_block_178
___destroy_helper_block_179
-[MFSmartMailboxUnreadCountManager updateMailboxesUnreadCountUsingSpotlight:useTotalCount:]
___91-[MFSmartMailboxUnreadCountManager updateMailboxesUnreadCountUsingSpotlight:useTotalCount:]_block_invoke
___copy_helper_block_182
___destroy_helper_block_183
-[MFSmartMailboxUnreadCountManager setSmartMailboxes:]
-[MFSmartMailboxUnreadCountManager smartMailbox:didInitializeWithDictionaryRepresentation:]
-[MFSmartMailboxUnreadCountManager smartMailbox:willReturnDictionaryRepresentation:]
-[MFSmartMailboxUnreadCountManager _setIsUpdating:]
-[MFSmartMailboxUnreadCountManager _setIsDirty:]
-[MFSmartMailboxUnreadCountManager _keyForMailbox:]
-[MFSmartMailboxUnreadCountManager _keyForMessage:]
-[MFSmartMailboxUnreadCountManager _decomposeMessageKey:intoRowID:messageIDHeader:]
-[MFSmartMailboxUnreadCountManager _pathForMessage:]
-[MFSmartMailboxUnreadCountManager _setSmartMailboxesWithSpotlightCriterion:]
-[MFSmartMailboxUnreadCountManager _isObservingSmartMailbox:]
-[MFSmartMailboxUnreadCountManager _startObservingNotifications]
-[MFSmartMailboxUnreadCountManager _stopObservingNotifications]
-[MFSmartMailboxUnreadCountManager _messagesAdded:]
-[MFSmartMailboxUnreadCountManager _messageFlagsChanged:]
-[MFSmartMailboxUnreadCountManager _messagesCompacted:]
-[MFSmartMailboxUnreadCountManager _mailboxesDeleted:]
-[MFSmartMailboxUnreadCountManager _storeWillOpen:]
-[MFSmartMailboxUnreadCountManager _storeDidOpen:]
-[MFSmartMailboxUnreadCountManager _smartMailboxesWillSaveToDisk:]
-[MFSmartMailboxUnreadCountManager _smartMailboxesDidSaveToDisk:]
-[MFSmartMailboxUnreadCountManager _searchedMailboxPreferencesChanged:]
-[MFSmartMailboxUnreadCountManager _setUnreadMessages:forSmartMailbox:onDate:]
-[MFSmartMailboxUnreadCountManager _uniqueCountOfMessages:]
-[MFSmartMailboxUnreadCountManager _watchMessages:withUnreadState:onDate:]
-[MFSmartMailboxUnreadCountManager _performDelayedUpdate:]
-[MFSmartMailboxUnreadCountManager _performUpdateNow]
-[MFSmartMailboxUnreadCountManager _updateUnreadCountsWithWatchedMessages]
-[MFSmartMailboxUnreadCountManager _filterMessages:matchingCriterion:]
-[MFSmartMailboxUnreadCountManager _updateSmartMailboxUnreadCountsWithMessages:]
-[MFSmartMailboxUnreadCountManager _updateSmartMailboxUnreadCountsByRemovingMessagesWithKeys:]
-[MFSmartMailboxUnreadCountManager _addMessagesWaitingToBeIndexed:]
-[MFSmartMailboxUnreadCountManager _isMessageIndexed:]
-[MFSmartMailboxUnreadCountManager _messageKeysWaitingToBeIndexes]
-[MFSmartMailboxUnreadCountManager _addObsoleteMessageKeys:]
-[MFSmartMailboxUnreadCountManager _updateObsoleteMessageKeys]
-[MFSmartMailboxUnreadCountManager lastModificationToUpdate]
-[MFSmartMailboxUnreadCountManager setLastModificationToUpdate:]
-[MFSmartMailboxUnreadCountManager suspendSmartMailboxUnreadCountCalculations]
-[MFSmartMailboxUnreadCountManager setSuspendSmartMailboxUnreadCountCalculations:]
-[MFSmartMailboxUnreadCountManager unreadQueryCount]
-[MFSmartMailboxUnreadCountManager setUnreadQueryCount:]
-[MFSmartMailboxUnreadCountManager spotlightQueue]
-[MFSmartMailboxUnreadCountManager .cxx_destruct]
-[_MFNonContentSmartMailboxUnreadCountManager init]
-[_MFNonContentSmartMailboxUnreadCountManager dealloc]
___54-[_MFNonContentSmartMailboxUnreadCountManager dealloc]_block_invoke
___copy_helper_block_564
___destroy_helper_block_565
-[_MFNonContentSmartMailboxUnreadCountManager _messageIDHeaderKeyForMessage:]
-[_MFNonContentSmartMailboxUnreadCountManager updateSmartMailboxes]
___67-[_MFNonContentSmartMailboxUnreadCountManager updateSmartMailboxes]_block_invoke
___67-[_MFNonContentSmartMailboxUnreadCountManager updateSmartMailboxes]_block_invoke_2
___copy_helper_block_586
___destroy_helper_block_587
___copy_helper_block_591
___destroy_helper_block_592
-[_MFNonContentSmartMailboxUnreadCountManager _startObservingNotifications]
-[_MFNonContentSmartMailboxUnreadCountManager _stopObservingNotifications]
-[_MFNonContentSmartMailboxUnreadCountManager _setDisplayCounts]
___64-[_MFNonContentSmartMailboxUnreadCountManager _setDisplayCounts]_block_invoke
___64-[_MFNonContentSmartMailboxUnreadCountManager _setDisplayCounts]_block_invoke_2
___copy_helper_block_609
___destroy_helper_block_610
-[_MFNonContentSmartMailboxUnreadCountManager _refreshForMailboxes:]
-[_MFNonContentSmartMailboxUnreadCountManager _messagesChanged:]
___64-[_MFNonContentSmartMailboxUnreadCountManager _messagesChanged:]_block_invoke
___64-[_MFNonContentSmartMailboxUnreadCountManager _messagesChanged:]_block_invoke_2
___64-[_MFNonContentSmartMailboxUnreadCountManager _messagesChanged:]_block_invoke_3
___copy_helper_block_648
___destroy_helper_block_649
___copy_helper_block_651
___destroy_helper_block_652
-[_MFNonContentSmartMailboxUnreadCountManager _messagesCompacted:]
___66-[_MFNonContentSmartMailboxUnreadCountManager _messagesCompacted:]_block_invoke
___66-[_MFNonContentSmartMailboxUnreadCountManager _messagesCompacted:]_block_invoke_2
___copy_helper_block_656
___destroy_helper_block_657
___copy_helper_block_659
___destroy_helper_block_660
-[_MFNonContentSmartMailboxUnreadCountManager _messagesNeedRefresh:]
___68-[_MFNonContentSmartMailboxUnreadCountManager _messagesNeedRefresh:]_block_invoke
___copy_helper_block_670
___destroy_helper_block_671
-[_MFNonContentSmartMailboxUnreadCountManager _refreshRelativeDateMailboxes:]
___77-[_MFNonContentSmartMailboxUnreadCountManager _refreshRelativeDateMailboxes:]_block_invoke
___copy_helper_block_675
___destroy_helper_block_676
-[_MFNonContentSmartMailboxUnreadCountManager _smartMailboxLoaded:]
___67-[_MFNonContentSmartMailboxUnreadCountManager _smartMailboxLoaded:]_block_invoke
___copy_helper_block_680
___destroy_helper_block_681
-[_MFNonContentSmartMailboxUnreadCountManager _updateSmartMailbox:withCompleteMessageList:setDisplayCounts:]
-[_MFNonContentSmartMailboxUnreadCountManager .cxx_destruct]
_unreadCountCallbackWorkQueue
___unreadCountCallbackWorkQueue_block_invoke
___unreadCountCallback_block_invoke
___copy_helper_block_707
___destroy_helper_block_708
_processItemsUpdatedNotification
___processItemsUpdatedNotification_block_invoke
_messagesFromWhereFroms
_processItemUpdated
___copy_helper_block_724
___destroy_helper_block_725
___Block_byref_object_copy_
___Block_byref_object_dispose_
___processItemUpdated_block_invoke
___copy_helper_block_738
___destroy_helper_block_739
___processProgressNotification_block_invoke
_libraryIDFromFileName
___copy_helper_block_760
___destroy_helper_block_761
___validLibraryIDsFromResults_block_invoke
___copy_helper_block_789
___destroy_helper_block_790
___unreadCountCallbackDispatchQueue_block_invoke
+[MFSMTPAccount accountTypeString]
-[MFSMTPAccount initWithAccountInfo:]
-[MFSMTPAccount delivererClass]
+[MFSMTPAccount standardPorts]
+[MFSMTPAccount standardSSLPorts]
-[MFSMTPAccount defaultPortNumber]
-[MFSMTPAccount saslProfileName]
-[MFSMTPAccount keychainProtocol]
-[MFSMTPAccount preferredAuthScheme]
-[MFSMTPAccount setPreferredAuthScheme:]
-[MFSMTPAccount googleClientToken]
-[MFSMTPAccount newConnectedConnectionDiscoveringBestSettings:withConnectTimeout:readWriteTimeout:]
-[MFSMTPAccount authenticatedConnection]
-[MFSMTPAccount connectAndAuthenticate:]
-[MFSMTPAccount checkInConnection:]
-[MFSMTPAccount _setTimer]
-[MFSMTPAccount _connectionExpired:]
-[MFSMTPAccount _disconnect:]
-[MFSMTPAccount releaseAllConnections]
-[MFSMTPAccount isEqual:]
-[MFSMTPAccount hash]
-[MFSMTPAccount lastTimerSetTime]
-[MFSMTPAccount setLastTimerSetTime:]
-[MFSMTPAccount .cxx_destruct]
-[MFSMTPAccount(Applescript) objectSpecifier]
-[MFSMTPConnection init]
-[MFSMTPConnection account]
-[MFSMTPConnection setAccount:]
-[MFSMTPConnection _setupConnection]
-[MFSMTPConnection connectDiscoveringBestSettings:]
-[MFSMTPConnection _startTLS]
-[MFSMTPConnection _completeConnectionWithResult:]
-[MFSMTPConnection authenticationMechanisms]
-[MFSMTPConnection authenticate]
-[MFSMTPConnection _authenticateWithSaslClient:]
-[MFSMTPConnection _getErrorFromFailedAuthentication]
-[MFSMTPConnection _makeInvalidCredentialsError]
-[MFSMTPConnection quit]
-[MFSMTPConnection _state]
-[MFSMTPConnection lastResponse]
-[MFSMTPConnection timeLastCommandWasSent]
-[MFSMTPConnection _sendCommand:length:argument:dontLogArgumentRange:trailer:]
-[MFSMTPConnection _sendDataDontLogBytesInRange:]
-[MFSMTPConnection _getReply]
-[MFSMTPConnection _readResponseRange:isContinuation:]
-[MFSMTPConnection noop]
-[MFSMTPConnection _doHandshakeTryHELOIfEHLOFails:]
-[MFSMTPConnection _sendEHLOWithClientDomainName:]
-[MFSMTPConnection _sendHELOWithClientDomainName:]
-[MFSMTPConnection _domainName]
-[MFSMTPConnection _hasParameter:forKeyword:]
-[MFSMTPConnection maximumMessageBytes]
-[MFSMTPConnection mailFrom:]
-[MFSMTPConnection rcptTo:]
-[MFSMTPConnection sendDatas:]
___30-[MFSMTPConnection sendDatas:]_block_invoke
-[MFSMTPConnection lastStatusCode]
-[MFSMTPConnection originalSocketTimeout]
-[MFSMTPConnection setOriginalSocketTimeout:]
-[MFSMTPConnection lastCommandTimestamp]
-[MFSMTPConnection setLastCommandTimestamp:]
-[MFSMTPConnection lastReplyCode]
-[MFSMTPConnection setLastReplyCode:]
-[MFSMTPConnection greeting]
-[MFSMTPConnection setGreeting:]
-[MFSMTPConnection needToSendGreeting]
-[MFSMTPConnection setNeedToSendGreeting:]
-[MFSMTPConnection .cxx_destruct]
-[_MFSMTPEnhancedStatusCode description]
-[_MFSMTPEnhancedStatusCode interpretedStatusCode]
-[_MFSMTPEnhancedStatusCode classStatus]
-[_MFSMTPEnhancedStatusCode setClassStatus:]
-[_MFSMTPEnhancedStatusCode subject]
-[_MFSMTPEnhancedStatusCode setSubject:]
-[_MFSMTPEnhancedStatusCode detail]
-[_MFSMTPEnhancedStatusCode setDetail:]
-[MFSMTPDeliverer deliverMessageHeaderData:bodyData:toRecipients:]
-[MFSnippetCalculator init]
-[MFSnippetCalculator immediatelyCalculateSnippetForMessage:]
-[MFSnippetCalculator calculateSnippetsForMessages:]
-[MFSnippetCalculator _queueCalculationIfNecessary]
-[MFSnippetCalculator _performSnippetCalculation]
-[MFSnippetCalculator _snippetForMessage:]
-[MFSnippetCalculator _snippetFromAttachments:]
-[MFSnippetCalculator delegate]
-[MFSnippetCalculator setDelegate:]
-[MFSnippetCalculator quoteParser]
-[MFSnippetCalculator calculationQueue]
-[MFSnippetCalculator .cxx_destruct]
+[MFSnippetManager allocWithZone:]
+[MFSnippetManager sharedInstance]
___34+[MFSnippetManager sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFSnippetManager init]
-[MFSnippetManager dealloc]
-[MFSnippetManager fetchSnippetsForMessages:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___45-[MFSnippetManager fetchSnippetsForMessages:]_block_invoke
___copy_helper_block_67
___destroy_helper_block_68
-[MFSnippetManager _messageBodyDataAvailable:]
-[MFSnippetManager didCalculateSnippet:forMessage:]
___51-[MFSnippetManager didCalculateSnippet:forMessage:]_block_invoke
___copy_helper_block_103
___destroy_helper_block_104
-[MFSnippetManager _queueCommitPendingSnippets]
-[MFSnippetManager _commitPendingSnippets]
___42-[MFSnippetManager _commitPendingSnippets]_block_invoke
-[MFSnippetManager snippetCalculator]
-[MFSnippetManager snippetCommitQueue]
-[MFSnippetManager .cxx_destruct]
+[MFSpecialMailbox specialMailboxWithIdentifier:]
+[MFSpecialMailbox specialMailboxForMailboxType:]
+[MFSpecialMailbox inboxMailbox]
___32+[MFSpecialMailbox inboxMailbox]_block_invoke
+[MFSpecialMailbox sentMessagesMailbox]
___39+[MFSpecialMailbox sentMessagesMailbox]_block_invoke
+[MFSpecialMailbox draftsMailbox]
___33+[MFSpecialMailbox draftsMailbox]_block_invoke
+[MFSpecialMailbox junkMailbox]
___31+[MFSpecialMailbox junkMailbox]_block_invoke
+[MFSpecialMailbox outboxMailbox]
___33+[MFSpecialMailbox outboxMailbox]_block_invoke
+[MFSpecialMailbox trashMailbox]
___32+[MFSpecialMailbox trashMailbox]_block_invoke
+[MFSpecialMailbox archiveMailbox]
___34+[MFSpecialMailbox archiveMailbox]_block_invoke
+[MFSpecialMailbox flagsMailbox]
___32+[MFSpecialMailbox flagsMailbox]_block_invoke
+[MFSpecialMailbox VIPSendersMailbox]
___37+[MFSpecialMailbox VIPSendersMailbox]_block_invoke
-[MFSpecialMailbox _initWithName:type:uuid:]
-[MFSpecialMailbox criterion]
-[MFSpecialMailbox displayName]
-[MFSpecialMailbox account]
+[MFSpecialMailbox flagMailboxes]
___33+[MFSpecialMailbox flagMailboxes]_block_invoke
+[MFSpecialMailbox updateVisibleFlagMailboxes]
+[MFSpecialMailbox visibleFlagMailboxes]
-[MFSpecialMailbox children]
-[MFSpecialMailbox childEnumeratorIncludingHiddenChildren:]
-[MFSpecialMailbox mutableCopyOfChildrenIncludingHiddenChildren:hidingGmail:]
-[MFSpecialMailbox childAtIndex:]
-[MFSpecialMailbox visibleChildAtIndex:]
-[MFSpecialMailbox numberOfChildren]
-[MFSpecialMailbox numberOfVisibleChildrenHidingGmail:]
-[MFSpecialMailbox numberOfSortedChildrenHidingGmail:]
-[MFSpecialMailbox sortedChildAtIndex:hidingGmail:]
-[MFSpecialMailbox indexOfChild:]
-[MFSpecialMailbox indexToInsertChildMailbox:]
-[MFSpecialMailbox displayCount]
-[MFSpecialMailbox criteria]
-[MFSpecialMailbox setCriteria:]
-[MFSpecialMailbox allCriteriaMustBeSatisfied]
-[MFSpecialMailbox setAllCriteriaMustBeSatisfied:]
-[MFSpecialMailbox tildeAbbreviatedPath]
-[MFSpecialMailbox _viewerAttributesKey]
-[MFSpecialMailbox _loadUserInfo]
-[MFSpecialMailbox saveUserInfo]
-[MFSpecialMailbox _updateDontIndexFlagFile]
+[MFSpecialMailbox(AppleScript) appleScriptNameForMailboxType:]
-[MFSpecialMailbox(AppleScript) appleScriptKey]
-[MFSpecialMailbox(AppleScript) objectSpecifier]
-[MFSpecialMailbox(AppleScript) messages]
+[MFSpotlightManager allocWithZone:]
+[MFSpotlightManager sharedInstance]
___36+[MFSpotlightManager sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFSpotlightManager init]
-[MFSpotlightManager dealloc]
-[MFSpotlightManager _setAttributeForFileAtPath:name:value:]
-[MFSpotlightManager setAttributeForFileAtPath:name:value:]
-[MFSpotlightManager _shouldIndexAttachmentsForMessage:]
-[MFSpotlightManager _synchronouslyIndexAttachmentsForMessage:]
-[MFSpotlightManager _synchronouslyIndexAttachmentsForMessages:]
-[MFSpotlightManager _scheduleAttachmentIndexingForMessages:]
-[MFSpotlightManager _triggerDelayedAttachmentIndexing]
-[MFSpotlightManager _triggerNowAttachmentIndexing]
-[MFSpotlightManager _indexAttachmentsForScheduledMessages]
-[MFSpotlightManager indexAttachmentsForMessages:]
-[MFSpotlightManager indexAttachmentsForMessage:]
-[MFSpotlightManager immediatelyIndexAttachmentsForMessages:]
-[MFSpotlightManager immediatelyIndexAttachmentsForMessage:]
-[MFSpotlightManager registerQueryObserver:]
-[MFSpotlightManager unregisterQueryObserver:]
-[MFSpotlightManager acquireQueryObserver:]
-[MFSpotlightManager indexQueue]
-[MFSpotlightManager .cxx_destruct]
-[MCMimePart(SpotlightSupport) writeAttachmentToSpotlightCacheIfNeededUnder:]
-[MFSpotlightResultCollector init]
-[MFSpotlightResultCollector initWithCriterion:target:query:expression:]
-[MFSpotlightResultCollector query]
-[MFSpotlightResultCollector dealloc]
___37-[MFSpotlightResultCollector dealloc]_block_invoke
-[MFSpotlightResultCollector criterion]
-[MFSpotlightResultCollector setCriterion:]
-[MFSpotlightResultCollector expression]
-[MFSpotlightResultCollector setExpression:]
-[MFSpotlightResultCollector target]
-[MFSpotlightResultCollector setTarget:]
-[MFSpotlightResultCollector options]
-[MFSpotlightResultCollector setOptions:]
-[MFSpotlightResultCollector nextIndexToProcess]
-[MFSpotlightResultCollector setNextIndexToProcess:]
-[MFSpotlightResultCollector queryIsCancelled]
-[MFSpotlightResultCollector setQueryIsCancelled:]
-[MFSpotlightResultCollector async]
-[MFSpotlightResultCollector setAsync:]
-[MFSpotlightResultCollector queryStartTime]
-[MFSpotlightResultCollector setQueryStartTime:]
-[MFSpotlightResultCollector timeSpentInCallback]
-[MFSpotlightResultCollector setTimeSpentInCallback:]
-[MFSpotlightResultCollector totalResultsCount]
-[MFSpotlightResultCollector setTotalResultsCount:]
-[MFSpotlightResultCollector firstCallbackTime]
-[MFSpotlightResultCollector setFirstCallbackTime:]
-[MFSpotlightResultCollector checkWhereFromsPaths]
-[MFSpotlightResultCollector setCheckWhereFromsPaths:]
-[MFSpotlightResultCollector excludedMailboxURLs]
-[MFSpotlightResultCollector setExcludedMailboxURLs:]
-[MFSpotlightResultCollector .cxx_destruct]
-[MFStringUniquer init]
-[MFStringUniquer copyUniquedStringForIndex:]
-[MFStringUniquer setUniquedString:forIndex:]
-[MFStringUniquer description]
-[MFStringUniquer .cxx_destruct]
+[MFSyncedFile initialize]
-[MFSyncedFile initWithURL:withConflictResolver:]
___49-[MFSyncedFile initWithURL:withConflictResolver:]_block_invoke
-[MFSyncedFile init]
-[MFSyncedFile dealloc]
+[MFSyncedFile syncedFileForURL:withConflictResolver:]
___54+[MFSyncedFile syncedFileForURL:withConflictResolver:]_block_invoke
+[MFSyncedFile stopPersistingSyncedFileForURL:]
-[MFSyncedFile presentedItemURL]
-[MFSyncedFile presentedItemOperationQueue]
-[MFSyncedFile accommodatePresentedItemDeletionWithCompletionHandler:]
-[MFSyncedFile presentedItemDidChange]
___38-[MFSyncedFile presentedItemDidChange]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFSyncedFile presentedItemDidGainVersion:]
-[MFSyncedFile presentedItemDidMoveToURL:]
-[MFSyncedFile presentedItemDidResolveConflictVersion:]
-[MFSyncedFile _iCloudAccount]
-[MFSyncedFile _setiCloudAccount]
-[MFSyncedFile _signedInState]
-[MFSyncedFile _clearMetadata]
+[MFSyncedFile _currentiCloudAccount]
+[MFSyncedFile _metadata]
+[MFSyncedFile _metadataURL]
___28+[MFSyncedFile _metadataURL]_block_invoke
-[MFSyncedFile writeData:options:]
___34-[MFSyncedFile writeData:options:]_block_invoke
___copy_helper_block_172
___destroy_helper_block_173
-[MFSyncedFile _writeData:options:error:]
-[MFSyncedFile _writeDataAfterResolvingConflict:options:error:]
-[MFSyncedFile _writeDataLocally:options:setMetadata:postNotification:error:]
___77-[MFSyncedFile _writeDataLocally:options:setMetadata:postNotification:error:]_block_invoke
___copy_helper_block_220
___destroy_helper_block_221
-[MFSyncedFile readDataWithOptions:]
___36-[MFSyncedFile readDataWithOptions:]_block_invoke
___copy_helper_block_231
___destroy_helper_block_232
-[MFSyncedFile writePlist:options:]
___35-[MFSyncedFile writePlist:options:]_block_invoke
___copy_helper_block_254
___destroy_helper_block_255
-[MFSyncedFile readPlistWithOptions:]
___37-[MFSyncedFile readPlistWithOptions:]_block_invoke
___copy_helper_block_259
___destroy_helper_block_260
-[MFSyncedFile _readPlistWithOptions:error:]
-[MFSyncedFile deleteFile]
___26-[MFSyncedFile deleteFile]_block_invoke
___Block_byref_object_copy_
___Block_byref_object_dispose_
___26-[MFSyncedFile deleteFile]_block_invoke273
___copy_helper_block_276
___destroy_helper_block_277
___copy_helper_block_292
___destroy_helper_block_293
-[MFSyncedFile _deleteFileLocallyPostingNotification:error:]
___60-[MFSyncedFile _deleteFileLocallyPostingNotification:error:]_block_invoke
___copy_helper_block_299
___destroy_helper_block_300
-[MFSyncedFile synchronouslyReadPlistWithOptions:error:]
-[MFSyncedFile synchronouslyWritePlist:options:error:]
-[MFSyncedFile _syncWithCloudPostNotification:error:]
___53-[MFSyncedFile _syncWithCloudPostNotification:error:]_block_invoke
___copy_helper_block_336
___destroy_helper_block_337
___53-[MFSyncedFile _syncWithCloudPostNotification:error:]_block_invoke343
___copy_helper_block_344
___destroy_helper_block_345
-[MFSyncedFile _writeDataToCloud:options:error:]
___48-[MFSyncedFile _writeDataToCloud:options:error:]_block_invoke
___copy_helper_block_376
___destroy_helper_block_377
___48-[MFSyncedFile _writeDataToCloud:options:error:]_block_invoke387
___copy_helper_block_390
___destroy_helper_block_391
-[MFSyncedFile _fileExistsInCloud]
-[MFSyncedFile _ubiquitousFileURL]
-[MFSyncedFile _ubiquitousFileName]
-[MFSyncedFile cloudURL]
-[MFSyncedFile _setCloudURL]
-[MFSyncedFile _resolveConflicts]
___33-[MFSyncedFile _resolveConflicts]_block_invoke
___copy_helper_block_445
___destroy_helper_block_446
-[MFSyncedFile _handleIdentityChange:]
___38-[MFSyncedFile _handleIdentityChange:]_block_invoke
___copy_helper_block_464
___destroy_helper_block_465
-[MFSyncedFile URL]
-[MFSyncedFile conflictResolver]
-[MFSyncedFile setConflictResolver:]
-[MFSyncedFile syncState]
-[MFSyncedFile setSyncState:]
-[MFSyncedFile .cxx_destruct]
-[MFTableOfContents _checkHeader]
-[MFTableOfContents loadCacheFromFileUsingUniqueStrings:]
-[MFTableOfContents loadCacheFromFileUsingUniqueStrings:messageStore:]
-[MFTableOfContents appendHeader:toData:]
-[MFTableOfContents appendCachedDataToData:]
-[MFTableOfContents setTimeStamp:]
-[MFTableOfContents init]
-[MFTableOfContents initWithPath:]
-[MFTableOfContents forceValidityToYES]
-[MFTableOfContents rebuildCacheFromMessages:]
-[MFTableOfContents count]
-[MFTableOfContents messages]
-[MFTableOfContents removeMessage:]
-[MFTableOfContents _addMessageToMap:]
-[MFTableOfContents addMessage:]
-[MFTableOfContents addMessages:]
-[MFTableOfContents description]
-[MFTableOfContents flushToFile]
-[MFTableOfContents messageForMessageID:]
-[MFTableOfContents sortOrder]
-[MFTableOfContents setSortOrder:ascending:]
-[MFTableOfContents isSortedAscending]
-[MFTableOfContents isSortedByDateReceived]
-[MFTableOfContents _sort]
-[MFTableOfContents isValid]
-[MFTableOfContents setIsValid:]
-[MFTableOfContents isDirty]
-[MFTableOfContents setIsDirty:]
-[MFTableOfContents path]
-[MFTableOfContents position]
-[MFTableOfContents setPosition:]
-[MFTableOfContents .cxx_destruct]
-[NSDate(toc_extension) tocSillyDateInt]
+[MFTOCMessage messageIDForSender:subject:dateAsTimeInterval:]
-[MFTOCMessage initWithMessage:]
-[MFTOCMessage init]
-[MFTOCMessage loadCachedInfoFromBytes:length:isDirty:usingUniqueStrings:]
-[MFTOCMessage cachedData]
-[MFTOCMessage account]
-[MFTOCMessage mailbox]
-[MFTOCMessage dataSource]
-[MFTOCMessage setDataSource:]
-[MFTOCMessage messageID]
-[MFTOCMessage messageSize]
-[MFTOCMessage description]
-[MFTOCMessage remoteID]
-[MFTOCMessage isInIncomingMail]
-[MFTOCMessage setIsInIncomingMail:]
-[MFTOCMessage mboxRange]
-[MFTOCMessage setMboxRange:]
-[MFTOCMessage attachment]
-[MFTOCMessage setAttachment:]
-[MFTOCMessage .cxx_destruct]
-[MFUnreadCountQueryObserver initWithMailbox:query:useTotalCount:]
-[MFUnreadCountQueryObserver dealloc]
-[MFUnreadCountQueryObserver query]
-[MFUnreadCountQueryObserver clearMailbox]
-[MFUnreadCountQueryObserver queryIsCancelled]
-[MFUnreadCountQueryObserver setQueryIsCancelled:]
-[MFUnreadCountQueryObserver nextIndexToProcess]
-[MFUnreadCountQueryObserver setNextIndexToProcess:]
-[MFUnreadCountQueryObserver useTotalCount]
-[MFUnreadCountQueryObserver setUseTotalCount:]
-[MFUnreadCountQueryObserver checkWhereFromsPaths]
-[MFUnreadCountQueryObserver setCheckWhereFromsPaths:]
-[MFUnreadCountQueryObserver mailbox]
-[MFUnreadCountQueryObserver setMailbox:]
-[MFUnreadCountQueryObserver seenIDs]
-[MFUnreadCountQueryObserver messageIDsFromAttachments]
-[MFUnreadCountQueryObserver .cxx_destruct]
+[MFUsageCounter allocWithZone:]
+[MFUsageCounter sharedInstance]
___32+[MFUsageCounter sharedInstance]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[MFUsageCounter init]
___22-[MFUsageCounter init]_block_invoke
___copy_helper_block_44
___destroy_helper_block_45
-[MFUsageCounter dealloc]
+[MFUsageCounter gatherJunkMailUsageCounts]
+[MFUsageCounter setGatherJunkMailUsageCounts:]
-[MFUsageCounter _dictionaryForKey:createIfNeeded:]
-[MFUsageCounter saveDefaults]
-[MFUsageCounter numberOfDaysAvailableForKey:]
-[MFUsageCounter countForKey:]
-[MFUsageCounter countForKey:includeToday:]
-[MFUsageCounter removeCountForKey:]
-[MFUsageCounter incrementCountForKey:]
-[MFUsageCounter incrementCountForKey:byCount:]
-[MFUsageCounter gregorianCalendar]
-[MFUsageCounter referenceDate]
-[MFUsageCounter .cxx_destruct]
-[MFVIPSendersController init]
___30-[MFVIPSendersController init]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[MFVIPSendersController allocWithZone:]
+[MFVIPSendersController sharedInstance]
___40+[MFVIPSendersController sharedInstance]_block_invoke
___copy_helper_block_81
___destroy_helper_block_82
-[MFVIPSendersController dealloc]
-[MFVIPSendersController _mailboxCriteriaForAddresses:]
-[MFVIPSendersController _addressesForMailboxCriteria:]
-[MFVIPSendersController _mailboxWithName:addresses:uuid:]
-[MFVIPSendersController _canCreateNewVIP]
-[MFVIPSendersController _combineAddresses:withAddresses:]
-[MFVIPSendersController _ABPersonForName:emailAddresses:withAddressBook:]
-[MFVIPSendersController _ABPersonForName:withAddressBook:]
-[MFVIPSendersController _addressBookRecordsForFirstName:lastName:withAddressBook:]
-[MFVIPSendersController save]
___30-[MFVIPSendersController save]_block_invoke
___copy_helper_block_192
___destroy_helper_block_193
-[MFVIPSendersController _saveVIPSendersAndUpdateMailboxes:]
-[MFVIPSendersController _readVIPSenders]
___41-[MFVIPSendersController _readVIPSenders]_block_invoke
___copy_helper_block_269
___destroy_helper_block_270
-[MFVIPSendersController _updateMailboxesAndPostNotificationsOnMainThread]
___74-[MFVIPSendersController _updateMailboxesAndPostNotificationsOnMainThread]_block_invoke
___copy_helper_block_294
___destroy_helper_block_295
-[MFVIPSendersController _vipsPlistPath]
-[MFVIPSendersController VIPSendersMailboxes]
-[MFVIPSendersController addNewVIPSenderWithAddress:name:]
___58-[MFVIPSendersController addNewVIPSenderWithAddress:name:]_block_invoke
___copy_helper_block_312
___destroy_helper_block_313
-[MFVIPSendersController removeVIPSenderWithMailboxes:]
___55-[MFVIPSendersController removeVIPSenderWithMailboxes:]_block_invoke
___copy_helper_block_317
___destroy_helper_block_318
-[MFVIPSendersController removeVIPSenderWithAddress:]
___53-[MFVIPSendersController removeVIPSenderWithAddress:]_block_invoke
___copy_helper_block_324
___destroy_helper_block_325
-[MFVIPSendersController isVIPForPerson:orAddress:]
-[MFVIPSendersController addressesForVIPSenders]
-[MFVIPSendersController _addressBookDidChange:]
___48-[MFVIPSendersController _addressBookDidChange:]_block_invoke
___48-[MFVIPSendersController _addressBookDidChange:]_block_invoke_2
___copy_helper_block_347
___destroy_helper_block_348
___copy_helper_block_351
___destroy_helper_block_352
-[MFVIPSendersController _updateCloudWithLocal:]
___48-[MFVIPSendersController _updateCloudWithLocal:]_block_invoke
___copy_helper_block_371
___destroy_helper_block_372
-[MFVIPSendersController _storeChanged:]
___40-[MFVIPSendersController _storeChanged:]_block_invoke
___copy_helper_block_388
___destroy_helper_block_389
-[MFVIPSendersController _updateLocalWithCloud:refresh:]
-[MFVIPSendersController _mergeVIPs]
___36-[MFVIPSendersController _mergeVIPs]_block_invoke
___copy_helper_block_415
___destroy_helper_block_416
___36-[MFVIPSendersController _mergeVIPs]_block_invoke418
___copy_helper_block_429
___destroy_helper_block_430
-[MFVIPSendersController _keyForVIP:]
-[MFVIPSendersController store]
-[MFVIPSendersController operationQueue]
-[MFVIPSendersController VIPSendersAddresses]
-[MFVIPSendersController setVIPSendersAddresses:]
-[MFVIPSendersController .cxx_destruct]
-[WebArchive(Conversion) attributedString]
+[MFWebMessageDocument initialize]
+[MFWebMessageDocument openDocuments]
+[MFWebMessageDocument invalidBaseURL]
+[MFWebMessageDocument document:attachmentController:forURL:]
+[MFWebMessageDocument document:attachmentController:mimePart:forURL:]
+[MFWebMessageDocument document:attachment:forURL:]
+[MFWebMessageDocument documentWithUniqueIdentifier:]
+[MFWebMessageDocument documentWillClose:]
-[MFWebMessageDocument initWithMimeBody:forDisplay:]
-[MFWebMessageDocument initForDisplay:]
-[MFWebMessageDocument init]
-[MFWebMessageDocument mimePartForURL:]
-[MFWebMessageDocument attachmentForURL:inHeaderView:]
-[MFWebMessageDocument attachmentForURL:]
-[MFWebMessageDocument addAttachment:forURL:inHeaderView:]
-[MFWebMessageDocument addAttachment:forURL:]
-[MFWebMessageDocument addAttachment:forURLString:]
-[MFWebMessageDocument addAttachments:]
-[MFWebMessageDocument removeAttachmentForURL:]
-[MFWebMessageDocument removeAllAttachments]
-[MFWebMessageDocument hasAttachmentViewController:]
-[MFWebMessageDocument userAttachments]
-[MFWebMessageDocument hasAttachments]
-[MFWebMessageDocument attachments]
-[MFWebMessageDocument attachmentsByURL]
-[MFWebMessageDocument clearAttachmentsByURL]
-[MFWebMessageDocument removeAttachmentsForURLs:]
-[MFWebMessageDocument removeNonHeaderAttachmentForURL:]
-[MFWebMessageDocument parsedMessageFromRange:]
-[MFWebMessageDocument setContainsRemoteContent:]
-[MFWebMessageDocument containsRemoteContent]
-[MFWebMessageDocument baseURL]
-[MFWebMessageDocument setBaseURL:]
-[MFWebMessageDocument messageIsFromMicrosoft]
-[MFWebMessageDocument setMessageIsFromMicrosoft:]
-[MFWebMessageDocument collapseQuotedBlocks]
-[MFWebMessageDocument setCollapseQuotedBlocks:]
-[MFWebMessageDocument shouldDownloadRemoteURLs]
-[MFWebMessageDocument setShouldDownloadRemoteURLs:]
-[MFWebMessageDocument uniqueIdentifier]
-[MFWebMessageDocument parsedMessage]
-[MFWebMessageDocument mimeBody]
-[MFWebMessageDocument .cxx_destruct]
GCC_except_table13
GCC_except_table18
GCC_except_table20
GCC_except_table23
GCC_except_table24
GCC_except_table25
GCC_except_table26
GCC_except_table27
GCC_except_table28
GCC_except_table31
GCC_except_table33
GCC_except_table34
GCC_except_table36
GCC_except_table37
GCC_except_table38
GCC_except_table47
GCC_except_table49
GCC_except_table50
GCC_except_table53
GCC_except_table54
GCC_except_table57
GCC_except_table58
GCC_except_table61
GCC_except_table63
GCC_except_table64
GCC_except_table73
GCC_except_table74
GCC_except_table75
GCC_except_table77
GCC_except_table91
GCC_except_table92
GCC_except_table93
GCC_except_table95
GCC_except_table99
GCC_except_table100
GCC_except_table109
GCC_except_table110
GCC_except_table111
GCC_except_table117
GCC_except_table118
GCC_except_table122
GCC_except_table123
GCC_except_table124
GCC_except_table126
GCC_except_table129
GCC_except_table130
GCC_except_table7
GCC_except_table10
GCC_except_table12
GCC_except_table16
GCC_except_table21
GCC_except_table22
GCC_except_table25
GCC_except_table26
GCC_except_table27
GCC_except_table28
GCC_except_table37
GCC_except_table39
GCC_except_table10
GCC_except_table11
GCC_except_table9
GCC_except_table11
GCC_except_table12
GCC_except_table13
GCC_except_table15
GCC_except_table22
GCC_except_table33
GCC_except_table40
GCC_except_table45
GCC_except_table46
GCC_except_table49
GCC_except_table51
GCC_except_table38
GCC_except_table39
GCC_except_table40
GCC_except_table41
GCC_except_table42
GCC_except_table43
GCC_except_table44
GCC_except_table45
GCC_except_table30
GCC_except_table10
GCC_except_table11
GCC_except_table15
GCC_except_table19
GCC_except_table20
GCC_except_table21
GCC_except_table22
GCC_except_table23
GCC_except_table24
GCC_except_table25
GCC_except_table27
GCC_except_table29
GCC_except_table43
GCC_except_table6
GCC_except_table12
GCC_except_table14
GCC_except_table22
GCC_except_table29
GCC_except_table27
GCC_except_table15
GCC_except_table70
GCC_except_table10
GCC_except_table22
GCC_except_table1
GCC_except_table3
GCC_except_table5
GCC_except_table6
GCC_except_table7
GCC_except_table8
GCC_except_table9
GCC_except_table10
GCC_except_table12
GCC_except_table14
GCC_except_table29
GCC_except_table36
GCC_except_table68
GCC_except_table154
GCC_except_table155
GCC_except_table4
GCC_except_table15
GCC_except_table25
GCC_except_table49
GCC_except_table74
GCC_except_table130
GCC_except_table134
GCC_except_table21
GCC_except_table5
GCC_except_table6
GCC_except_table8
GCC_except_table6
GCC_except_table2
GCC_except_table11
GCC_except_table12
GCC_except_table15
GCC_except_table26
GCC_except_table41
GCC_except_table10
GCC_except_table8
GCC_except_table12
GCC_except_table13
GCC_except_table14
GCC_except_table17
GCC_except_table18
GCC_except_table6
GCC_except_table18
GCC_except_table7
GCC_except_table8
GCC_except_table9
GCC_except_table22
GCC_except_table23
GCC_except_table23
GCC_except_table24
GCC_except_table25
GCC_except_table46
GCC_except_table52
GCC_except_table66
GCC_except_table106
GCC_except_table107
GCC_except_table109
GCC_except_table112
GCC_except_table117
GCC_except_table120
GCC_except_table123
GCC_except_table124
GCC_except_table125
GCC_except_table126
GCC_except_table127
GCC_except_table130
GCC_except_table131
GCC_except_table133
GCC_except_table134
GCC_except_table136
GCC_except_table137
GCC_except_table140
GCC_except_table149
GCC_except_table162
GCC_except_table181
GCC_except_table201
GCC_except_table206
GCC_except_table207
GCC_except_table0
GCC_except_table25
GCC_except_table22
GCC_except_table24
GCC_except_table27
GCC_except_table29
GCC_except_table30
GCC_except_table31
GCC_except_table33
GCC_except_table35
GCC_except_table38
GCC_except_table40
GCC_except_table41
GCC_except_table45
GCC_except_table51
GCC_except_table52
GCC_except_table53
GCC_except_table3
GCC_except_table4
GCC_except_table6
GCC_except_table7
GCC_except_table12
GCC_except_table15
GCC_except_table16
GCC_except_table17
GCC_except_table18
GCC_except_table3
GCC_except_table5
GCC_except_table8
GCC_except_table9
GCC_except_table35
GCC_except_table4
GCC_except_table9
GCC_except_table10
GCC_except_table13
GCC_except_table14
GCC_except_table15
GCC_except_table17
GCC_except_table18
GCC_except_table19
GCC_except_table24
GCC_except_table62
GCC_except_table99
GCC_except_table117
GCC_except_table121
GCC_except_table141
GCC_except_table146
GCC_except_table154
GCC_except_table158
GCC_except_table181
GCC_except_table192
GCC_except_table193
GCC_except_table210
GCC_except_table220
GCC_except_table226
GCC_except_table228
GCC_except_table238
GCC_except_table256
GCC_except_table260
GCC_except_table266
GCC_except_table271
GCC_except_table275
GCC_except_table293
GCC_except_table298
GCC_except_table307
GCC_except_table310
GCC_except_table314
GCC_except_table318
GCC_except_table322
GCC_except_table323
GCC_except_table332
GCC_except_table336
GCC_except_table344
GCC_except_table347
GCC_except_table348
GCC_except_table355
GCC_except_table364
GCC_except_table372
GCC_except_table376
GCC_except_table384
GCC_except_table388
GCC_except_table397
GCC_except_table402
GCC_except_table409
GCC_except_table417
GCC_except_table426
GCC_except_table429
GCC_except_table430
GCC_except_table449
GCC_except_table461
GCC_except_table468
GCC_except_table476
GCC_except_table488
GCC_except_table489
GCC_except_table490
GCC_except_table504
GCC_except_table514
GCC_except_table517
GCC_except_table535
GCC_except_table539
GCC_except_table543
GCC_except_table547
GCC_except_table551
GCC_except_table563
GCC_except_table566
GCC_except_table568
GCC_except_table569
GCC_except_table576
GCC_except_table582
GCC_except_table586
GCC_except_table590
GCC_except_table595
GCC_except_table603
GCC_except_table663
GCC_except_table665
GCC_except_table689
GCC_except_table691
GCC_except_table0
GCC_except_table3
GCC_except_table6
GCC_except_table8
GCC_except_table13
GCC_except_table15
GCC_except_table24
GCC_except_table25
GCC_except_table38
GCC_except_table39
GCC_except_table45
GCC_except_table51
GCC_except_table55
GCC_except_table70
GCC_except_table75
GCC_except_table77
GCC_except_table95
GCC_except_table108
GCC_except_table112
GCC_except_table130
GCC_except_table166
GCC_except_table21
GCC_except_table22
GCC_except_table23
GCC_except_table24
GCC_except_table29
GCC_except_table30
GCC_except_table35
GCC_except_table40
GCC_except_table47
GCC_except_table61
GCC_except_table78
GCC_except_table85
GCC_except_table86
GCC_except_table87
GCC_except_table88
GCC_except_table89
GCC_except_table90
GCC_except_table91
GCC_except_table92
GCC_except_table93
GCC_except_table32
GCC_except_table36
GCC_except_table41
GCC_except_table42
GCC_except_table46
GCC_except_table48
GCC_except_table50
GCC_except_table53
GCC_except_table59
GCC_except_table68
GCC_except_table72
GCC_except_table82
GCC_except_table84
GCC_except_table92
GCC_except_table122
GCC_except_table124
GCC_except_table6
GCC_except_table7
GCC_except_table8
GCC_except_table9
GCC_except_table3
GCC_except_table4
GCC_except_table9
GCC_except_table10
GCC_except_table11
GCC_except_table16
GCC_except_table19
GCC_except_table22
GCC_except_table25
GCC_except_table28
GCC_except_table69
GCC_except_table82
GCC_except_table98
GCC_except_table9
GCC_except_table10
GCC_except_table11
GCC_except_table15
GCC_except_table16
GCC_except_table22
GCC_except_table23
GCC_except_table27
GCC_except_table48
GCC_except_table60
GCC_except_table64
GCC_except_table66
GCC_except_table75
GCC_except_table114
GCC_except_table155
GCC_except_table233
GCC_except_table234
GCC_except_table239
GCC_except_table267
GCC_except_table286
GCC_except_table287
GCC_except_table319
GCC_except_table323
GCC_except_table333
GCC_except_table339
GCC_except_table344
GCC_except_table345
GCC_except_table347
GCC_except_table359
GCC_except_table360
GCC_except_table378
GCC_except_table8
GCC_except_table9
GCC_except_table10
GCC_except_table11
GCC_except_table12
GCC_except_table22
GCC_except_table29
GCC_except_table35
GCC_except_table42
GCC_except_table44
GCC_except_table51
GCC_except_table52
GCC_except_table53
GCC_except_table60
GCC_except_table67
GCC_except_table68
GCC_except_table71
GCC_except_table72
GCC_except_table73
GCC_except_table74
GCC_except_table75
GCC_except_table79
GCC_except_table80
GCC_except_table81
GCC_except_table82
GCC_except_table84
GCC_except_table90
GCC_except_table97
GCC_except_table98
GCC_except_table99
GCC_except_table105
GCC_except_table108
GCC_except_table109
GCC_except_table119
GCC_except_table123
GCC_except_table125
GCC_except_table131
GCC_except_table149
GCC_except_table157
GCC_except_table158
GCC_except_table159
GCC_except_table162
GCC_except_table165
GCC_except_table170
GCC_except_table172
GCC_except_table174
GCC_except_table177
GCC_except_table186
GCC_except_table188
GCC_except_table237
GCC_except_table240
GCC_except_table254
GCC_except_table257
GCC_except_table13
GCC_except_table25
GCC_except_table40
GCC_except_table41
GCC_except_table12
GCC_except_table20
GCC_except_table14
GCC_except_table31
GCC_except_table32
GCC_except_table3
GCC_except_table4
GCC_except_table9
GCC_except_table13
GCC_except_table19
GCC_except_table23
GCC_except_table24
GCC_except_table25
GCC_except_table26
GCC_except_table32
GCC_except_table33
GCC_except_table42
GCC_except_table46
GCC_except_table48
GCC_except_table49
GCC_except_table50
GCC_except_table51
GCC_except_table52
GCC_except_table53
GCC_except_table56
GCC_except_table57
GCC_except_table59
GCC_except_table70
GCC_except_table72
GCC_except_table74
GCC_except_table75
GCC_except_table77
GCC_except_table86
GCC_except_table87
GCC_except_table88
GCC_except_table97
GCC_except_table98
GCC_except_table36
GCC_except_table110
GCC_except_table1
GCC_except_table2
GCC_except_table4
GCC_except_table6
GCC_except_table7
GCC_except_table59
GCC_except_table60
GCC_except_table61
GCC_except_table64
GCC_except_table65
GCC_except_table66
GCC_except_table67
GCC_except_table79
GCC_except_table120
GCC_except_table133
GCC_except_table134
GCC_except_table135
GCC_except_table148
GCC_except_table182
GCC_except_table183
GCC_except_table194
GCC_except_table200
GCC_except_table201
GCC_except_table206
GCC_except_table210
GCC_except_table0
GCC_except_table1
GCC_except_table2
GCC_except_table3
GCC_except_table5
GCC_except_table6
GCC_except_table7
GCC_except_table10
GCC_except_table11
GCC_except_table15
GCC_except_table16
GCC_except_table17
GCC_except_table18
GCC_except_table20
GCC_except_table21
GCC_except_table22
GCC_except_table24
GCC_except_table27
GCC_except_table30
GCC_except_table31
GCC_except_table37
GCC_except_table40
GCC_except_table47
GCC_except_table48
GCC_except_table49
GCC_except_table57
GCC_except_table3
GCC_except_table6
GCC_except_table8
GCC_except_table9
GCC_except_table11
GCC_except_table12
GCC_except_table15
GCC_except_table16
GCC_except_table17
GCC_except_table18
GCC_except_table20
GCC_except_table23
GCC_except_table30
GCC_except_table35
GCC_except_table36
GCC_except_table37
GCC_except_table38
GCC_except_table0
GCC_except_table1
GCC_except_table5
GCC_except_table5
GCC_except_table10
GCC_except_table17
GCC_except_table24
GCC_except_table25
GCC_except_table26
GCC_except_table27
GCC_except_table28
GCC_except_table31
GCC_except_table38
GCC_except_table44
GCC_except_table53
GCC_except_table7
GCC_except_table17
GCC_except_table21
GCC_except_table23
GCC_except_table6
GCC_except_table8
GCC_except_table4
GCC_except_table6
GCC_except_table12
GCC_except_table42
GCC_except_table49
GCC_except_table15
GCC_except_table33
GCC_except_table39
GCC_except_table2
GCC_except_table3
GCC_except_table6
GCC_except_table12
GCC_except_table18
GCC_except_table8
GCC_except_table25
GCC_except_table27
GCC_except_table42
GCC_except_table11
GCC_except_table15
GCC_except_table38
GCC_except_table46
GCC_except_table50
GCC_except_table51
GCC_except_table52
GCC_except_table54
GCC_except_table55
GCC_except_table2
GCC_except_table5
GCC_except_table12
GCC_except_table13
GCC_except_table14
GCC_except_table15
GCC_except_table16
GCC_except_table4
GCC_except_table10
GCC_except_table12
GCC_except_table19
GCC_except_table20
GCC_except_table21
GCC_except_table22
GCC_except_table28
GCC_except_table29
GCC_except_table36
GCC_except_table37
GCC_except_table41
GCC_except_table43
GCC_except_table45
GCC_except_table46
GCC_except_table48
GCC_except_table49
GCC_except_table50
GCC_except_table52
GCC_except_table53
GCC_except_table54
GCC_except_table79
GCC_except_table115
GCC_except_table121
GCC_except_table15
GCC_except_table18
GCC_except_table1
GCC_except_table2
GCC_except_table4
GCC_except_table7
GCC_except_table10
GCC_except_table13
GCC_except_table14
GCC_except_table19
GCC_except_table26
GCC_except_table12
GCC_except_table15
GCC_except_table20
GCC_except_table21
GCC_except_table22
GCC_except_table5
GCC_except_table7
GCC_except_table10
GCC_except_table12
GCC_except_table16
GCC_except_table19
GCC_except_table21
GCC_except_table30
GCC_except_table31
GCC_except_table37
GCC_except_table45
GCC_except_table50
GCC_except_table62
GCC_except_table63
GCC_except_table64
GCC_except_table71
GCC_except_table81
GCC_except_table83
GCC_except_table88
GCC_except_table4
GCC_except_table11
GCC_except_table14
GCC_except_table15
GCC_except_table17
GCC_except_table20
GCC_except_table13
GCC_except_table14
GCC_except_table16
GCC_except_table17
GCC_except_table19
GCC_except_table22
GCC_except_table28
GCC_except_table34
GCC_except_table38
GCC_except_table42
GCC_except_table46
GCC_except_table48
GCC_except_table49
GCC_except_table54
GCC_except_table1
GCC_except_table6
GCC_except_table7
GCC_except_table8
GCC_except_table12
GCC_except_table14
-[MFEWSGateway fetchDistinguishedFolderIdsWithConnection:].mailboxTypesToFetch
_findEntity.lookup
_hash.asso_values
-[MFIMAPAccount syncFileSystemWithServerPathPrefix].specialTypes
_sIMAPOperationCacheFileMagic
_sCacheFilePrelude
_sCommandStartTLS
_sStatusOK
_sContinueRequest
_sCommandCancelAuthentication
_sStatusError
_sCommandQuit
_sCommandCapability
_sTerminator
-[MFPOPConnection _apopWithUsername:password:].hexToASCII
_sCommandAPOP
_sCommandUser
_sCommandPassword
_sCommandStat
_sCommandUIDL
_sCommandList
_sCommandTop
_sCommandRetrieve
_sCommandDelete
-[MFPOPConnection _parseSingleLineResponse:status:responseCode:textRange:humanReadableText:].systemPrefix
_sCommandStartTLS
_sCommandAuthenticate
_sCommandCancelAuthentication
_sCommandQuit
_sLineEnding
_sCommandNoOp
_sCommandReset
_sCommandExtendedHello
-[MFSMTPConnection _sendEHLOWithClientDomainName:].authEquals
_sCommandHello
_sCommandMailFrom
_sCommandRecipientTo
_sCommandData
_sCommandDone
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp196
___block_literal_global197
___block_descriptor_tmp307
___block_descriptor_tmp428
___block_descriptor_tmp
___block_descriptor_tmp146
___block_descriptor_tmp173
___block_descriptor_tmp213
___block_descriptor_tmp
___block_descriptor_tmp40
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp173
___block_descriptor_tmp239
___block_descriptor_tmp295
___block_descriptor_tmp352
___block_descriptor_tmp381
___block_descriptor_tmp387
___block_descriptor_tmp392
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp142
___block_literal_global143
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp92
___block_descriptor_tmp101
___block_descriptor_tmp243
___block_descriptor_tmp
___block_descriptor_tmp59
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp368
___block_descriptor_tmp421
___block_descriptor_tmp
___block_descriptor_tmp172
___block_descriptor_tmp516
___block_descriptor_tmp550
___block_descriptor_tmp609
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp91
___block_literal_global92
___block_descriptor_tmp95
___block_literal_global96
+[MFCriterion logSpotlightStatus].indexingStatusStrings
___block_descriptor_tmp190
___block_descriptor_tmp577
___block_descriptor_tmp
___block_descriptor_tmp332
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp240
___block_descriptor_tmp459
___block_descriptor_tmp472
___block_literal_global473
___block_descriptor_tmp495
___block_descriptor_tmp507
___block_literal_global508
___block_descriptor_tmp781
___block_descriptor_tmp841
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp187
___block_descriptor_tmp209
___block_descriptor_tmp300
___block_descriptor_tmp306
___block_descriptor_tmp311
___block_descriptor_tmp371
___block_descriptor_tmp396
___block_descriptor_tmp420
___block_descriptor_tmp455
___block_descriptor_tmp461
___block_descriptor_tmp465
___block_descriptor_tmp498
___block_descriptor_tmp510
___block_descriptor_tmp518
___block_descriptor_tmp522
___block_descriptor_tmp526
___block_descriptor_tmp530
___block_descriptor_tmp534
___block_descriptor_tmp538
___block_descriptor_tmp542
___block_descriptor_tmp546
___block_descriptor_tmp550
___block_descriptor_tmp566
___block_descriptor_tmp635
___block_descriptor_tmp644
___block_descriptor_tmp654
___block_descriptor_tmp729
___block_descriptor_tmp737
___block_descriptor_tmp747
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp376
___block_literal_global
___block_descriptor_tmp388
___block_literal_global389
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp131
___block_descriptor_tmp193
___block_literal_global
___block_descriptor_tmp267
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp44
___block_descriptor_tmp66
___block_descriptor_tmp70
___block_descriptor_tmp75
___block_descriptor_tmp
___block_descriptor_tmp11
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp161
_findEntity.wordlist
___block_descriptor_tmp
___block_descriptor_tmp180
___block_descriptor_tmp516
___block_descriptor_tmp1114
___block_literal_global
___block_descriptor_tmp1119
___block_descriptor_tmp1127
___block_descriptor_tmp1129
___block_literal_global1130
___block_descriptor_tmp1134
___block_descriptor_tmp1170
___block_descriptor_tmp1222
___block_literal_global1223
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp19
___block_literal_global
___block_descriptor_tmp179
___block_descriptor_tmp
___block_descriptor_tmp380
___block_descriptor_tmp385
___block_descriptor_tmp390
___block_descriptor_tmp406
___block_literal_global
___block_descriptor_tmp412
___block_descriptor_tmp417
___block_descriptor_tmp444
___block_literal_global445
___block_descriptor_tmp489
___block_descriptor_tmp506
___block_descriptor_tmp518
___block_descriptor_tmp528
___block_descriptor_tmp534
___block_descriptor_tmp539
___block_descriptor_tmp544
___block_descriptor_tmp560
___block_descriptor_tmp563
___block_descriptor_tmp572
___block_descriptor_tmp575
___block_descriptor_tmp584
___block_descriptor_tmp587
___block_descriptor_tmp601
___block_descriptor_tmp605
___block_descriptor_tmp615
___block_descriptor_tmp768
___block_literal_global769
___block_descriptor_tmp775
___block_descriptor_tmp805
___block_descriptor_tmp821
___block_descriptor_tmp822
___block_literal_global823
___block_descriptor_tmp894
___block_descriptor_tmp919
___block_descriptor_tmp929
___block_descriptor_tmp940
___block_descriptor_tmp947
___block_descriptor_tmp995
___block_descriptor_tmp1002
___block_descriptor_tmp1005
___block_descriptor_tmp1051
___block_descriptor_tmp1055
___block_descriptor_tmp1302
___block_descriptor_tmp1306
___block_descriptor_tmp1312
___block_descriptor_tmp1352
___block_descriptor_tmp1356
___block_descriptor_tmp1381
___block_descriptor_tmp1386
___block_descriptor_tmp1429
___block_descriptor_tmp1473
___block_descriptor_tmp1478
___block_descriptor_tmp1522
___block_descriptor_tmp1528
___block_descriptor_tmp1537
___block_descriptor_tmp1545
___block_literal_global1546
___block_descriptor_tmp1557
___block_descriptor_tmp1561
___block_descriptor_tmp1567
___block_descriptor_tmp1586
___block_descriptor_tmp1602
___block_descriptor_tmp1623
___block_descriptor_tmp1631
___block_descriptor_tmp1646
___block_descriptor_tmp1663
___block_descriptor_tmp1672
___block_descriptor_tmp1680
___block_descriptor_tmp1681
___block_literal_global1682
___block_descriptor_tmp1683
___block_literal_global1684
___block_descriptor_tmp1687
___block_descriptor_tmp1715
___block_descriptor_tmp1721
___block_descriptor_tmp1729
___block_descriptor_tmp1774
___block_descriptor_tmp1778
___block_descriptor_tmp1794
___block_descriptor_tmp1799
___block_descriptor_tmp1811
___block_descriptor_tmp1815
___block_descriptor_tmp1823
___block_descriptor_tmp1827
___block_descriptor_tmp1835
___block_descriptor_tmp1839
___block_descriptor_tmp1845
___block_descriptor_tmp1852
___block_descriptor_tmp1872
___block_descriptor_tmp1886
___block_descriptor_tmp1889
___block_descriptor_tmp1898
___block_descriptor_tmp1906
___block_descriptor_tmp1912
___block_descriptor_tmp1919
___block_descriptor_tmp1921
___block_literal_global1922
___block_descriptor_tmp2040
___block_descriptor_tmp2085
___block_descriptor_tmp2106
___block_descriptor_tmp2113
___block_descriptor_tmp2308
___block_literal_global2309
___block_descriptor_tmp2342
___block_descriptor_tmp2351
___block_descriptor_tmp2417
___block_descriptor_tmp2428
___block_descriptor_tmp2439
___block_descriptor_tmp2446
___block_descriptor_tmp2455
___block_descriptor_tmp2467
___block_descriptor_tmp2555
___block_descriptor_tmp2586
___block_descriptor_tmp2592
___block_descriptor_tmp2598
___block_descriptor_tmp2604
___block_descriptor_tmp2612
___block_descriptor_tmp2615
___block_descriptor_tmp2621
___block_descriptor_tmp2972
___block_descriptor_tmp3243
___block_descriptor_tmp3248
___block_literal_global3249
___block_descriptor_tmp3284
___block_descriptor_tmp3305
___block_descriptor_tmp3315
___block_descriptor_tmp3338
___block_literal_global3339
___block_descriptor_tmp3351
___block_descriptor_tmp
___block_descriptor_tmp361
___block_descriptor_tmp415
___block_descriptor_tmp499
___block_descriptor_tmp505
___block_descriptor_tmp555
___block_descriptor_tmp579
___block_descriptor_tmp595
___block_descriptor_tmp630
___block_descriptor_tmp636
___block_descriptor_tmp890
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp238
___block_descriptor_tmp340
___block_descriptor_tmp376
___block_descriptor_tmp384
___block_descriptor_tmp410
___block_descriptor_tmp415
___block_descriptor_tmp419
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp268
___block_descriptor_tmp283
___block_descriptor_tmp291
___block_descriptor_tmp309
___block_descriptor_tmp332
___block_descriptor_tmp518
___block_descriptor_tmp544
___block_descriptor_tmp550
___block_descriptor_tmp552
___block_descriptor_tmp775
___block_descriptor_tmp899
___block_descriptor_tmp923
___block_descriptor_tmp926
___block_descriptor_tmp930
___block_literal_global
___block_descriptor_tmp937
___block_descriptor_tmp940
___block_descriptor_tmp945
___block_descriptor_tmp955
___block_descriptor_tmp968
___block_descriptor_tmp976
___block_descriptor_tmp993
___block_descriptor_tmp1118
___block_descriptor_tmp1128
___block_literal_global1129
___block_descriptor_tmp1142
___block_literal_global1143
___block_descriptor_tmp1176
___block_descriptor_tmp1201
___block_descriptor_tmp1502
___block_literal_global1503
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp374
___block_literal_global375
___block_descriptor_tmp376
___block_literal_global377
___block_descriptor_tmp393
___block_literal_global394
___block_descriptor_tmp426
___block_descriptor_tmp605
___block_literal_global606
___block_descriptor_tmp682
___block_descriptor_tmp868
___block_literal_global869
___block_descriptor_tmp874
___block_literal_global875
___block_descriptor_tmp878
___block_literal_global879
___block_descriptor_tmp886
___block_literal_global887
___block_descriptor_tmp890
___block_literal_global891
___block_descriptor_tmp894
___block_literal_global895
___block_descriptor_tmp898
___block_literal_global899
___block_descriptor_tmp1347
___block_descriptor_tmp1354
___block_literal_global1355
___block_descriptor_tmp1369
___block_descriptor_tmp1376
___block_descriptor_tmp1430
___block_descriptor_tmp1534
___block_descriptor_tmp1551
___block_descriptor_tmp1596
___block_descriptor_tmp1650
___block_descriptor_tmp2124
___block_literal_global2125
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp430
___block_literal_global431
___block_descriptor_tmp469
___block_descriptor_tmp536
___block_descriptor_tmp625
___block_descriptor_tmp669
___block_literal_global670
___block_descriptor_tmp733
___block_descriptor_tmp800
___block_descriptor_tmp883
___block_descriptor_tmp889
___block_descriptor_tmp892
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp30
___block_descriptor_tmp
___block_descriptor_tmp74
___block_descriptor_tmp
___block_descriptor_tmp404
___block_descriptor_tmp444
___block_descriptor_tmp448
___block_descriptor_tmp517
___block_descriptor_tmp639
-[MFMailMigrator _copyWithCompressionFromPath:toPath:].keys
___block_descriptor_tmp
___block_descriptor_tmp25
___block_literal_global
___block_descriptor_tmp39
___block_descriptor_tmp58
___block_descriptor_tmp61
___block_descriptor_tmp68
___block_literal_global69
___block_descriptor_tmp72
___block_literal_global73
___block_descriptor_tmp97
___block_descriptor_tmp117
___block_descriptor_tmp
___block_descriptor_tmp381
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp179
___block_descriptor_tmp
___block_descriptor_tmp130
___block_literal_global
___block_descriptor_tmp143
___block_literal_global144
___block_descriptor_tmp318
___block_descriptor_tmp344
___block_descriptor_tmp365
___block_descriptor_tmp585
___block_descriptor_tmp608
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp56
___block_literal_global57
___block_descriptor_tmp58
___block_literal_global59
___block_descriptor_tmp60
___block_literal_global61
___block_descriptor_tmp62
___block_literal_global63
___block_descriptor_tmp64
___block_literal_global65
___block_descriptor_tmp66
___block_literal_global67
___block_descriptor_tmp68
___block_literal_global69
___block_descriptor_tmp70
___block_literal_global71
___block_descriptor_tmp
___block_descriptor_tmp304
___block_literal_global
___block_descriptor_tmp469
___block_descriptor_tmp623
___block_descriptor_tmp628
___block_descriptor_tmp631
___block_descriptor_tmp740
___block_descriptor_tmp747
___block_descriptor_tmp757
___block_descriptor_tmp762
___block_descriptor_tmp
_comparators
___block_descriptor_tmp176
___block_descriptor_tmp189
___block_literal_global
___block_descriptor_tmp197
___block_descriptor_tmp200
___block_descriptor_tmp203
___block_descriptor_tmp208
___block_descriptor_tmp
___block_descriptor_tmp345
___block_descriptor_tmp397
___block_descriptor_tmp459
___block_descriptor_tmp469
___block_descriptor_tmp474
___block_descriptor_tmp562
___block_descriptor_tmp576
___block_descriptor_tmp607
___block_descriptor_tmp610
___block_descriptor_tmp618
___block_descriptor_tmp624
___block_descriptor_tmp628
___block_descriptor_tmp695
___block_descriptor_tmp
___block_descriptor_tmp294
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp104
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp131
___block_descriptor_tmp356
___block_descriptor_tmp
___block_descriptor_tmp187
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp61
___block_literal_global62
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp103
___block_descriptor_tmp
___block_descriptor_tmp450
-[MFPOPConnection _parseSingleLineResponse:status:responseCode:textRange:humanReadableText:].responseCodeMap
___block_descriptor_tmp
___block_descriptor_tmp208
___block_descriptor_tmp
___block_descriptor_tmp194
___block_descriptor_tmp315
___block_descriptor_tmp376
___block_descriptor_tmp
___block_descriptor_tmp124
-[_MFRedundantTextIdentifierParseContext isBlockLevelTag:].blockLevelTags
___block_descriptor_tmp511
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp66
___block_descriptor_tmp85
___block_descriptor_tmp127
_sCachePolicyNames
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp91
___block_literal_global92
___block_descriptor_tmp105
___block_literal_global106
___block_descriptor_tmp315
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp180
___block_descriptor_tmp184
___block_descriptor_tmp566
___block_descriptor_tmp588
___block_descriptor_tmp593
___block_descriptor_tmp612
___block_descriptor_tmp618
___block_literal_global
___block_descriptor_tmp642
___block_literal_global643
___block_descriptor_tmp650
___block_descriptor_tmp653
___block_descriptor_tmp658
___block_descriptor_tmp661
___block_descriptor_tmp672
___block_descriptor_tmp677
___block_descriptor_tmp682
___block_descriptor_tmp693
___block_literal_global694
___block_descriptor_tmp709
___block_descriptor_tmp727
___block_descriptor_tmp741
___block_descriptor_tmp762
___block_descriptor_tmp792
___block_descriptor_tmp805
___block_literal_global806
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp70
___block_descriptor_tmp105
___block_descriptor_tmp127
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp85
___block_literal_global86
___block_descriptor_tmp87
___block_literal_global88
___block_descriptor_tmp89
___block_literal_global90
___block_descriptor_tmp91
___block_literal_global92
___block_descriptor_tmp93
___block_literal_global94
___block_descriptor_tmp95
___block_literal_global96
___block_descriptor_tmp117
___block_literal_global118
___block_descriptor_tmp119
___block_literal_global120
___block_descriptor_tmp193
___block_literal_global194
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp65
___block_literal_global66
___block_descriptor_tmp92
___block_descriptor_tmp162
___block_literal_global163
___block_descriptor_tmp174
___block_descriptor_tmp222
___block_descriptor_tmp233
___block_descriptor_tmp256
___block_descriptor_tmp261
___block_descriptor_tmp279
___block_descriptor_tmp294
___block_descriptor_tmp301
___block_descriptor_tmp338
___block_descriptor_tmp346
___block_descriptor_tmp378
___block_descriptor_tmp392
___block_descriptor_tmp447
___block_descriptor_tmp466
_sSortOrders
___block_descriptor_tmp
___block_descriptor_tmp47
___block_descriptor_tmp
___block_descriptor_tmp83
___block_descriptor_tmp194
___block_descriptor_tmp272
___block_descriptor_tmp296
___block_descriptor_tmp314
___block_descriptor_tmp319
___block_descriptor_tmp326
___block_descriptor_tmp350
___block_descriptor_tmp353
___block_descriptor_tmp373
___block_descriptor_tmp390
___block_descriptor_tmp417
___block_descriptor_tmp431
_OBJC_IVAR_$__MFAppleScriptHeaderRecord._name
_OBJC_IVAR_$__MFAppleScriptHeaderRecord._content
_OBJC_IVAR_$__MFAppleScriptHeaderRecord._message
_OBJC_IVAR_$_MFAccount._primitiveIsOffline
_OBJC_IVAR_$_MFAccount._isActive
_OBJC_IVAR_$_MFAccount._primitiveIsWillingToGoOnline
_OBJC_IVAR_$_MFAccount._autosynchronizingEnabled
_OBJC_IVAR_$_MFAccount._tlsIdentity
_OBJC_IVAR_$_MFAccount._info
_OBJC_IVAR_$_MFAccount._supportURL
_OBJC_IVAR_$_MFAccount._supportURLLabel
_OBJC_IVAR_$_MFAccount._providerIdentifier
_OBJC_IVAR_$_MFAccount._brandName
_OBJC_IVAR_$_MFAccount._brandIcon
_OBJC_IVAR_$_MFAccount._configureDynamically
_OBJC_IVAR_$_MFAccount._allowInsecureAuthentication
_OBJC_IVAR_$_MFAccount._canonicalEmailAddress
_OBJC_IVAR_$_MFAccount._useMailDrop
_OBJC_IVAR_$_MFAccount._lastConnectionValidationTime
_OBJC_IVAR_$_MFAccountStatus._states
_OBJC_IVAR_$_MFAccountStatus._stateDetails
_OBJC_IVAR_$_MFAccountStatus._netDiagnostics
_OBJC_IVAR_$_MFAccountStatus._clients
_OBJC_IVAR_$_MFAccountStatus._allRegisteredAccounts
_OBJC_IVAR_$_MFAccountStatus._allRegisteredTypes
_OBJC_IVAR_$_MFAccountStatus._accountRefreshQueue
_OBJC_IVAR_$_MFAccountStatus._refreshTimer
_OBJC_IVAR_$_MFAccountStatus._isRefreshingInternet
_OBJC_IVAR_$_MFAccountStorage._plistLock
_OBJC_IVAR_$_MFAddressManager._imageCache
_OBJC_IVAR_$_MFAddressManager._imageLoadingQueue
_OBJC_IVAR_$_MFAddressManager._imageCreationQueue
_OBJC_IVAR_$_MFAddressManager._recordsCache
_OBJC_IVAR_$_MFAddressManager._addressesWithNoRecords
_OBJC_IVAR_$_MFAddressManager._emailsAwaitingImage
_OBJC_IVAR_$_MFAddressManager._emailsWithoutImage
_OBJC_IVAR_$_MFAddressManager._needToTrimRecordCaches
_OBJC_IVAR_$_MFAosImapAccount._aoskitLock
_OBJC_IVAR_$_MFAosImapAccount._aosSmtpAccount
_OBJC_IVAR_$_MFAosImapAccount._aoskitAccount
_OBJC_IVAR_$_MFAosImapAccount._mailPropertiesTransaction
_OBJC_IVAR_$_MFAosImapAccount._aliasesTransaction
_OBJC_IVAR_$_MFAosImapAccount._editAliasesURLTransaction
_OBJC_IVAR_$_MFAosImapAccount._shouldBypassCache
_OBJC_IVAR_$_MFAosSmtpAccount._aosImapAccount
_OBJC_IVAR_$_MFAttachmentViewController._attachment
_OBJC_IVAR_$_MFAttachmentViewController._attachmentViews
_OBJC_IVAR_$_MFAttachmentViewController._canBeDisplayedInline
_OBJC_IVAR_$_MFAttachmentViewController._canBeDisplayedInRegisteredViewer
_OBJC_IVAR_$_MFAttachmentViewController._isBeingDisplayedInline
_OBJC_IVAR_$_MFAttachmentViewController._isInvisible
_OBJC_IVAR_$_MFAttachmentViewController._inlineImage
_OBJC_IVAR_$_MFAttachmentViewController._targetImageSize
_OBJC_IVAR_$_MFAttachmentViewController._domNodeWidth
_OBJC_IVAR_$_MFAttachmentViewController._domNodeHeight
_OBJC_IVAR_$_MFAttachmentViewController._objectElement
_OBJC_IVAR_$_MFAttachmentViewController._originalImageSize
_OBJC_IVAR_$_MFAttachmentViewController._originalImageSizeHasBeenComputed
_OBJC_IVAR_$_MFAttachmentViewController._previousTargetImageSize
_OBJC_IVAR_$_MFAttachmentViewController._isImageBeingResized
_OBJC_IVAR_$_MFBackupManager._mailboxesWithKnownContents
_OBJC_IVAR_$_MFBackupManager._editableMessagesLock
_OBJC_IVAR_$_MFBackupManager._timeMachineRestoreLock
_OBJC_IVAR_$_MFBackupManager._registeredForEditableMessageNotifications
_OBJC_IVAR_$_MFBackupManager._mailboxBackupPaths
_OBJC_IVAR_$_MFBackupManager._topLevelRecoveryMailbox
_OBJC_IVAR_$_MFBackupManager._lastSavedTableOfContents
_OBJC_IVAR_$_MFBackupManager._messagePathsToRestore
_OBJC_IVAR_$_MFBackupManager._mailboxDirectoryToRestore
_OBJC_IVAR_$_MFBackupManager._mailboxNameForRestoring
_OBJC_IVAR_$_MFBehaviorTracker._activeValuesByAttributeName
_OBJC_IVAR_$_MFBehaviorTracker._session
_OBJC_IVAR_$_MFBehaviorTracker._taskQueue
_OBJC_IVAR_$_MFBerkeleyMbox._path
_OBJC_IVAR_$_MFBerkeleyMbox._mboxData
_OBJC_IVAR_$_MFConversationCalculationContext._handle
_OBJC_IVAR_$_MFConversationCalculationContext._db
_OBJC_IVAR_$_MFConversationCalculationContext._didTearDown
_OBJC_IVAR_$_MFConversationCalculationContext._addedConversations
_OBJC_IVAR_$_MFConversationCalculationContext._removedConversations
_OBJC_IVAR_$_MFConversationCalculationContext._updatedConversations
_OBJC_IVAR_$_MFConversationCalculationContext._recordConversationCalculationPerformanceMetrics
_OBJC_IVAR_$_MFConversationCalculationContext._logConversationCalculationTrace
_OBJC_IVAR_$_MFConversationCalculationContext._participants
_OBJC_IVAR_$_MFConversationCalculationContext._rowID
_OBJC_IVAR_$_MFConversationCalculationContext._message
_OBJC_IVAR_$_MFConversationCalculationContext._subjectID
_OBJC_IVAR_$_MFConversationCalculationContext._subjectLength
_OBJC_IVAR_$_MFConversationCalculationContext._rootStatus
_OBJC_IVAR_$_MFConversationCalculationContext._hasReferences
_OBJC_IVAR_$_MFConversationCalculationContext._messageIDHeader
_OBJC_IVAR_$_MFConversationCalculationContext._conversationID
_OBJC_IVAR_$_MFConversationCalculationContext._messageType
_OBJC_IVAR_$_MFConversationCalculationContext._mailbox
_OBJC_IVAR_$_MFConversationCalculationContext._senderID
_OBJC_IVAR_$_MFConversationCalculationContext._dateReceived
_OBJC_IVAR_$_MFConversationCalculationContext._automatedConversationType
_OBJC_IVAR_$_MFConversationCalculationContext._conversationsWereReset
_OBJC_IVAR_$_MFConversationCalculationContext._oldConversationIDByMessage
_OBJC_IVAR_$_MFConversationCalculationContext._currentConversationIDByMessage
_OBJC_IVAR_$_MFConversationCalculationContext._messageHasReferencesTime
_OBJC_IVAR_$_MFConversationCalculationContext._messageHasMessageIDTime
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDOfCloneTime
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDOfClosestAncestorTime
_OBJC_IVAR_$_MFConversationCalculationContext._descendantsOfMessagesTime
_OBJC_IVAR_$_MFConversationCalculationContext._peersOfMessagesTime
_OBJC_IVAR_$_MFConversationCalculationContext._fuzzyDescendantsToSplitTime
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDOfFuzzyAncestorTime
_OBJC_IVAR_$_MFConversationCalculationContext._descendantsOfMessageToSplitTime
_OBJC_IVAR_$_MFConversationCalculationContext._createNewConversationFromMessageTime
_OBJC_IVAR_$_MFConversationCalculationContext._addMessageToConversationTime
_OBJC_IVAR_$_MFConversationCalculationContext._mergeConversationsTime
_OBJC_IVAR_$_MFConversationCalculationContext._calculateConversationForMessageTotalTime
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDOfAutomatedMessageWithReferencesTime
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDOfAutomatedMessageWithoutReferencesTime
_OBJC_IVAR_$_MFConversationCalculationContext._fixupConversationPositionsTime
_OBJC_IVAR_$_MFConversationCalculationContext._cloneCount
_OBJC_IVAR_$_MFConversationCalculationContext._closestAncestorCount
_OBJC_IVAR_$_MFConversationCalculationContext._descendantsFoundCount
_OBJC_IVAR_$_MFConversationCalculationContext._peersFoundCount
_OBJC_IVAR_$_MFConversationCalculationContext._fuzzyDescendantsToSplitCount
_OBJC_IVAR_$_MFConversationCalculationContext._fuzzyAncestorCount
_OBJC_IVAR_$_MFConversationCalculationContext._descendantsToSplitCount
_OBJC_IVAR_$_MFConversationCalculationContext._newConversationCount
_OBJC_IVAR_$_MFConversationCalculationContext._addMessageToConversationCount
_OBJC_IVAR_$_MFConversationCalculationContext._conversationsSplitCount
_OBJC_IVAR_$_MFConversationCalculationContext._conversationsMergeCount
_OBJC_IVAR_$_MFConversationCalculationContext._messagesMergedCount
_OBJC_IVAR_$_MFConversationCalculationContext._fuzzyMatchesCacheHits
_OBJC_IVAR_$_MFConversationCalculationContext._fuzzyMatchesCacheMisses
_OBJC_IVAR_$_MFConversationCalculationContext._automatedMessagesWithReferencesCount
_OBJC_IVAR_$_MFConversationCalculationContext._automatedMessagesWithoutReferencesCount
_OBJC_IVAR_$_MFConversationCalculationContext._conversationPositionInvalidRangeCount
_OBJC_IVAR_$_MFConversationCalculationContext._conversationPositionInsertionPointUnavailableCount
_OBJC_IVAR_$_MFConversationCalculationContext._conversationPositionRangeNormalCount
_OBJC_IVAR_$_MFConversationCalculationContext._conversationPositionAdjustedForAncestorCount
_OBJC_IVAR_$_MFConversationCalculationContext._conversationPositionAdjustedForDescendantCount
_OBJC_IVAR_$_MFConversationCalculationContext._messageHasReferencesStatement
_OBJC_IVAR_$_MFConversationCalculationContext._messageHasMessageIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDOfCloneStatement
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDOfAutomatedAncestorWithReferencesStatement
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDOfAutomatedPeerWithReferencesStatement
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDOfAutomatedMessageWithoutReferencesStatement
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDOfClosestAncestorStatement
_OBJC_IVAR_$_MFConversationCalculationContext._peersOfMessageStatement
_OBJC_IVAR_$_MFConversationCalculationContext._addMessageToConversationStatement
_OBJC_IVAR_$_MFConversationCalculationContext._messagesInConversationStatement
_OBJC_IVAR_$_MFConversationCalculationContext._descendantsToSplitFromConversationStatement
_OBJC_IVAR_$_MFConversationCalculationContext._descendantsOfMessageStatement
_OBJC_IVAR_$_MFConversationCalculationContext._descendantBelongsToSameConversationAsAncestorStatement
_OBJC_IVAR_$_MFConversationCalculationContext._peersToSplitFromConversationStatement
_OBJC_IVAR_$_MFConversationCalculationContext._fuzzyMessagesWithSameSubjectStatement
_OBJC_IVAR_$_MFConversationCalculationContext._candidateMessagesForFuzzyMatchingStatement
_OBJC_IVAR_$_MFConversationCalculationContext._fuzzyMessagesToSplitFromConversationStatement
_OBJC_IVAR_$_MFConversationCalculationContext._recipientsForRowIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._dateReceivedForRowIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._senderForRowIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._conversationIDForRowIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._setFuzzyAncestorForRowIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._subjectForRowIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._automatedConversationTypeForRowIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._clonesForRowIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._countOfDistinctAutomatedConversationTypesForConversationIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._maxConversationIDStatement
_OBJC_IVAR_$_MFConversationCalculationContext._messagesMissingConversationPositionStatement
_OBJC_IVAR_$_MFConversationCalculationContext._updateConversationPositionStatement
_OBJC_IVAR_$_MFConversationCalculationContext._conversationPositionOfClosestDescendantStatement
_OBJC_IVAR_$_MFConversationCalculationContext._conversationPositionOfClosestAncestorStatement
_OBJC_IVAR_$_MFConversationCalculator._logConversationCalculationPerformance
_OBJC_IVAR_$_MFConversationCalculator._logConversationCalculationTrace
_OBJC_IVAR_$_MFConversationCalculator._logConversationCalculationSubjectPrefixTrace
_OBJC_IVAR_$_MFConversationCalculator._forceConversationSplits
_OBJC_IVAR_$_MFConversationCalculator._alwaysValidateConversations
_OBJC_IVAR_$_MFConversationCalculator._recordConversationCalculationPerformanceMetrics
_OBJC_IVAR_$_MFCriterion._uniqueId
_OBJC_IVAR_$_MFCriterion._expression
_OBJC_IVAR_$_MFCriterion._dateIsRelative
_OBJC_IVAR_$_MFCriterion._criterionIdentifier
_OBJC_IVAR_$_MFCriterion._criteria
_OBJC_IVAR_$_MFCriterion._allCriteriaMustBeSatisfied
_OBJC_IVAR_$_MFCriterion._criterionType
_OBJC_IVAR_$_MFCriterion._name
_OBJC_IVAR_$_MFCriterion._qualifier
_OBJC_IVAR_$_MFCriterion._dateUnits
_OBJC_IVAR_$_MFCriterion._specialMailboxType
_OBJC_IVAR_$_MFCriterion._knownLimit
_OBJC_IVAR_$_MFCriterion._originatedFromSearchSuggestion
_OBJC_IVAR_$_MFCrossProcessLock._identifier
_OBJC_IVAR_$_MFCrossProcessLock._lock
_OBJC_IVAR_$_MFCrossProcessLock._lockCount
_OBJC_IVAR_$_MFCrossProcessLock._port
_OBJC_IVAR_$_MFDatabaseRecoverer._path
_OBJC_IVAR_$_MFDatabaseRecoverer._type
_OBJC_IVAR_$_MFDatabaseRecoverer._analysisCondition
_OBJC_IVAR_$_MFDatabaseRecoverer._analysisResult
_OBJC_IVAR_$_MFEWSAccount._connectionLock
_OBJC_IVAR_$_MFEWSAccount._folderIdsToMailboxes
_OBJC_IVAR_$_MFEWSAccount._gateway
_OBJC_IVAR_$_MFEWSAccount._folderHierarchySyncLock
_OBJC_IVAR_$_MFEWSAccount._ewsDeliveryAccount
_OBJC_IVAR_$_MFEWSAccount._remoteTaskQueue
_OBJC_IVAR_$_MFEWSAccount._remoteFetchQueue
_OBJC_IVAR_$_MFEWSAccount._autodiscoverQueue
_OBJC_IVAR_$_MFEWSAccount._bodyFetchQueue
_OBJC_IVAR_$_MFEWSAccount._autodiscoveryTimer
_OBJC_IVAR_$_MFEWSAccount._requestResponseQueue
_OBJC_IVAR_$_MFEWSAccount._connection
_OBJC_IVAR_$_MFEWSAccount._distinguishedFolderIdsAndMailboxTypes
_OBJC_IVAR_$_MFEWSAccount._lastFullFetchDuration
_OBJC_IVAR_$_MFEWSAccount._lastFullFetchTime
_OBJC_IVAR_$_MFEWSAccount._messageTracerUUID
_OBJC_IVAR_$_MFEWSAccount._useExternalURL
_OBJC_IVAR_$_MFEWSAccount._syncIssuesEntryID
_OBJC_IVAR_$_MFEWSAccount._externalAudienceType
_OBJC_IVAR_$_MFEWSConnection._binding
_OBJC_IVAR_$_MFEWSCopyItemsRequestOperation._offlineCreatedEWSItemIdStrings
_OBJC_IVAR_$_MFEWSCopyItemsRequestOperation._sourceEWSFolderIdString
_OBJC_IVAR_$_MFEWSCopyItemsRequestOperation._destinationEWSFolderIdString
_OBJC_IVAR_$_MFEWSCopyItemsRequestOperation._EWSItemIds
_OBJC_IVAR_$_MFEWSCopyItemsResponseOperation._newEWSItemIdStrings
_OBJC_IVAR_$_MFEWSCopyItemsResponseOperation._expectedResponseCount
_OBJC_IVAR_$_MFEWSCreateEventReplyRequestOperation._messageMeetingItemIdString
_OBJC_IVAR_$_MFEWSCreateEventReplyRequestOperation._messageResponseType
_OBJC_IVAR_$_MFEWSCreateEventReplyRequestOperation._getItemsResponse
_OBJC_IVAR_$_MFEWSCreateFolderRequestOperation._offlineCreatedEWSFolderIdString
_OBJC_IVAR_$_MFEWSCreateFolderRequestOperation._parentEWSFolderIdString
_OBJC_IVAR_$_MFEWSCreateFolderRequestOperation._folderName
_OBJC_IVAR_$_MFEWSCreateFolderRequestOperation._mailboxType
_OBJC_IVAR_$_MFEWSCreateFolderResponseOperation._createdFolderId
_OBJC_IVAR_$_MFEWSCreateItemRequestOperation._EWSFolderIdString
_OBJC_IVAR_$_MFEWSCreateItemRequestOperation._messageType
_OBJC_IVAR_$_MFEWSCreateItemRequestOperation._disposition
_OBJC_IVAR_$_MFEWSCreateItemRequestOperation._offlineCreatedEWSItemIdString
_OBJC_IVAR_$_MFEWSCreateItemRequestOperation._wroteOfflineData
_OBJC_IVAR_$_MFEWSCreateItemResponseOperation._itemId
_OBJC_IVAR_$_MFEWSCreateMessageRequestOperation._message
_OBJC_IVAR_$_MFEWSCreateMessageRequestOperation._data
_OBJC_IVAR_$_MFEWSCreateMessageRequestOperation._flags
_OBJC_IVAR_$_MFEWSCreateMessageRequestOperation._sender
_OBJC_IVAR_$_MFEWSCreateMessageRequestOperation._recipientsByHeaderKey
_OBJC_IVAR_$_MFEWSCreateMessageRequestOperation._existingItemIdString
_OBJC_IVAR_$_MFEWSCreateMessageRequestOperation._getItemsResponse
_OBJC_IVAR_$_MFEWSDeleteFolderRequestOperation._folderIdString
_OBJC_IVAR_$_MFEWSDeleteItemsRequestOperation._EWSItemIds
_OBJC_IVAR_$_MFEWSDeleteItemsRequestOperation._folderIdString
_OBJC_IVAR_$_MFEWSDeliverer._error
_OBJC_IVAR_$_MFEWSDeliveryAccount._ewsAccount
_OBJC_IVAR_$_MFEWSDeliveryAccount._stripsFromHeaderWhenSending
_OBJC_IVAR_$_MFEWSFindItemsRequestOperation._additionalProperties
_OBJC_IVAR_$_MFEWSFindItemsRequestOperation._EWSFolderIdStrings
_OBJC_IVAR_$_MFEWSFindItemsRequestOperation._searchExpression
_OBJC_IVAR_$_MFEWSFindItemsResponseOperation._EWSFolderIds
_OBJC_IVAR_$_MFEWSFindItemsResponseOperation._rootFoldersByEWSFolderId
_OBJC_IVAR_$_MFEWSGateway._account
_OBJC_IVAR_$_MFEWSGateway._offlineRequests
_OBJC_IVAR_$_MFEWSGateway._syncOperationQueue
_OBJC_IVAR_$_MFEWSGateway._savedOfflineToRealEWSIdStrings
_OBJC_IVAR_$_MFEWSGetFolderRequestOperation._EWSFolderIds
_OBJC_IVAR_$_MFEWSGetFolderRequestOperation._fetchEntryIDs
_OBJC_IVAR_$_MFEWSGetFolderResponseOperation._EWSFolders
_OBJC_IVAR_$_MFEWSGetFolderResponseOperation._EWSFolderIdsRequested
_OBJC_IVAR_$_MFEWSGetItemDataRequestOperation._itemIdTypes
_OBJC_IVAR_$_MFEWSGetItemDataResponseOperation._itemIdTypes
_OBJC_IVAR_$_MFEWSGetItemDataResponseOperation._dataHandler
_OBJC_IVAR_$_MFEWSGetItemsRequestOperation._EWSItemIds
_OBJC_IVAR_$_MFEWSGetItemsRequestOperation._additionalProperties
_OBJC_IVAR_$_MFEWSGetItemsResponseOperation._EWSItems
_OBJC_IVAR_$_MFEWSGetItemsResponseOperation._EWSItemIdsRequested
_OBJC_IVAR_$_MFEWSGetUserOofSettingsRequestOperation._emailAddress
_OBJC_IVAR_$_MFEWSGetUserOofSettingsResponseOperation._oofSettings
_OBJC_IVAR_$_MFEWSGetUserOofSettingsResponseOperation._allowExternalOof
_OBJC_IVAR_$_MFEWSLibraryUpdateOperation._syncState
_OBJC_IVAR_$_MFEWSLibraryUpdateOperation._store
_OBJC_IVAR_$_MFEWSLibraryUpdateOperation._deletedItemIdStrings
_OBJC_IVAR_$_MFEWSLibraryUpdateOperation._readFlagChanges
_OBJC_IVAR_$_MFEWSLibraryUpdateOperation._getItemsOperations
_OBJC_IVAR_$_MFEWSMessage._itemId
_OBJC_IVAR_$_MFEWSMessage._changeKey
_OBJC_IVAR_$_MFEWSMessage._bodyData
_OBJC_IVAR_$_MFEWSMessage._headerData
_OBJC_IVAR_$_MFEWSMessage._headers
_OBJC_IVAR_$_MFEWSMessage._libraryID
_OBJC_IVAR_$_MFEWSMoveFolderRequestOperation._destinationEWSFolderIdString
_OBJC_IVAR_$_MFEWSMoveFolderRequestOperation._originEWSFolderIdStrings
_OBJC_IVAR_$_MFEWSMoveFolderRequestOperation._changeKeysResponse
_OBJC_IVAR_$_MFEWSOfflineGateway._offlineConnection
_OBJC_IVAR_$_MFEWSOfflineGateway._offlineToRealEWSIdStringsLock
_OBJC_IVAR_$_MFEWSOfflineGateway._offlineToRealEWSIdStrings
_OBJC_IVAR_$_MFEWSOfflineGateway._requestResponseQueue
_OBJC_IVAR_$_MFEWSOfflineGateway._lastResponseDecoded
_OBJC_IVAR_$_MFEWSRenameFolderRequestOperation._folderIdString
_OBJC_IVAR_$_MFEWSRenameFolderRequestOperation._folderName
_OBJC_IVAR_$_MFEWSRenameFolderRequestOperation._changeKeysResponse
_OBJC_IVAR_$_MFEWSRequestOperation._isOffline
_OBJC_IVAR_$_MFEWSRequestOperation._responseOperation
_OBJC_IVAR_$_MFEWSRequestOperation._gateway
_OBJC_IVAR_$_MFEWSResponseOperation._response
_OBJC_IVAR_$_MFEWSResponseOperation._gateway
_OBJC_IVAR_$_MFEWSResponseOperation._errorHandler
_OBJC_IVAR_$_MFEWSResponseOperation._lastError
_OBJC_IVAR_$_MFEWSResponseOperation._isOffline
_OBJC_IVAR_$_MFEWSSetUserOofSettingsRequestOperation._oofState
_OBJC_IVAR_$_MFEWSSetUserOofSettingsRequestOperation._internalReply
_OBJC_IVAR_$_MFEWSSetUserOofSettingsRequestOperation._externalReply
_OBJC_IVAR_$_MFEWSSetUserOofSettingsRequestOperation._duration
_OBJC_IVAR_$_MFEWSSetUserOofSettingsRequestOperation._externalAudienceType
_OBJC_IVAR_$_MFEWSSetUserOofSettingsRequestOperation._emailAddress
_OBJC_IVAR_$_MFEWSStore._syncLock
_OBJC_IVAR_$_MFEWSStore._flagsToSetDuringSync
_OBJC_IVAR_$_MFEWSStore._syncState
_OBJC_IVAR_$_MFEWSStore._folderIdString
_OBJC_IVAR_$__MFSetFlags._flagsToSet
_OBJC_IVAR_$__MFSetFlags._messages
_OBJC_IVAR_$_MFEWSSuppressReadReceiptsRequestOperation._getItemsResponse
_OBJC_IVAR_$_MFEWSSyncFolderHierarchyRequestOperation._syncState
_OBJC_IVAR_$_MFEWSSyncFolderHierarchyResponseOperation._createBlock
_OBJC_IVAR_$_MFEWSSyncFolderHierarchyResponseOperation._updateBlock
_OBJC_IVAR_$_MFEWSSyncFolderHierarchyResponseOperation._deleteBlock
_OBJC_IVAR_$_MFEWSSyncFolderItemsRequestOperation._syncState
_OBJC_IVAR_$_MFEWSSyncFolderItemsRequestOperation._targetFolder
_OBJC_IVAR_$_MFEWSSyncFolderItemsResponseOperation._folderId
_OBJC_IVAR_$_MFEWSSyncFolderItemsResponseOperation._startSyncState
_OBJC_IVAR_$_MFEWSSyncFolderItemsResponseOperation._endSyncState
_OBJC_IVAR_$_MFEWSSyncFolderItemsResponseOperation._changes
_OBJC_IVAR_$_MFEWSSyncFolderItemsResponseOperation._includesLastItemInRange
_OBJC_IVAR_$_MFEWSUpdateItemRequestOperation._EWSItemIds
_OBJC_IVAR_$_MFEWSUpdateItemRequestOperation._messageType
_OBJC_IVAR_$_MFEWSUpdateItemRequestOperation._flags
_OBJC_IVAR_$_MFEWSUpdateItemRequestOperation._getItemsResponse
_OBJC_IVAR_$_MFEWSUpdateItemRequestOperation._suppressReadReceiptsRequest
_OBJC_IVAR_$_MFFilesystemWatcher._libraryStoreToFSCache
_OBJC_IVAR_$_MFFilesystemWatcher._fseventStreamToLibraryStore
_OBJC_IVAR_$_MFFilesystemWatcher._libraryStoreToFSEventStream
_OBJC_IVAR_$_MFFilesystemWatcher._fseventsTableLock
_OBJC_IVAR_$_MFFilesystemWatcher._scanningQueue
_OBJC_IVAR_$_MFFilesystemWatcher._cachedDirectoryOperationQueue
_OBJC_IVAR_$_MFFilesystemWatcher._nextLibraryStoreCookie
_OBJC_IVAR_$_MFHTMLConverter._sequenceNumber
_OBJC_IVAR_$_MFHTMLConverter._replyPort
_OBJC_IVAR_$_MFHTMLConverter._webView
_OBJC_IVAR_$_MFHTMLConverter._resultData
_OBJC_IVAR_$_MFHTMLConverter._didHandlePortMessage
_OBJC_IVAR_$_MFHTMLConverter._mainThreadSelectorType
_OBJC_IVAR_$__MFIMAPMailboxDeletionQueueEntry._urls
_OBJC_IVAR_$__MFIMAPMailboxDeletionQueueEntry._paths
_OBJC_IVAR_$__MFIMAPMailboxDeletionQueueEntry._account
_OBJC_IVAR_$_MFIMAPAccount._mailboxListingLock
_OBJC_IVAR_$_MFIMAPAccount._shouldIncludePrefixInPath
_OBJC_IVAR_$_MFIMAPAccount._connectionPoolLock
_OBJC_IVAR_$_MFIMAPAccount._mailboxURLsToSynchronize
_OBJC_IVAR_$_MFIMAPAccount._IMAPMailboxes
_OBJC_IVAR_$_MFIMAPAccount._IMAPQuotaRoots
_OBJC_IVAR_$_MFIMAPAccount._allowsInputForConnectionProblems
_OBJC_IVAR_$_MFIMAPAccount._namespacePrefixes
_OBJC_IVAR_$_MFIMAPAccount._fsPrefixLock
_OBJC_IVAR_$_MFIMAPAccount._remoteTaskQueue
_OBJC_IVAR_$_MFIMAPAccount._remoteFetchQueue
_OBJC_IVAR_$_MFIMAPAccount._allMailLock
_OBJC_IVAR_$_MFIMAPAccount._serverDefinedArchiveMailboxLock
_OBJC_IVAR_$_MFIMAPAccount._serverDefinedDraftsMailboxLock
_OBJC_IVAR_$_MFIMAPAccount._serverDefinedJunkMailboxLock
_OBJC_IVAR_$_MFIMAPAccount._serverDefinedSentMailboxLock
_OBJC_IVAR_$_MFIMAPAccount._serverDefinedTrashMailboxLock
_OBJC_IVAR_$_MFIMAPAccount._deferredInitializationQueue
_OBJC_IVAR_$_MFIMAPAccount._separatorChar
_OBJC_IVAR_$_MFIMAPAccount._lastKnownCapabilities
_OBJC_IVAR_$_MFIMAPAccount._offlineCache
_OBJC_IVAR_$_MFIMAPAccount._connectionPool
_OBJC_IVAR_$_MFIMAPAccount._allMailMailbox
_OBJC_IVAR_$_MFIMAPAccount._readBufferSize
_OBJC_IVAR_$_MFIMAPAccount._serverDefinedArchiveMailbox
_OBJC_IVAR_$_MFIMAPAccount._serverDefinedDraftsMailbox
_OBJC_IVAR_$_MFIMAPAccount._serverDefinedJunkMailbox
_OBJC_IVAR_$_MFIMAPAccount._serverDefinedSentMailbox
_OBJC_IVAR_$_MFIMAPAccount._serverDefinedTrashMailbox
_OBJC_IVAR_$_MFIMAPAccount._lastUnreadCountsAndNewMessagesUpdateTime
_OBJC_IVAR_$_MFIMAPAccount._isFetchingUnreadCountsAndCheckingNewMessagesForAllMailboxes
_OBJC_IVAR_$_MFIMAPAccount._serverPathPrefixAsFilesystemPath
_OBJC_IVAR_$_MFIMAPAccount._serverPathPrefixWithFilesystemSeparator
_OBJC_IVAR_$_MFIMAPAccount._idleStore
_OBJC_IVAR_$_MFIMAPAccount._lastMailboxListFetchTime
_OBJC_IVAR_$_MFIMAPAccount._recoveringFromConnectionLoss
_OBJC_IVAR_$_MFIMAPAccount._lastConnectionFailed
_OBJC_IVAR_$_MFIMAPOperation._mailboxName
_OBJC_IVAR_$_MFIMAPOperation._usesRealUids
_OBJC_IVAR_$_MFIMAPStoreOperation._objectsToSet
_OBJC_IVAR_$_MFIMAPStoreOperation._objectsToClear
_OBJC_IVAR_$_MFIMAPStoreOperation._uids
_OBJC_IVAR_$_MFIMAPAppendMessageOperation._uid
_OBJC_IVAR_$_MFIMAPAppendMessageOperation._flags
_OBJC_IVAR_$_MFIMAPAppendMessageOperation._internalDateAsInt
_OBJC_IVAR_$_MFIMAPAppendMessageOperation._size
_OBJC_IVAR_$_MFIMAPCopyMessagesOperation._sourceUids
_OBJC_IVAR_$_MFIMAPCopyMessagesOperation._destinationUids
_OBJC_IVAR_$_MFIMAPCopyMessagesOperation._destinationMailbox
_OBJC_IVAR_$_MFIMAPOfflineCopyOnStupidServerOperation._messageIds
_OBJC_IVAR_$_MFIMAPOfflineCopyOnStupidServerOperation._internalDates
_OBJC_IVAR_$__IMAPOfflineRestoreContext._monitor
_OBJC_IVAR_$__IMAPOfflineRestoreContext._gateway
_OBJC_IVAR_$__IMAPOfflineRestoreContext._temporaryToRealUidMap
_OBJC_IVAR_$__IMAPOfflineRestoreContext._storesByMailboxName
_OBJC_IVAR_$__IMAPOfflineRestoreContext._currentSize
_OBJC_IVAR_$__IMAPOfflineRestoreContext._totalSize
_OBJC_IVAR_$__IMAPOfflineRestoreContext._activityAccessKey
_OBJC_IVAR_$__IMAPOfflineRestoreContext._oldTaskName
_OBJC_IVAR_$_MFIMAPOperationCache._account
_OBJC_IVAR_$_MFIMAPOperationCache._ops
_OBJC_IVAR_$_MFIMAPOperationCache._lastUid
_OBJC_IVAR_$_MFIMAPOperationCache._opsChanged
_OBJC_IVAR_$_MFIMAPSizeEngine._observedIMAPQuotaRoots
_OBJC_IVAR_$_MFIMAPSizeEngine._quotasToFetch
_OBJC_IVAR_$_MFIMAPSizeEngine._mailboxesByQuotaRoot
_OBJC_IVAR_$_MFIMAPSizeEngine._quotaStatus
_OBJC_IVAR_$_MFIMAPSizeEngine._workerThreadCount
_OBJC_IVAR_$_MFIMAPSizeEngine._observedIMAPMailboxes
_OBJC_IVAR_$_MFJunkMailFilter._map
_OBJC_IVAR_$_MFJunkMailFilter._isDirty
_OBJC_IVAR_$_MFJunkMailFilter._useCleanMap
_OBJC_IVAR_$_MFJunkMailFilter._oldMapFileURL
_OBJC_IVAR_$_MFJunkMailFilter._mapFileURL
_OBJC_IVAR_$_MFJunkMailFilter._mapFilePath
_OBJC_IVAR_$_MFJunkMailFilter._isInTraining
_OBJC_IVAR_$__MFMessageLoadingContext._seenConversationIDs
_OBJC_IVAR_$__MFMessageLoadingContext._messages
_OBJC_IVAR_$__MFMessageLoadingContext._target
_OBJC_IVAR_$__MFMessageLoadingContext._chunkSize
_OBJC_IVAR_$__MFMessageLoadingContext._chunkInterval
_OBJC_IVAR_$__MFMessageLoadingContext._lastChunkSentTime
_OBJC_IVAR_$__MFMessageLoadingContext._messagesLoaded
_OBJC_IVAR_$__MFMessageLoadingContext._options
_OBJC_IVAR_$__MFMessageLoadingContext._database
_OBJC_IVAR_$_MFSqliteHandle._db
_OBJC_IVAR_$_MFSqliteHandle._searchStringArray
_OBJC_IVAR_$_MFSqliteHandle._busyTimer
_OBJC_IVAR_$_MFSqliteHandle._needsUnreadCountUpdate
_OBJC_IVAR_$__MFMessageCollector._messages
_OBJC_IVAR_$__MFMessageCollector._didCancel
_OBJC_IVAR_$__MFConversationsMessageCollector._messages
_OBJC_IVAR_$__MFConversationsMessageCollector._conversationsMembers
_OBJC_IVAR_$__MFConversationsMessageCollector._query
_OBJC_IVAR_$__MFDataCollector._message
_OBJC_IVAR_$__MFDataCollector._part
_OBJC_IVAR_$__MFDataCollector._path
_OBJC_IVAR_$__MFDataCollector._fileHandle
_OBJC_IVAR_$__MFDataCollector._tempPath
_OBJC_IVAR_$__MFDataCollector._length
_OBJC_IVAR_$__MFDataCollector._isEmpty
_OBJC_IVAR_$__MFDataCollector._plistData
_OBJC_IVAR_$__MFProgressHandlerMonitorContext._progressMonitor
_OBJC_IVAR_$__MFProgressHandlerMonitorContext._activityMonitor
_OBJC_IVAR_$_MFLibraryCalendarEvent._originalReceivedAccountURLString
_OBJC_IVAR_$_MFLibraryCalendarEvent._associatedCalendarItemIdString
_OBJC_IVAR_$_MFLibraryCalendarEvent._location
_OBJC_IVAR_$_MFLibraryCalendarEvent._uid
_OBJC_IVAR_$_MFLibraryCalendarEvent._startDate
_OBJC_IVAR_$_MFLibraryCalendarEvent._endDate
_OBJC_IVAR_$_MFLibraryCalendarEvent._isAllDayEvent
_OBJC_IVAR_$_MFLibraryCalendarEvent._isOutOfDate
_OBJC_IVAR_$_MFLibraryCalendarEvent._hasBeenProcessed
_OBJC_IVAR_$_MFLibraryCalendarEvent._isResponseRequested
_OBJC_IVAR_$_MFLibraryCalendarEvent._responseStatus
_OBJC_IVAR_$_MFLibraryIMAPMessage._headers
_OBJC_IVAR_$_MFLibraryIMAPStore._mailboxName
_OBJC_IVAR_$_MFLibraryIMAPStore._fetchPipeline
_OBJC_IVAR_$_MFLibraryIMAPStore._downloadCache
_OBJC_IVAR_$_MFLibraryIMAPStore._supportsCustomPermanentFlags
_OBJC_IVAR_$_MFLibraryIMAPStore._copyLock
_OBJC_IVAR_$_MFLibraryIMAPStore._IMAPMailbox
_OBJC_IVAR_$_MFLibraryIMAPStore._pendingCompacts
_OBJC_IVAR_$_MFLibraryIMAPStore._pendingCompactsQueue
_OBJC_IVAR_$_MFLibraryIMAPStore._syncEngine
_OBJC_IVAR_$_MFLibraryIMAPStore._readyToDealloc
_OBJC_IVAR_$_MFLibraryIMAPStore._recentlyDeletedMessageIDs
_OBJC_IVAR_$_MFLibraryIMAPStore._recentFlagChangesByMessageID
_OBJC_IVAR_$_MFLibraryIMAPStore._isOpenedByUser
_OBJC_IVAR_$_MFLibraryIMAPStore._totalCount
_OBJC_IVAR_$_MFLibraryMessage._libraryID
_OBJC_IVAR_$_MFLibraryMessage._hasSetReferences
_OBJC_IVAR_$_MFLibraryMessage._hasSetCalendarEvent
_OBJC_IVAR_$_MFLibraryMessage._dataSource
_OBJC_IVAR_$_MFLibraryMessage._remoteID
_OBJC_IVAR_$_MFLibraryMessage._uid
_OBJC_IVAR_$_MFLibraryMessage._remoteFlags
_OBJC_IVAR_$_MFLibraryMessage._isCachingBodyAndHeaders
_OBJC_IVAR_$_MFLibraryMessage._conversationID
_OBJC_IVAR_$_MFLibraryMessage._conversationPosition
_OBJC_IVAR_$_MFLibraryMessage._mailboxID
_OBJC_IVAR_$_MFLibraryMessage._originalMailboxID
_OBJC_IVAR_$_MFLibraryMessage._size
_OBJC_IVAR_$_MFLibraryMessage._isBeingChanged
_OBJC_IVAR_$_MFLibraryMessage._options
_OBJC_IVAR_$_MFLibraryMessage._isCompacted
_OBJC_IVAR_$_MFLibraryStoreMessageConsumer._libraryStore
_OBJC_IVAR_$_MFLibraryStoreMessageConsumer._callbackQueue
_OBJC_IVAR_$_MFLibraryStoreMessageConsumer._collectorID
_OBJC_IVAR_$_MFLibraryStoreMessageConsumer._shouldCancel
_OBJC_IVAR_$_MFLibraryStore._consumerLock
_OBJC_IVAR_$_MFLibraryStore._openOptionsLock
_OBJC_IVAR_$_MFLibraryStore._openOptions
_OBJC_IVAR_$_MFLibraryStore._url
_OBJC_IVAR_$_MFLibraryStore._criterion
_OBJC_IVAR_$_MFLibraryStore._memberMessageIDs
_OBJC_IVAR_$_MFLibraryStore._allMessagesDuringOpening
_OBJC_IVAR_$_MFLibraryStore._consumer
_OBJC_IVAR_$_MFLibraryStore._startedWatcher
_OBJC_IVAR_$_MFLibraryStore._filesystemWatcherCookie
_OBJC_IVAR_$_MFLibraryThread._monitor
_OBJC_IVAR_$_MFLibraryThread._storeReqCounts
_OBJC_IVAR_$_MFLibraryThread._requests
_OBJC_IVAR_$__MFLibraryThreadRequest._store
_OBJC_IVAR_$__MFLibraryThreadRequest._messages
_OBJC_IVAR_$__MFLibraryThreadRequest._isFollowOnToProgressTask
_OBJC_IVAR_$_MFLibraryUpgrader._majorVersion
_OBJC_IVAR_$_MFLibraryUpgrader._minorVersion
_OBJC_IVAR_$_MFLibraryUpgrader._upgraderDB
_OBJC_IVAR_$_MFLibraryUpgrader._handle
_OBJC_IVAR_$_MFLibraryUpgrader._delegate
_OBJC_IVAR_$_MFLibraryUpgrader._readOnly
_OBJC_IVAR_$_MFLibraryUpgrader._monitor
_OBJC_IVAR_$_MFLibraryUpgrader._migrationDestinationPath
_OBJC_IVAR_$_MFLibraryUpgrader._shouldRecalculateConversations
_OBJC_IVAR_$_MFLibraryUpgrader._shouldUpdateSubjectPrefixes
_OBJC_IVAR_$_MFLibraryUpgrader._shouldResetSnippets
_OBJC_IVAR_$_MFLibraryUpgrader._shouldRecalculateMessageCounts
_OBJC_IVAR_$_MFLibraryUpgrader._shouldUpdateSpotlightAttributes
_OBJC_IVAR_$_MFLibraryUpgrader._shouldUpdateMailboxURLs
_OBJC_IVAR_$_MFLibraryUpgrader._shouldResetPasswords
_OBJC_IVAR_$_MFLibraryUpgrader._shouldResetChangeIdentifierForGmailAccounts
_OBJC_IVAR_$_MFLibraryUpgrader._shouldNormalizeMailboxPaths
_OBJC_IVAR_$_MFLibraryUpgrader._shouldResetDynamicAccountConfiguration
_OBJC_IVAR_$_MFLibraryUpgrader._shouldRemoveMailboxesWithAbsoluteURLs
_OBJC_IVAR_$_MFLibraryUpgrader._initialLastWriteMinorVersion
_OBJC_IVAR_$_MFLibraryUpgrader._activityToken
_OBJC_IVAR_$_MFLibraryUpgrader._activity
_OBJC_IVAR_$_MFLocationManager._locations
_OBJC_IVAR_$_MFLocationManager._invocationQueue
_OBJC_IVAR_$_MFLocationManager._supressNotifications
_OBJC_IVAR_$_MFLocationManager._current
_OBJC_IVAR_$_MFNetworkLocation._accountDefaults
_OBJC_IVAR_$_MFNetworkLocation._domainsBySubnet
_OBJC_IVAR_$_MFMailAccount._mailAccountLock
_OBJC_IVAR_$_MFMailAccount._backgroundActivityFlagsLock
_OBJC_IVAR_$_MFMailAccount._mailboxLock
_OBJC_IVAR_$_MFMailAccount._cacheChangeLock
_OBJC_IVAR_$_MFMailAccount._rootMailbox
_OBJC_IVAR_$_MFMailAccount._cacheWriteTimer
_OBJC_IVAR_$_MFMailAccount._path
_OBJC_IVAR_$_MFMailAccount._cacheHasBeenRead
_OBJC_IVAR_$_MFMailAccount._mailboxListInitializationInProgress
_OBJC_IVAR_$_MFMailAccount._needsChecking
_OBJC_IVAR_$_MFMailAccount._backgroundFetchInProgress
_OBJC_IVAR_$_MFMailAccount._inboxMailbox
_OBJC_IVAR_$_MFMailAccount._draftsMailbox
_OBJC_IVAR_$_MFMailAccount._sentMessagesMailbox
_OBJC_IVAR_$_MFMailAccount._trashMailbox
_OBJC_IVAR_$_MFMailAccount._junkMailbox
_OBJC_IVAR_$_MFMailAccount._notesMailbox
_OBJC_IVAR_$_MFMailAccount._todosMailbox
_OBJC_IVAR_$_MFMailAccount._outboxMailbox
_OBJC_IVAR_$_MFMailAccount._archiveMailbox
_OBJC_IVAR_$_MFMailAccount._lastConnectionError
_OBJC_IVAR_$_MFMailAccount._validator
_OBJC_IVAR_$_MFMailbox._isSmartMailbox
_OBJC_IVAR_$_MFMailbox._countsWereLoaded
_OBJC_IVAR_$_MFMailbox._tree
_OBJC_IVAR_$_MFMailbox._numberOfVisibleChildren
_OBJC_IVAR_$_MFMailbox._displayIndexLock
_OBJC_IVAR_$_MFMailbox._displayIndex
_OBJC_IVAR_$_MFMailbox._countsLock
_OBJC_IVAR_$_MFMailbox._dontIndexFlagLock
_OBJC_IVAR_$_MFMailbox._typeAndRepresentedAccountLock
_OBJC_IVAR_$_MFMailbox._criteriaLock
_OBJC_IVAR_$_MFMailbox._attributesLock
_OBJC_IVAR_$_MFMailbox._deletionLock
_OBJC_IVAR_$_MFMailbox._account
_OBJC_IVAR_$_MFMailbox._attributes
_OBJC_IVAR_$_MFMailbox._name
_OBJC_IVAR_$_MFMailbox._pathComponent
_OBJC_IVAR_$_MFMailbox._needsToSaveMailboxName
_OBJC_IVAR_$_MFMailbox._allCriteriaMustBeSatisfied
_OBJC_IVAR_$_MFMailbox._criteria
_OBJC_IVAR_$_MFMailbox._criteriaState
_OBJC_IVAR_$_MFMailbox._deletionInProgress
_OBJC_IVAR_$_MFMailbox._pendingNameChange
_OBJC_IVAR_$_MFMailbox._realFullPath
_OBJC_IVAR_$_MFMailbox._unseenCount
_OBJC_IVAR_$_MFMailbox._reservedPathComponents
_OBJC_IVAR_$_MFMailbox._visibleChildrenIndexes
_OBJC_IVAR_$_MFMailbox._sortedChildrenAreUpToDate
_OBJC_IVAR_$_MFMailbox._isManuallySorted
_OBJC_IVAR_$_MFMailbox._isVisibleFlaggedMailbox
_OBJC_IVAR_$_MFMailbox._sortedChildren
_OBJC_IVAR_$_MFMailbox._representedAccount
_OBJC_IVAR_$_MFMailbox._type
_OBJC_IVAR_$_MFMailbox._dontIndexFlagWritten
_OBJC_IVAR_$_MFMailbox._respectsMailboxExclusions
_OBJC_IVAR_$_MFMailbox._displayCount
_OBJC_IVAR_$_MFMailbox._deletedCount
_OBJC_IVAR_$_MFMailbox._failedToOpen
_OBJC_IVAR_$_MFMailbox._openFailureError
_OBJC_IVAR_$_MFMailbox._smartMailboxVersion
_OBJC_IVAR_$_MFMailbox._syncId
_OBJC_IVAR_$_MFMailbox._storeIsReadOnly
_OBJC_IVAR_$_MFMailbox._unreadCountQueryObserverID
_OBJC_IVAR_$_MFMailbox._uuidUpdatedInDatabase
_OBJC_IVAR_$_MFMailbox._uuid
_OBJC_IVAR_$_MFMailbox._isPublicOrShared
_OBJC_IVAR_$__MFMailboxEnumerator._startTree
_OBJC_IVAR_$__MFMailboxEnumerator._lastTree
_OBJC_IVAR_$__MFSmartMailboxesEnumerator._smartMailboxes
_OBJC_IVAR_$__MFSmartMailboxesEnumerator._nextMailboxIndex
_OBJC_IVAR_$__MFSmartMailboxesEnumerator._currentMailboxEnumerator
_OBJC_IVAR_$__MFMailboxChildrenEnumerator._root
_OBJC_IVAR_$__MFMailboxChildrenEnumerator._includeHidden
_OBJC_IVAR_$__MFMailboxChildrenEnumerator._currentTree
_OBJC_IVAR_$_MFMessageCounts._totalCount
_OBJC_IVAR_$_MFMessageCounts._unreadCount
_OBJC_IVAR_$_MFMessageCounts._unseenCount
_OBJC_IVAR_$_MFMessageCounts._deletedCount
_OBJC_IVAR_$_MFMessageCounts._unreadAdjustedForDuplicates
_OBJC_IVAR_$_MFMailMigrator._fileManager
_OBJC_IVAR_$_MFMailMigrator._supportDirectory
_OBJC_IVAR_$_MFMailMigrator._isUsingAlternateDestination
_OBJC_IVAR_$_MFMailMigrator._destinationSupportDirectory
_OBJC_IVAR_$_MFMailMigrator._isComplex
_OBJC_IVAR_$_MFMailMigrator._tempSupportDirectoryV2
_OBJC_IVAR_$_MFMailMigrator._supportDirectoryV2
_OBJC_IVAR_$_MFMailMigrator._mailDataDirectoryV2
_OBJC_IVAR_$_MFMailMigrator._migrationSuccessfulFilepath
_OBJC_IVAR_$_MFMailMigrator._v1ItemsToMigrateFilepath
_OBJC_IVAR_$_MFMailMigrator._lostItems
_OBJC_IVAR_$_MFMailMigrator._lostItemsFilepath
_OBJC_IVAR_$_MFMailMigrator._lostAndFoundDirectory
_OBJC_IVAR_$_MFMailMigrator._logDirectory
_OBJC_IVAR_$_MFMailMigrator._progressDelegate
_OBJC_IVAR_$_MFMailMigrator._nonFatalAttachmentErrorLibraryIDs
_OBJC_IVAR_$_MFMailMigrator._progressChunkSize
_OBJC_IVAR_$_MFMailMigrator._messagesProgressCount
_OBJC_IVAR_$_MFMailMigrator._v1CleanupCount
_OBJC_IVAR_$_MFMailMigrator._isTrackingCleanupProgress
_OBJC_IVAR_$_MFMailMigrator._emlxCountPreMigration
_OBJC_IVAR_$_MFMailMigrator._emlxCountPostMigration
_OBJC_IVAR_$_MFMailMigrator._lostAndFoundEmlxCount
_OBJC_IVAR_$_MFMailMigrator._messageCountPreMigration
_OBJC_IVAR_$__MFZipStream._destination
_OBJC_IVAR_$__MFZipStream._zipStream
_OBJC_IVAR_$__MFZipStream.inBuffer
_OBJC_IVAR_$__MFZipStream.outBuffer
_OBJC_IVAR_$__MFZipStream._closed
_OBJC_IVAR_$_MFMessageAddressee._displayName
_OBJC_IVAR_$_MFMessageAddressee._address
_OBJC_IVAR_$_MFMessageAddressee._type
_OBJC_IVAR_$_MFMessageAddressee._message
_OBJC_IVAR_$_MFMessageContext._filesystemQueue
_OBJC_IVAR_$_MFMessageContext._waitingQueue
_OBJC_IVAR_$_MFMessageCriterion._originalGroupUniqueID
_OBJC_IVAR_$_MFMessageCriterion._groupUniqueID
_OBJC_IVAR_$_MFMessageCriterion._specialMailboxTypeCode
_OBJC_IVAR_$_MFMessageDeliverer._message
_OBJC_IVAR_$_MFMessageDeliverer._messageStore
_OBJC_IVAR_$_MFMessageDeliverer._account
_OBJC_IVAR_$_MFMessageDeliverer._delegate
_OBJC_IVAR_$_MFMessageDeliverer._askForReadReceipt
_OBJC_IVAR_$_MFMessageDeliverer._deliveryStatus
_OBJC_IVAR_$_MFMessageReplyGenerator._documentView
_OBJC_IVAR_$_MFMessageReplyGenerator._completionHandler
_OBJC_IVAR_$_MFMessageReplyGenerator._contentToAdd
_OBJC_IVAR_$_MFMessageReplyGenerator._attributionLine
_OBJC_IVAR_$_MFMessageReplyGenerator._messageHeaders
_OBJC_IVAR_$_MFMessageReplyGenerator._me
_OBJC_IVAR_$_MFMessageRouter._queuedMessagesFull
_OBJC_IVAR_$_MFMessageRouter._queuedMessages
_OBJC_IVAR_$_MFMessageRouter._bytesInQueue
_OBJC_IVAR_$_MFMessageRouter._queueSize
_OBJC_IVAR_$_MFMessageRouter._queuedMessagesEmpty
_OBJC_IVAR_$_MFMessageRouter._queuedMessagesRouting
_OBJC_IVAR_$_MFMessageRouter._routingThreadShouldQuit
_OBJC_IVAR_$_MFMessageRouter._store
_OBJC_IVAR_$_MFMessageRouter._numMessagesRoutedSoFar
_OBJC_IVAR_$_MFMessageRouter._numMessagesToBeRouted
_OBJC_IVAR_$_MFMessageRouter._isUserAction
_OBJC_IVAR_$__MFRoutingDictionaryContext._transferredOrDeleted
_OBJC_IVAR_$__MFRoutingDictionaryContext._rejectedMessages
_OBJC_IVAR_$__MFRoutingDictionaryContext._messagesToBeDeleted
_OBJC_IVAR_$__MFRoutingDictionaryContext._destinationStores
_OBJC_IVAR_$_MFMessageRule._uniqueId
_OBJC_IVAR_$_MFMessageRule._criteria
_OBJC_IVAR_$_MFMessageRule._ruleName
_OBJC_IVAR_$_MFMessageRule._isActive
_OBJC_IVAR_$_MFMessageRule._isActiveSyncState
_OBJC_IVAR_$_MFMessageRule._allCriteriaMustBeSatisfied
_OBJC_IVAR_$_MFMessageRule._destinationMailboxURL
_OBJC_IVAR_$_MFMessageRule._shouldTransferMessage
_OBJC_IVAR_$_MFMessageRule._copyDestinationMailboxURL
_OBJC_IVAR_$_MFMessageRule._shouldCopyMessage
_OBJC_IVAR_$_MFMessageRule._soundPath
_OBJC_IVAR_$_MFMessageRule._shouldNotifyUser
_OBJC_IVAR_$_MFMessageRule._shouldSendNotification
_OBJC_IVAR_$_MFMessageRule._shouldStopEvaluatingRules
_OBJC_IVAR_$_MFMessageRule._autoResponseType
_OBJC_IVAR_$_MFMessageRule._responseMessage
_OBJC_IVAR_$_MFMessageRule._recipients
_OBJC_IVAR_$_MFMessageRule._flags
_OBJC_IVAR_$_MFMessageRule._color
_OBJC_IVAR_$_MFMessageRule._highlightTextUsingColor
_OBJC_IVAR_$_MFMessageRule._appleScriptPath
_OBJC_IVAR_$_MFMessageRule._addInvitationAttachmentToCalendar
_OBJC_IVAR_$_MFMessageRule._otherInfo
_OBJC_IVAR_$_MFMessageRule._destinationMailbox
_OBJC_IVAR_$_MFMessageRule._copyDestinationMailbox
_OBJC_IVAR_$_MFMessageRule._ruleWasAutoDeactivated
_OBJC_IVAR_$_MFMessageRule._isJunkMailRule
_OBJC_IVAR_$_MFMessageRule._isSafeToMarkAsNotJunkRule
_OBJC_IVAR_$_MFMessageRule._isCalendarRule
_OBJC_IVAR_$_MFMessageRule._didChange
_OBJC_IVAR_$_MFMessageRuleCriterion._rule
_OBJC_IVAR_$_MFMessageSortingInformation._sortContext
_OBJC_IVAR_$_MFMessageSortingInformation._sortValues
_OBJC_IVAR_$_MFMessageSortingInformation._isSortedAscending
_OBJC_IVAR_$_MFMessageSortingInformation._skipAutomaticSecondarySort
_OBJC_IVAR_$__MFMessageSortingValueSender._senderDisplayName
_OBJC_IVAR_$__MFMessageSortingValueColor._colorForSort
_OBJC_IVAR_$__MFMessageSortingValueDateLastViewed._dateLastViewedAsTimeIntervalSince1970
_OBJC_IVAR_$__MFMessageSortingValueMessageFlags._messageFlags
_OBJC_IVAR_$__MFMessageSortingValueMessageSize._messageSize
_OBJC_IVAR_$__MFMessageSortingValueNumberOfAttachments._numberOfAttachments
_OBJC_IVAR_$__MFMessageSortingValueSubject._subject
_OBJC_IVAR_$__MFMessageSortingValueSubject._subjectPrefixLength
_OBJC_IVAR_$__MFMessageSortingValueTo._to
_OBJC_IVAR_$__MFMessageSortingValueDateReceived._dateReceivedAsTimeIntervalSince1970
_OBJC_IVAR_$__MFMessageSortingValueDateSent._dateSentAsTimeIntervalSince1970
_OBJC_IVAR_$__MFMessageSortingValueMailbox._mailbox
_OBJC_IVAR_$__MFMessageSortingValueLibraryID._libraryID
_OBJC_IVAR_$_MFCachedMailboxInfo._mailboxID
_OBJC_IVAR_$_MFCachedMailboxInfo._mailboxType
_OBJC_IVAR_$_MFCachedMailboxInfo._mailbox
_OBJC_IVAR_$_MFMessageStore._isTryingToClose
_OBJC_IVAR_$_MFMessageStore._isReadOnly
_OBJC_IVAR_$_MFMessageStore._mailbox
_OBJC_IVAR_$_MFMessageStore._account
_OBJC_IVAR_$_MFMessageStore._compactOnClose
_OBJC_IVAR_$_MFMessageStore._openAndCloseMailboxQueue
_OBJC_IVAR_$_MFMessageStore._retainCountLock
_OBJC_IVAR_$_MFMessageStore._uniqueStrings
_OBJC_IVAR_$_MFMessageStore._cacheLock
_OBJC_IVAR_$_MFMessageStore._fetchLockMap
_OBJC_IVAR_$_MFMessageStore._deleteQueue
_OBJC_IVAR_$_MFMessageStore._timer
_OBJC_IVAR_$_MFMessageStore._allMessages
_OBJC_IVAR_$_MFMessageStore._isWritingChangesToDisk
_OBJC_IVAR_$_MFMessageStore._storeState
_OBJC_IVAR_$_MFMessageStore._haveOpenLockFile
_OBJC_IVAR_$_MFMessageStore._bodyDataCache
_OBJC_IVAR_$_MFMessageStore._headerDataCache
_OBJC_IVAR_$_MFMessageStore._bodyCache
_OBJC_IVAR_$_MFMessageStore._headerCache
_OBJC_IVAR_$_MFMessageStore._openMonitor
_OBJC_IVAR_$_MFMessageStore._hasUnsavedChangesToMessageData
_OBJC_IVAR_$_MFMessageStore._forceInvalidation
_OBJC_IVAR_$_MFMessageThread._pendingChanges
_OBJC_IVAR_$_MFMessageThread._unreadMessageCount
_OBJC_IVAR_$_MFMessageThread._flaggedMessageCount
_OBJC_IVAR_$_MFMessageThread._junkMessageCount
_OBJC_IVAR_$_MFMessageThread._attachmentCount
_OBJC_IVAR_$_MFMessageThread._filteredMessages
_OBJC_IVAR_$_MFMessageThread._showDateInSubject
_OBJC_IVAR_$_MFMessageThread._newestMessage
_OBJC_IVAR_$_MFMessageThread._oldestMessage
_OBJC_IVAR_$_MFMessageThread._newestReadMessage
_OBJC_IVAR_$_MFMessageThread._snippetMessage
_OBJC_IVAR_$_MFMessageThread._newestReceivedMessage
_OBJC_IVAR_$_MFMessageThread._newestSentMessage
_OBJC_IVAR_$_MFMessageThread._messageWithHighestLibraryID
_OBJC_IVAR_$_MFMessageThread._formattedUnreadMessageCount
_OBJC_IVAR_$_MFMessageThread._isThreadOpen
_OBJC_IVAR_$_MFNeXTStore._mboxData
_OBJC_IVAR_$_MFNeXTStore._incomingMboxData
_OBJC_IVAR_$_MFNeXTStore._haveUpdatedMetadata
_OBJC_IVAR_$_MFNeXTStore._toc
_OBJC_IVAR_$_MFNeXTStore._importMode
_OBJC_IVAR_$_MFNeXTStore._mboxIsOnSMB
_OBJC_IVAR_$_MFNeXTStore._rebuildingTOC
_OBJC_IVAR_$_MFParentalControlManager._tasks
_OBJC_IVAR_$_MFParentalControlManager._pcStores
_OBJC_IVAR_$_MFParentalControlManager._recentRequests
_OBJC_IVAR_$_MFParentalControlManager._recentRequestsDirty
_OBJC_IVAR_$_MFParentalControlManager._pendingRequests
_OBJC_IVAR_$_MFParentalControlManager._lastCleanupDate
_OBJC_IVAR_$_MFParentalControlManager._isDirty
_OBJC_IVAR_$_MFPOPAccount._connectionActivityLock
_OBJC_IVAR_$_MFPOPAccount._seenMessagesManagerLock
_OBJC_IVAR_$_MFPOPAccount._fetcher
_OBJC_IVAR_$_MFPOPAccount._fetchMonitor
_OBJC_IVAR_$_MFPOPAccount._fetcherNeedsReset
_OBJC_IVAR_$_MFPOPAccount._deletingMessages
_OBJC_IVAR_$_MFPOPAccount._hasDoneBackgroundSynchronization
_OBJC_IVAR_$_MFPOPConnection._serverMessageIdsByNumber
_OBJC_IVAR_$_MFPOPConnection._delegate
_OBJC_IVAR_$_MFPOPConnection._listResults
_OBJC_IVAR_$_MFPOPConnection._capabilities
_OBJC_IVAR_$_MFPOPConnection._capaCommandFailed
_OBJC_IVAR_$_MFPOPConnection._apopTimeStamp
_OBJC_IVAR_$_MFPOPConnection._sendBuffer
_OBJC_IVAR_$_MFPOPConnection._context
_OBJC_IVAR_$_MFPOPConnection._numberOfMessagesToFetch
_OBJC_IVAR_$_MFPOPConnection._numberOfMessagesFetched
_OBJC_IVAR_$_MFPOPConnection._totalBytesToFetch
_OBJC_IVAR_$_MFPOPConnection._totalBytesReceived
_OBJC_IVAR_$_MFPOPConnection._currentlyFetchingMessage
_OBJC_IVAR_$_MFPOPConnection._activityMonitorKey
_OBJC_IVAR_$_MFPOPConnection._numberOfMessagesAvailable
_OBJC_IVAR_$_MFPOPConnection._connectionShouldPrefetchMessages
_OBJC_IVAR_$_MFPOPMessage._messageNumber
_OBJC_IVAR_$_MFPOPMessage._messageID
_OBJC_IVAR_$_MFPOPMessage._messageData
_OBJC_IVAR_$_MFPOPSizeEngine._infoByMessageID
_OBJC_IVAR_$_MFPOPStore._skippedMessageIds
_OBJC_IVAR_$_MFPOPStore._lastConnectionFailed
_OBJC_IVAR_$_MFPOPStore._messageNumbersToDelete
_OBJC_IVAR_$_MFPOPStore._routerCancelled
_OBJC_IVAR_$_MFPreparedStatement._compiled
_OBJC_IVAR_$_MFRecoveredMessage._path
_OBJC_IVAR_$_MFRecoveredMessage._bodyData
_OBJC_IVAR_$_MFRecoveredMessage._loadedFileData
_OBJC_IVAR_$_MFRecoveredMessage._allData
_OBJC_IVAR_$_MFRecoveredMessage._messageBody
_OBJC_IVAR_$_MFRecoveredMessage._remoteFlags
_OBJC_IVAR_$_MFRecoveredMessage._headers
_OBJC_IVAR_$_MFRecoveredMessage._remoteID
_OBJC_IVAR_$_MFRecoveredMessage._remoteMailboxURL
_OBJC_IVAR_$_MFRecoveredMessage._originalMailboxURL
_OBJC_IVAR_$_MFRecoveredMessage._gmailLabelIDs
_OBJC_IVAR_$_MFRecoveredStore._pathsToImport
_OBJC_IVAR_$_MFRedundantContentMarkup._message
_OBJC_IVAR_$_MFRedundantContentMarkup._parsedMessage
_OBJC_IVAR_$_MFRedundantContentMarkup._ancestorUsedForComparison
_OBJC_IVAR_$_MFRedundantContentMarkup._messageBodyWithRedundantTextMarkers
_OBJC_IVAR_$_MFRedundantContentMarkup._redundantContentSenderName
_OBJC_IVAR_$_MFRedundantContentMarkup._matchedEntireAncestorContiguously
_OBJC_IVAR_$_MFRedundantContentMarkup._messageContainsRedundantText
_OBJC_IVAR_$__MFRedundantTextIdentifierAttachmentContext._attachmentName
_OBJC_IVAR_$__MFRedundantTextIdentifierAttachmentContext._attachmentExtension
_OBJC_IVAR_$__MFRedundantTextIdentifierAttachmentContext._attachmentSize
_OBJC_IVAR_$__MFRedundantTextIdentifierAttachmentContext._attachmentIsDownloaded
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._buffer
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._bufferStartIndex
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._bufferLength
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._searchInForwardDirection
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._currentIndex
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._startMatchIndexForCurrentLine
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._startTagCharacter
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._endTagCharacter
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._startEntityCharacter
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._endEntityCharacter
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._attachmentContextsByURL
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._isParsingEntity
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._entityValueCharacter
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._entityStartIndex
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._isParsingAttachment
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._attachmentContext
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._attachmentStartIndex
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._attachmentEndIndex
_OBJC_IVAR_$__MFRedundantTextIdentifierParseContext._attachmentIsTag
_OBJC_IVAR_$_MFRedundantTextIdentifier._redundantContentMarkup
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._replyBuffer
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._replyStartIndex
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._replyLength
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._replyAttachmentContextsByURL
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._originalBuffer
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._originalStartIndex
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._originalLength
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._originalAttachmentContextsByURL
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._redundantRanges
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._redundantAttachmentStartIndexes
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._attributionLineRanges
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._searchInForwardDirection
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._startingIndexForRedundantRanges
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._startingIndexForAttributionLineRanges
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._lastIndexMatchedInOriginal
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._lastIndexMatchedInReply
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionContext._matchedEntireOriginalContiguously
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionGenerator._replyBuffer
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionGenerator._originalBuffer
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionGenerator._replyLength
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionGenerator._originalLength
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionGenerator._replyAttachmentContextsByURL
_OBJC_IVAR_$__MFRedundantTextIdentifierSolutionGenerator._originalAttachmentContextsByURL
_OBJC_IVAR_$_MFRemoteAttachmentManager._downloadQueue
_OBJC_IVAR_$_MFRemoteAttachmentManager._attachments
_OBJC_IVAR_$_MFRemoteAppendMessagesContext._messages
_OBJC_IVAR_$_MFRemoteAppendMessagesContext._flagsToSet
_OBJC_IVAR_$_MFRemoteAppendMessagesContext.someMsgsWentToServer
_OBJC_IVAR_$_MFRemoteAppendMessagesContext._missedMessages
_OBJC_IVAR_$_MFRemoteAppendMessagesContext._addedMessageIDs
_OBJC_IVAR_$_MFRemoteAppendMessagesContext._addedMessages
_OBJC_IVAR_$_MFRemoteAppendMessagesContext._addedDocumentIDsByOld
_OBJC_IVAR_$_MFRemoteAppendMessagesContext._unreadCountDelta
_OBJC_IVAR_$_MFRemoteAppendMessagesContext._destUidNext
_OBJC_IVAR_$_MFRemoteAppendMessagesContext._forMove
_OBJC_IVAR_$_MFRemoteStoreAccount._mailboxesToSynchronize
_OBJC_IVAR_$_MFRemoteStoreAccount._synchronizationThreadIsRunning
_OBJC_IVAR_$_MFRemoteStoreAccount._addedEAToAccountFolder
_OBJC_IVAR_$_MFRemoteStoreSizeEngine._usageByMailbox
_OBJC_IVAR_$_MFRemoteStoreSizeEngine._mailboxesToSize
_OBJC_IVAR_$_MFSeenMessagesManager._account
_OBJC_IVAR_$_MFSeenMessagesManager._managedObjectContext
_OBJC_IVAR_$__MFSeenMessagesStore._persistentStoreCoordinator
_OBJC_IVAR_$__MFSeenMessagesStore._persistentStorePath
_OBJC_IVAR_$__MFSeenMessagesStore._accountEntity
_OBJC_IVAR_$__MFSeenMessagesStore._seenMessageEntity
_OBJC_IVAR_$_MFSizeEngine._account
_OBJC_IVAR_$_MFSizeEngine._totalUsage
_OBJC_IVAR_$_MFSizeEngine._monitor
_OBJC_IVAR_$_MFSizeEngine._isActive
_OBJC_IVAR_$_MFSizeEngine._monitorAccessKey
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._smartMailboxes
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._smartMailboxesOpenDates
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._unreadMessagesBySmartMailbox
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._smartMailboxesUpdates
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._watchedMessagesLock
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._watchedMessages
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._messagesNeedingToBeIndexed
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._isUpdatingStateLock
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._isDirtyStateLock
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._obsoleteMessageKeysLock
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._obsoleteMessageKeys
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._nonContentSmartMailboxUnreadCountManager
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._spotlightQueue
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._updateNeededAfterOpeningMailboxes
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._lastModificationToUpdate
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._suspendSmartMailboxUnreadCountCalculations
_OBJC_IVAR_$_MFSmartMailboxUnreadCountManager._unreadQueryCount
_OBJC_IVAR_$__MFNonContentSmartMailboxUnreadCountManager._workQueue
_OBJC_IVAR_$__MFNonContentSmartMailboxUnreadCountManager._unreadLibraryIDsByMessageIDHeaderByMailbox
_OBJC_IVAR_$__MFNonContentSmartMailboxUnreadCountManager._relativeDateTimer
_OBJC_IVAR_$__MFNonContentSmartMailboxUnreadCountManager._isObserving
_OBJC_IVAR_$__MFNonContentSmartMailboxUnreadCountManager._lastDisplayUpdateTime
_OBJC_IVAR_$_MFSMTPAccount._smtpAccountLock
_OBJC_IVAR_$_MFSMTPAccount._connection
_OBJC_IVAR_$_MFSMTPAccount._timer
_OBJC_IVAR_$_MFSMTPAccount._lastTimerSetTime
_OBJC_IVAR_$_MFSMTPConnection._lastReplyCode
_OBJC_IVAR_$_MFSMTPConnection._lastStatusCode
_OBJC_IVAR_$_MFSMTPConnection._mdata
_OBJC_IVAR_$_MFSMTPConnection._lastResponse
_OBJC_IVAR_$_MFSMTPConnection._domainName
_OBJC_IVAR_$_MFSMTPConnection._serviceExtensions
_OBJC_IVAR_$_MFSMTPConnection._originalSocketTimeout
_OBJC_IVAR_$_MFSMTPConnection._lastCommandTimestamp
_OBJC_IVAR_$_MFSMTPConnection._greeting
_OBJC_IVAR_$_MFSMTPConnection._needToSendGreeting
_OBJC_IVAR_$__MFSMTPEnhancedStatusCode._classStatus
_OBJC_IVAR_$__MFSMTPEnhancedStatusCode._subject
_OBJC_IVAR_$__MFSMTPEnhancedStatusCode._detail
_OBJC_IVAR_$_MFSnippetCalculator._quoteParser
_OBJC_IVAR_$_MFSnippetCalculator._calculationQueue
_OBJC_IVAR_$_MFSnippetCalculator._messagesToCalculate
_OBJC_IVAR_$_MFSnippetCalculator._isCalculating
_OBJC_IVAR_$_MFSnippetCalculator._delegate
_OBJC_IVAR_$_MFSnippetManager._snippetCalculator
_OBJC_IVAR_$_MFSnippetManager._messagesNeedingBodies
_OBJC_IVAR_$_MFSnippetManager._pendingSnippetsLock
_OBJC_IVAR_$_MFSnippetManager._pendingSnippetDictionariesByStore
_OBJC_IVAR_$_MFSnippetManager._snippetCommitQueue
_OBJC_IVAR_$_MFSnippetManager._queuedUpdate
_OBJC_IVAR_$_MFSpotlightManager._attachmentIndexingLock
_OBJC_IVAR_$_MFSpotlightManager._messsagesScheduledForAttachmentIndexing
_OBJC_IVAR_$_MFSpotlightManager._indexQueue
_OBJC_IVAR_$_MFSpotlightManager._queryObserverDictionary
_OBJC_IVAR_$_MFSpotlightResultCollector._criterion
_OBJC_IVAR_$_MFSpotlightResultCollector._target
_OBJC_IVAR_$_MFSpotlightResultCollector._query
_OBJC_IVAR_$_MFSpotlightResultCollector._expression
_OBJC_IVAR_$_MFSpotlightResultCollector._timeSpentInCallback
_OBJC_IVAR_$_MFSpotlightResultCollector._options
_OBJC_IVAR_$_MFSpotlightResultCollector._nextIndexToProcess
_OBJC_IVAR_$_MFSpotlightResultCollector._queryIsCancelled
_OBJC_IVAR_$_MFSpotlightResultCollector._async
_OBJC_IVAR_$_MFSpotlightResultCollector._queryStartTime
_OBJC_IVAR_$_MFSpotlightResultCollector._totalResultsCount
_OBJC_IVAR_$_MFSpotlightResultCollector._firstCallbackTime
_OBJC_IVAR_$_MFSpotlightResultCollector._checkWhereFromsPaths
_OBJC_IVAR_$_MFSpotlightResultCollector._excludedMailboxURLs
_OBJC_IVAR_$_MFStringUniquer._stringsTable
_OBJC_IVAR_$_MFSyncedFile._url
_OBJC_IVAR_$_MFSyncedFile._conflictResolver
_OBJC_IVAR_$_MFSyncedFile._cloudURLLock
_OBJC_IVAR_$_MFSyncedFile._cloudURL
_OBJC_IVAR_$_MFSyncedFile._syncState
_OBJC_IVAR_$_MFTableOfContents._data
_OBJC_IVAR_$_MFTableOfContents._path
_OBJC_IVAR_$_MFTableOfContents._isValid
_OBJC_IVAR_$_MFTableOfContents._header
_OBJC_IVAR_$_MFTableOfContents._messages
_OBJC_IVAR_$_MFTableOfContents._messageIDMap
_OBJC_IVAR_$_MFTableOfContents._isDirty
_OBJC_IVAR_$_MFTableOfContents._position
_OBJC_IVAR_$_MFTOCMessage._mboxRange
_OBJC_IVAR_$_MFTOCMessage._messageID
_OBJC_IVAR_$_MFTOCMessage._isInIncomingMail
_OBJC_IVAR_$_MFTOCMessage._attachment
_OBJC_IVAR_$_MFUnreadCountQueryObserver._query
_OBJC_IVAR_$_MFUnreadCountQueryObserver._mailbox
_OBJC_IVAR_$_MFUnreadCountQueryObserver._seenIDs
_OBJC_IVAR_$_MFUnreadCountQueryObserver._messageIDsFromAttachments
_OBJC_IVAR_$_MFUnreadCountQueryObserver._useTotalCount
_OBJC_IVAR_$_MFUnreadCountQueryObserver._queryIsCancelled
_OBJC_IVAR_$_MFUnreadCountQueryObserver._nextIndexToProcess
_OBJC_IVAR_$_MFUnreadCountQueryObserver._checkWhereFromsPaths
_OBJC_IVAR_$_MFUsageCounter._counts
_OBJC_IVAR_$_MFUsageCounter._gregorianCalendar
_OBJC_IVAR_$_MFUsageCounter._referenceDate
_OBJC_IVAR_$_MFUsageCounter._isDirty
_OBJC_IVAR_$_MFVIPSendersController._store
_OBJC_IVAR_$_MFVIPSendersController._operationQueue
_OBJC_IVAR_$_MFVIPSendersController._VIPSendersMailboxes
_OBJC_IVAR_$_MFVIPSendersController._VIPSendersAddresses
_OBJC_IVAR_$_MFWebMessageDocument._mimePartsByURLLock
_OBJC_IVAR_$_MFWebMessageDocument._uniqueIdentifier
_OBJC_IVAR_$_MFWebMessageDocument._parsedMessage
_OBJC_IVAR_$_MFWebMessageDocument._mimeBody
_OBJC_IVAR_$_MFWebMessageDocument._mimePartsByURL
_OBJC_IVAR_$_MFWebMessageDocument._headerAttachmentsByURL
_OBJC_IVAR_$_MFWebMessageDocument._attachmentsByURL
_OBJC_IVAR_$_MFWebMessageDocument._containsRemoteContent
_OBJC_IVAR_$_MFWebMessageDocument._baseURL
_OBJC_IVAR_$_MFWebMessageDocument._messageIsFromMicrosoft
_OBJC_IVAR_$_MFWebMessageDocument._collapseQuotedBlocks
_OBJC_IVAR_$_MFWebMessageDocument._shouldDownloadRemoteURLs
_sSpotlightInitialNotificationMaxHitsNumber
_sSpotlightInitialNotificationMaxMsNumber
_sSpotlightProgressNotificationMaxHitsNumber
_sSpotlightProgressNotificationMaxMsNumber
_sSpotlightUpdateNotificationMaxHitsNumber
_sSpotlightUpdateNotificationMaxMsNumber
_sSqliteWriterCacheSize
_sSqliteReaderCacheSize
_sIncrementalLoadingInitialChunkSize
_sIncrementalLoadingMaximumChunkSize
_sIncrementalLoadingChunkSizeMultiplier
_sIncrementalLoadingInitialChunkInterval
_sIncrementalLoadingChunkIntervalMultiplier
_sIncrementalLoadingMaximumChunkInterval
_sMaxReaderDBs
__logDeleteActivity
_sRefreshUnreadCountOnSelect
_sCanMarkUserInfoAsDirty
_sJunkMailTrustHeaders
_sJunkMailEvaluationAfterRules
_sCurrentBehavior
-[NSString(MailPathUtils) uniquePathWithMaximumLength:].serial
_sSpotlightUnreadCountInitialNotificationMaxHitsNumber
_sSpotlightUnreadCountInitialNotificationMaxMsNumber
_sSpotlightUnreadCountProgressNotificationMaxHitsNumber
_sSpotlightUnreadCountProgressNotificationMaxMsNumber
_sSpotlightUnreadCountUpdateNotificationMaxHitsNumber
_sSpotlightUnreadCountUpdateNotificationMaxMsNumber
_gCRAnnotations
+[MFAccount _shouldAnnounceChangesFromAccountInfo:toAccountInfo:].iaPluginKeysInitializationPredicate
+[MFAccount _shouldAnnounceChangesFromAccountInfo:toAccountInfo:].accountKeysAffectingIAPlugin
+[MFAccount genericAccountLargeImage].genericAccountImageCache
+[MFAccount genericAccountLargeImage].onceToken
_sSharedInstance
+[MFAccountStatus sharedStatus].predicate
+[MFAccountStorage sharedInstance].predicate
+[MFAccountStorage sharedInstance].sharedInstance
-[MFAccountStorage _accountsPlistPath].predicate
-[MFAccountStorage _accountsPlistPath].accountsPlistPath
+[MFAddressManager addressManager].predicate
+[MFAddressManager addressManager].sharedInstance
+[MFAddressManager placeholderImageOfSize:selected:].smallSelectedPlaceholderImage
+[MFAddressManager placeholderImageOfSize:selected:].mediumSelectedPlaceholderImage
+[MFAddressManager placeholderImageOfSize:selected:].smallUnselectedPlaceholderImage
+[MFAddressManager placeholderImageOfSize:selected:].mediumUnselectedPlaceholderImage
+[MFAddressManager placeholderImageOfSize:selected:].onceToken
+[MFAosImapAccount updateAllEmailAliases:].hasUpdatedEmailAliases
+[MFAosSmtpAccount keyPathsForValuesAffectingValueForKey:].dependentKeys
+[MFAosSmtpAccount keyPathsForValuesAffectingValueForKey:].onceToken
_sViewProviderClassesByMimeType
+[MFBackupManager sharedManager].predicate
+[MFBackupManager sharedManager].sharedInstance
-[MFBackupManager _reducedPathFromFullPath:].supportDirectory
-[MFBackupManager _reducedPathFromFullPath:].supportDirectoryWithSymlinksResolved
-[MFBerkeleyMbox doCompact].fileCounter
+[MFConversationCalculator sharedInstance].predicate
+[MFConversationCalculator sharedInstance].sharedInstance
-[MFConversationCalculator _calculateConversationForMessage:].sectionCount
-[MFConversationCalculator _calculateConversationForMessage:].sectionTime
+[MFCriterion logSpotlightQueries].once
_sLogSpotlightQueries
+[MFCriterion logSpotlightCallbacks].once
_sLogSpotlightCallbacks
+[MFCriterion logCriterionConversionErrors].once
_sLogCriterionConversionErrors
+[MFCrossProcessLock defaultMailCrossProcessLock].defaultMailCrossProcessLock
+[MFCrossProcessLock defaultMailCrossProcessLock].predicate
_sDownloadDirectoryURL
+[MFDefaults sharedInstance].predicate
+[MFDefaults sharedInstance].sharedInstance
_sPreferredWindowBackingLocation
+[MFDefaults preferredWindowBackingLocation].preferredWindowBackingLocationInitialized
+[MFDefaults deferredPreferredWindowBackingLocation].deferredPreferredWindowBackingLocationInit
+[MFDefaults deferredPreferredWindowBackingLocation].deferredPreferredWindowBackingLocation
_sDeliveryAccounts
_sDynamicDeliveryAccounts
-[MFEWSAccount initWithAccountInfo:].maxConcurrentEWSQueueOperations
-[MFEWSAccount initWithAccountInfo:].onceToken
_sReautodiscoveryTimerInterval
-[MFEWSAccount maximumConcurrentSyncFolderOperationCount].maxConcurrentOperations
-[MFEWSAccount maximumConcurrentSyncFolderOperationCount].onceToken
+[MFEWSDeliveryAccount keyPathsForValuesAffectingValueForKey:].dependentKeys
+[MFEWSDeliveryAccount keyPathsForValuesAffectingValueForKey:].onceToken
-[MFEWSGateway maxRequestsToSend].maxRequestsToSend
-[MFEWSGateway maxRequestsToSend].onceToken
-[MFEWSLibraryUpdateOperation _propertiesForItemClass:].messageProperties
-[MFEWSLibraryUpdateOperation _propertiesForItemClass:].postItemProperties
-[MFEWSLibraryUpdateOperation _propertiesForItemClass:].calendarItemProperties
-[MFEWSLibraryUpdateOperation _propertiesForItemClass:].onceToken
_sCustomFlags
+[MFEWSSyncFolderItemsRequestOperation maxChangesReturned].maxChangesReturned
+[MFEWSSyncFolderItemsRequestOperation maxChangesReturned].maxChangesReturnedInitializationToken
_sAdditionalHeaderFields
_sUseSSL
+[MFFilesystemWatcher sharedInstance].predicate
+[MFFilesystemWatcher sharedInstance].sharedInstance
_sUserAgent
+[MailFramework bundle].messageFrameworkBundle
+[MailFramework bundle].onceToken
+[MailFramework frameworkVersion].frameworkVersion
+[MailFramework frameworkVersion].onceToken
_sDataSourceTable
+[MFHTMLConverter sharedInstance].predicate
+[MFHTMLConverter sharedInstance].sharedInstance
__highPriorityQueue
__mediumPriorityQueue
__lowPriorityQueue
-[MFIMAPAccount handleAlertResponse:]._handledAlerts
+[MFIMAPAccount _mailboxNameForPathComponent:].charactersNeedingEncoding
+[MFIMAPAccount _mailboxNameForPathComponent:].onceToken
_junkMailMap.warned
_sSharedJunkMailFilter
+[MFJunkMailFilter sharedInstance].predicate
+[MFJunkMailFilter _junkFilterUsageCounterKeys].predicate
+[MFJunkMailFilter _junkFilterUsageCounterKeys].junkFilterUsageCounterKeys
_sSharedInstance
_sMailboxRowIDToURLCache
_sMailboxURLToRowIDCache
_sMessagesToCommit
_sLastViewedDateForMessageToCommit
_sCommitTimer
_sMessagesUpdatingEmlx
_sMessagesToUpdateEmlx
_sMessageLibraryIDsToUpdateEmlx
_sMailboxDataDirectoryCache
_sCurrentMailbox
_sOnlineAccounts
_sImportAddressRowids
_sImportSubjectRowids
_sImportMailboxRowids
_sReaderLock
_sAvailableReaderDBs
_sBusyReaderDBs
_sWriterLock
_sWriterDBHandle
_sWriteQueue
_sMessageNotificationSerializationQueue
_sRegisteredStores
_sActiveMailboxesCache
_sActiveMailboxesClause
_sDatabaseUUIDString
_sMyAddressIDsString
_sMyEmailAddresses
_sLogBackingStoreJournalUpdates
_sRestoredFromBackingStoreUpdateJournal
_sUpdateEmlxInProgress
_sLogSqlitePerformance
_sLogSqliteTrace
_sLogSqliteBlockPerformance
_sLogSpotlightCallbackPerformance
_sLogLibraryMainThreadAccess
_sLogLibraryLocksThreshold
_sLogLibraryInserts
_sLogSearchProgress
_sLogSearchTiming
_sLogSearchCriterion
_sSqliteExclusiveLocking
_sSyncFilesOnClose
_sInitializingDatabase
_sLibraryInitialized
+[MFLibrary _spotlightSendQueue].sendQueue
+[MFLibrary _spotlightSendQueue].once
_sLibraryIsImporting
+[MFLibrary fixAttachmentCache].count
+[MFLibrary insertOrUpdateMessages:withMailbox:fetchBodies:isInitialImport:oldMessagesByNewMessage:remoteIDs:newDocumentIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:progressDelegate:updateRowIDs:missedMessages:error:].maxFetchedMemory
_sActiveMailboxesCacheIsInvalid
_sActiveAccountFilterOff
_sRunningIndexOfCurrentMessage
_sTotalNumberOfMessages
+[MFLibrary tagDatabaseVersionIfNeeded:].didTagVersion
+[MFLibrary didCommit:].okToVacuum
+[MFLibrary didCommit:].vacuumFrequencyCount
_sHaveDisplayedLockedPanel
_analyzeSqliteIOError.data
_setFlagsForMessage.preparedStatementWithDate
_setFlagsForMessage.preparedStatementWithoutDate
_sResidentMessagesArray
_sResidentMessagesStripeCount
_sResidentMessagesLockArray
_sResidentMessageArrayContentHighWatermark
_sAssociativeCalendarEventKey
_sAssociativeReferencesKey
_sAssociativeHeaderDataKey
_sAssociativeHeadersKey
_sAssociativeMessageBodyDataKey
_sAssociativeMessageBodyKey
-[MFLibraryMessage description].showExtendedDescription
-[MFLibraryMessage description].once
_sSharedInstance
_sDefaultLoadOptions
+[MFLibraryThread sharedInstance].predicate
+[MFLibraryThread sharedInstance].sharedInstance
_sUnresolvedAccountPaths
_sLogLibraryUpgrade
_sAllAccountsAreOnSameFSAsLibraryMail
_sSharedInstance
+[MFLocalAccount localAccount].predicate
-[MFLocalAccount rootlessMailboxForFileSystemPath:]._rootlessMailboxRoot
+[MFLocationManager sharedManager].predicate
+[MFLocationManager sharedManager].sharedInstance
_sMailboxesByURL
_sMailboxesBySyncableURL
_sMailAccounts
_sSortedAccountPaths
_sAccountsSortedByPath
_sOutbox
_sAllEmailAddresses
_sAllEmailAddressesWithFullUserName
_sAccountsAreInitialized
_sNeedToCheckIfAccountsDeleteInPlace
_sNewUnreadMessagesReceivedInInbox
_sCountOfNewUnreadMessagesReceivedInInbox
_sTotalCountOfMessagesReceived
_sAccountExistsForSigning
-[MFMailAccount fetchSynchronously].warnonce
_sNeedToCalculateNumberOfDaysForLocalTrash
+[MFMailAccount numberOfDaysToKeepLocalTrash].numberOfDays
+[MFMailAccount allAccountsDeleteInPlace].lastResponse
+[MFMailAccount _inferMissingCanonicalEmailAddressesForAccounts:usingEmailAddresses:].discoveryQueue
+[MFMailAccount _inferMissingCanonicalEmailAddressesForAccounts:usingEmailAddresses:].onceToken
-[MFMailAccount storeClassForMailbox:].warnonce
_sSmartMailboxes
_sSmartMailboxPlaceholders
_sUserInfos
_sMailboxesWithDirtyUserInfo
_sMessageUpdateProcessingQueue
+[MFMailbox logMailboxUUIDErrors].once
_sLogMailboxUUIDErrors
-[MFMailbox _enqueueUnreadCountChangeNotification].coalesceCount
-[MFMailbox _saveMailboxesWithDirtyUserInfo].sMailboxUserInfoQueue
___43+[MFMailbox queueUpdateCountsForMailboxes:]_block_invoke.isMail
___43+[MFMailbox queueUpdateCountsForMailboxes:]_block_invoke.didCheckIsMail
+[MFMailDropPreferencesManager sharedInstance].predicate
+[MFMailDropPreferencesManager sharedInstance].sharedInstance
_sIsMigrating
_sSharedInstance
+[MFMessageContext sharedContext].predicate
_sAllAddressDisplayNames
_sSortRules
_sUnrecognizedRules
_sJunkRule
_sSafeToMarkAsNotJunkRule
_sRequiredHeaderKeys
_sAppleEmailAddresses
_sJunkMailHeaderFlags
_sCalendarRule
__writeRulesTimer
_sColorChangeCounter
+[MFMessageRouter colorsUpdateDynamically].dynamicColorsEnabled
+[MFMessageRouter colorsUpdateDynamically].onceToken
_sIsDirty
+[MFMessageRouter _skipAOSJunkFilter].skipAOSJunkFilter
+[MFMessageRouter _skipAOSJunkFilter].onceToken
_sRegisteredForMailboxNotifications
_sCurrentFileVersion
+[MFMessageRouter _setupSortRules].onceToken
__junkMailRuleInitToDefault
-[MFMessageRouter routeMessages:fromStores:fetchingBodies:messagesNeedingBodies:].loggedNoRouting
+[MFMessageRouterUtilities sortRulesPath].v1Predicate
+[MFMessageRouterUtilities sortRulesPath].v1RulesPath
+[MFMessageRouterUtilities sortRulesPath].v2Predicate
+[MFMessageRouterUtilities sortRulesPath].v2RulesPath
+[MFMessageRouterUtilities syncedRulesPath].v1Predicate
+[MFMessageRouterUtilities syncedRulesPath].v1SyncedRulesPath
+[MFMessageRouterUtilities syncedRulesPath].v2Predicate
+[MFMessageRouterUtilities syncedRulesPath].v2SyncedRulesPath
+[MFMessageRouterUtilities unsyncedRulesPath].v1Predicate
+[MFMessageRouterUtilities unsyncedRulesPath].v1UnsyncedRulesPath
+[MFMessageRouterUtilities unsyncedRulesPath].v2Predicate
+[MFMessageRouterUtilities unsyncedRulesPath].v2UnsyncedRulesPath
+[MFMessageRouterUtilities rulesActiveStatePath].v1Predicate
+[MFMessageRouterUtilities rulesActiveStatePath].v1ActiveStatePath
+[MFMessageRouterUtilities rulesActiveStatePath].v2Predicate
+[MFMessageRouterUtilities rulesActiveStatePath].v2ActiveStatePath
_sCheckedShouldIndexJunkLevel
_sShouldIndexJunkLevel
_sAppleScriptLock
_sAppleScriptDirectoryPathURL
-[MFMessageRule init].onceToken
+[MFMessageSortingValue _newSortOrderDictionary].sortOrderSharedKeySet
+[MFMessageSortingValue _newSortOrderDictionary].onceToken
_sReadFlags
_sNotDeletedFlag
_sStoreCache
+[MFMessageStore createEmptyStoreForPath:].warnonce
+[MFMessageStore storeAtPathIsWritable:].warnonce
-[MFMessageStore openSynchronouslyUpdatingMetadata:].warnonce
-[MFMessageStore updateMetadata].warnonce
-[MFMessageStore writeUpdatedMessageDataToDisk].warnonce
-[MFMessageStore deleteLastMessageWithHeaders:compactWhenDone:].warnonce
-[MFMessageStore sendResponseType:forMeetingMessage:].warnonce
-[MFMessageStore fetchSynchronously].warnonce
-[MFMessageStore _fetchHeaderDataForMessage:fetchIfNotAvailable:].warnonce
-[MFMessageStore _fetchHeaderDataForMessage:fetchIfNotAvailable:allowPartial:].warnonce
-[MFMessageStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:].warnonce
-[MFMessageStore _fetchBodyDataForMessage:andHeaderDataIfReadilyAvailable:fetchIfNotAvailable:allowPartial:].warnonce
-[MFMessageStore _rebuildTableOfContentsSynchronously].warnonce
+[NSFileWrapper(HFSExtensions) _quarantinePropertiesQueue].quarantineQueue
+[NSFileWrapper(HFSExtensions) _quarantinePropertiesQueue].once
__soundsToPlay
__shouldLogSoundEvents
__playingSound
+[NSSound(MailAdditions) _setupPlayList].onceToken
-[NSString(MailFrameworkAdditions) stringByRemovingLineEndingsForHTML].pre
-[NSString(MailFrameworkAdditions) stringByRemovingLineEndingsForHTML].PRE
-[NSString(MailFrameworkAdditions) stringByRemovingLineEndingsForHTML].preSpace
-[NSString(MailFrameworkAdditions) stringByRemovingLineEndingsForHTML].PRESpace
-[NSString(MailFrameworkAdditions) stringByRemovingLineEndingsForHTML].endPre
-[NSString(MailFrameworkAdditions) stringByRemovingLineEndingsForHTML].endPRE
-[NSString(MailFrameworkAdditions) specialSlash].specialSlash
-[NSString(MailFrameworkAdditions) containsOnlyWhitespace].nonwhitespace
-[NSString(MailFrameworkAdditions) containsOnlyBreakingWhitespace].nonwhitespace
+[NSString(MailFrameworkAdditions) stringWithAttachmentCharacter].stringWithAttachmentCharacter
+[NSString(MailFrameworkAdditions) stringWithAttachmentCharacter].onceToken
+[MFParentalControlAccount parentalControlAccount].predicate
+[MFParentalControlAccount parentalControlAccount].sharedInstance
+[MFParentalControlManager sharedManager].predicate
+[MFParentalControlManager sharedManager].sharedManager
_sParentalControlDebug
-[MFParentalControlManager parentalControlDirectory]._parentalControlDirectory
-[MFParentalControlManager headersRequiredForParentalControl].headersRequiredForParentalControl
_sPCParentEmails
_sPCApprovedEmails
+[MFParentalControlSettings sharedInstance].predicate
+[MFParentalControlSettings sharedInstance].sharedInstance
_sPCSettingsDebug
_sPCEnabled
_sPCEnabledTimeIntervalSince1970
-[NSString(MailPathUtils) stringByReallyAbbreviatingWithTildeInPath].homeDir
-[NSString(MailPathUtils) stringByReallyAbbreviatingWithTildeInPath].onceToken
_sResolvedPaths
-[NSString(MailPathUtils) betterStringByResolvingSymlinksInPath].onceToken
_sSupportDirectory
_sV1LayoutIsValid
_sV1Layout
+[MFPersistenceManager autoDownloadDirectoryPath].autoDownloadPath
+[MFPersistenceManager autoDownloadDirectoryPath].onceToken
-[MFPOPStore connection:receivedNumberOfBytes:].lastUpdate
_sMFRedundantContentHtmlMarker
_sMFAttributionContentHtmlMarker
-[_MFRedundantTextIdentifierSolutionContext computeAttributionRangesInReply].predicate
-[_MFRedundantTextIdentifierSolutionContext computeAttributionRangesInReply].headersRegex
-[_MFRedundantTextIdentifierSolutionContext computeAttributionRangesInReply].singleLineAttributionRegex
-[_MFRedundantTextIdentifierSolutionContext computeAttributionRangesInReply].singleLineDataOnlyAttributionRegex
-[_MFRedundantTextIdentifierSolutionContext computeAttributionRangesInReply].separatorsRegex
-[_MFRedundantTextIdentifierSolutionContext computeAttributionRangesInReply].nonWhitespaceCharacters
+[MFRemoteAttachmentManager sharedInstance].predicate
+[MFRemoteAttachmentManager sharedInstance].sharedInstance
-[MFRemoteStoreAccount behaviorTracker].behaviorTracker
-[MFRemoteStoreAccount behaviorTracker].onceToken
+[_MFSeenMessagesStore sharedInstance].predicate
+[_MFSeenMessagesStore sharedInstance].sharedInstance
_sLogContentSmartMailboxUnread
_sLogNonContentSmartMailboxUnread
_sLogUnreadCountSearchProgress
_sLogUnreadCountSpotlightQueries
_sLogUnreadCountSearchCriterion
_sLogUnreadCountSpotlightCallbacks
_sLogUnreadCountSpotlightErrors
+[MFSmartMailboxUnreadCountManager sharedInstance].predicate
+[MFSmartMailboxUnreadCountManager sharedInstance].sharedInstance
_unreadCountCallbackWorkQueue.workQueue
_unreadCountCallbackWorkQueue.once
_unreadCountCallbackDispatchQueue.dispatchQueue
_unreadCountCallbackDispatchQueue.once
+[MFSnippetManager sharedInstance].predicate
+[MFSnippetManager sharedInstance].sharedInstance
_sVisibleFlagMailboxes
+[MFSpecialMailbox inboxMailbox].inbox
+[MFSpecialMailbox inboxMailbox].onceToken
+[MFSpecialMailbox sentMessagesMailbox].sentMessages
+[MFSpecialMailbox sentMessagesMailbox].onceToken
+[MFSpecialMailbox draftsMailbox].drafts
+[MFSpecialMailbox draftsMailbox].onceToken
+[MFSpecialMailbox junkMailbox].junk
+[MFSpecialMailbox junkMailbox].onceToken
+[MFSpecialMailbox outboxMailbox].outbox
+[MFSpecialMailbox outboxMailbox].onceToken
+[MFSpecialMailbox trashMailbox].trash
+[MFSpecialMailbox trashMailbox].onceToken
+[MFSpecialMailbox archiveMailbox].archive
+[MFSpecialMailbox archiveMailbox].onceToken
+[MFSpecialMailbox flagsMailbox].flags
+[MFSpecialMailbox flagsMailbox].onceToken
+[MFSpecialMailbox VIPSendersMailbox].VIPSenders
+[MFSpecialMailbox VIPSendersMailbox].onceToken
+[MFSpecialMailbox flagMailboxes].allFlagMailboxes
+[MFSpecialMailbox flagMailboxes].onceToken
+[MFSpotlightManager sharedInstance].predicate
+[MFSpotlightManager sharedInstance].sharedInstance
-[MFSpotlightManager registerQueryObserver:].sNextID
_sSyncedFiles
_sOperationQueue
+[MFSyncedFile syncedFileForURL:withConflictResolver:].predicate
+[MFSyncedFile _metadataURL].metadataURL
+[MFSyncedFile _metadataURL].predicate
+[MFUsageCounter sharedInstance].predicate
+[MFUsageCounter sharedInstance].sharedInstance
+[MFVIPSendersController sharedInstance].predicate
+[MFVIPSendersController sharedInstance].sharedInstance
_sDocumentsForDisplay
_MFAOSAccountMigratedNotification
_MFAOSSmtpIdentifier
_MFAccountAccountPath
_MFAccountAccountType
_MFAccountActiveStatusDidChangeNotification
_MFAccountAddEmailAliases
_MFAccountBigMessageWarningSize
_MFAccountCanonicalEmailAddress
_MFAccountCompactWhenClosing
_MFAccountConfigureDynamically
_MFAccountDeleteMessagesOnServerInterval
_MFAccountDeletionPolicy
_MFAccountDeletionPolicyDeleteMessagesAfterInterval
_MFAccountDeletionPolicyDeleteMessagesRightAway
_MFAccountDeletionPolicyDeleteMessagesWhenTransferredOutOfInbox
_MFAccountDeletionPolicyNeverDeleteMessages
_MFAccountDeliveryAuthenticationScheme
_MFAccountDeliverySSLEnabled
_MFAccountEmailAddresses
_MFAccountEmailAliases
_MFAccountEmailAliasesDidChangeNotification
_MFAccountExternalHostname
_MFAccountExternalPortNumber
_MFAccountExternalServerPath
_MFAccountFullUserName
_MFAccountHostname
_MFAccountIMAPServerPathPrefix
_MFAccountIdentifier
_MFAccountInfoDidChangeNotification
_MFAccountInternalServerPath
_MFAccountIsActive
_MFAccountIsFirstTimeSync
_MFAccountLockDeliveryAccount
_MFAccountLockDeliveryAccountDefaultValue
_MFAccountMailboxListingDidChangeNotification
_MFAccountOfflineStatusDidChangeNotification
_MFAccountPartialDownloadThreshold
_MFAccountPassword
_MFAccountPreventPartialDownloads
_MFAccountRootFolderId
_MFAccountSMTPHostname
_MFAccountSMTPIdentifier
_MFAccountSMTPUsername
_MFAccountSecurityLayerType
_MFAccountShouldUseAuthentication
_MFAccountStorageKeyDeliveryAccounts
_MFAccountStorageKeyMailAccounts
_MFAccountStoreAccountCachePolicyString
_MFAccountStoreDraftsOnServer
_MFAccountStoreJunkOnServer
_MFAccountStoreSentMessagesOnServer
_MFAccountStoreTrashOnServer
_MFAccountTLSIdentity
_MFAccountTypeAosImap
_MFAccountTypeAosSmtp
_MFAccountTypeEWS
_MFAccountTypeEWSDelivery
_MFAccountTypeExchangeIMAP
_MFAccountTypeIMAP
_MFAccountTypeLocal
_MFAccountTypePOP
_MFAccountTypeParentalControl
_MFAccountTypeSMTP
_MFAccountUniqueID
_MFAccountUseMailDrop
_MFAccountUserAllowsInsecureAuthentication
_MFAccountUsername
_MFAccountValidationRequired
_MFAddInvitationToCalendarBehaviorDidChangeNotification
_MFAddressManagerDidLoadNotification
_MFAddressManagerPhotoDimensionDefault
_MFAddressManagerPhotoDimensionMedium
_MFAddressManagerPhotoDimensionSmall
_MFAppleScriptArgumentRule
_MFAppleScriptArgumentSelectedMailboxes
_MFAppleScriptArgumentSelectedMessages
_MFAppleScriptOldHandlerName
_MFBackfillDateLastViewedAttributeMarker
_MFBackupMailboxPathComponent
_MFBackupManagerEditableMessagesAddedOrUpdatedNotification
_MFBackupManagerEditableMessagesDeletedNotification
_MFBackupTableOfContentsKeyMailboxAccountID
_MFBackupTableOfContentsKeyMailboxDisplayName
_MFBackupTableOfContentsKeyMailboxPath
_MFBackupTableOfContentsKeyMailboxType
_MFBackupTableOfContentsKeyMailboxes
_MFBackupTableOfContentsKeyMessages
_MFBackupTableOfContentsKeyVersion
_MFBackupTableOfContentsVersion
_MFBehaviorAttributeSelectedMailboxes
_MFCalendarBundleIdentifier
_MFClearMailboxURLCache
_MFColorRulesDidChangeNotification
_MFCompareFunctionForSortOrder
_MFCopyAttributedStringFromDOMNodeRange
_MFCriterionExpressionAllVIPSenders
_MFCriterionKeyAccountURL
_MFCriterionKeyAllCriteriaMustBeSatisfied
_MFCriterionKeyCriteria
_MFCriterionKeyCriterionType
_MFCriterionKeyCriterionUniqueId
_MFCriterionKeyDateIsRelative
_MFCriterionKeyDateUnitType
_MFCriterionKeyExpression
_MFCriterionKeyNameId
_MFCriterionKeyQualifier
_MFCriterionQualifierValueBeginsWith
_MFCriterionQualifierValueDoesNotContain
_MFCriterionQualifierValueEndsWith
_MFCriterionQualifierValueIsEqualTo
_MFCriterionQualifierValueIsGreaterThan
_MFCriterionQualifierValueIsGreaterThanOrEqualTo
_MFCriterionQualifierValueIsLessThan
_MFCriterionQualifierValueIsLessThanOrEqualTo
_MFCriterionQualifierValueIsNotEqualTo
_MFCriterionTypeValeCompound
_MFCriterionTypeValueAccount
_MFCriterionTypeValueMailbox
_MFDefaultsKeyAddGmailLabelsToEmlxMinimumID
_MFDefaultsKeyConversationsNeedCalculating
_MFDefaultsKeyFlagColorNames
_MFDefaultsKeyJunkMailBehavior
_MFDefaultsKeyJunkMailEvaluationAfterRules
_MFDefaultsKeyJunkMailTrustHeaders
_MFDefaultsKeyLogiCloudSyncActivity
_MFDefaultsKeyMigrateRulesFromLion
_MFDefaultsKeyMigrateSignaturesFromLion
_MFDefaultsKeyMigrateSmartMailboxesFromLion
_MFDefaultsKeySQLiteDatabaseIsCorrupted
_MFDeletePOPMessagesCompletedNotification
_MFDeletePOPMessagesStartedNotification
_MFDeliveryAccountWillBeRemovedNotification
_MFDeliveryAccountsDidChangeNotification
_MFDidModifyEWSCalendarItemNotification
_MFDidRefreshAccountStatusNotification
_MFDidRefreshInternetStatusNotification
_MFDidUpdateAccountStatusNotification
_MFDirectoryNameLostAndFound
_MFDirectoryNameMail
_MFDirectoryNameMailboxData
_MFDirectoryNameMessageAttachments
_MFDirectoryNameMessages
_MFDirectoryNameOfflineCache
_MFDirectoryNameV1MailData
_MFDirectoryNameV2MailData
_MFDirectoryNameV2TopLevel
_MFEMLXPlistDataExtendedAttribute
_MFEWSDefaultServerPath
_MFEWSErrorDomain
_MFEWSOfflineIdStringPrefix
_MFEmailAliasAddress
_MFEmailAliasName
_MFEmlxKeyColor
_MFEmlxKeyDateLastViewed
_MFEmlxKeyDateReceived
_MFEmlxKeyDateSent
_MFEmlxKeyFlags
_MFEmlxKeyGmailLabelIDs
_MFEmlxKeyOriginalMailboxURL
_MFEmlxKeyRemoteID
_MFEmlxKeyRemoteMailbox
_MFEmlxKeySender
_MFEmlxKeySubject
_MFEmlxKeyTo
_MFErrorKeyEWSFolderId
_MFErrorKeyEWSItemId
_MFErrorKeyPOPResponseCode
_MFExceptionKeySQLiteDatabase
_MFExceptionKeySQLiteErrorMessage
_MFExceptionKeySQLiteResultCode
_MFExcludedMailboxes
_MFExternalUsesSSL
_MFFavoritesKeyFavorites
_MFFavoritesKeyFavoritesMailboxAccountURLString
_MFFavoritesKeyFavoritesMailboxIsContainer
_MFFavoritesKeyFavoritesMailboxIsPreferredSelection
_MFFavoritesKeyFavoritesMailboxName
_MFFavoritesKeyFavoritesMailboxPersistentIdentifier
_MFFavoritesKeyFavoritesMailboxType
_MFFavoritesKeyFavoritesSelectedSubmailboxPersistentIdentifier
_MFFavoritesKeyFavoritesVersion
_MFFileExtensionEmlx
_MFFileExtensionEmlxpart
_MFFileExtensionEmptyEmlx
_MFFileExtensionPartialEmlx
_MFFileExtensionPartialEmlxCString
_MFFileNameBackupTableOfContents
_MFFileNameDontIndexMailbox
_MFFileNameEnvelopeIndex
_MFFileNameMailboxCache
_MFFileNameMailboxUserInfo
_MFFileSuffixEnvelopeIndexJournal
_MFFileSuffixEnvelopeIndexWAL
_MFFileSuffixEnvelopeIndexWALSharedMemory
_MFFlagMailboxVisibilityChangedNotification
_MFGenericAccountLargeImageName
_MFGetComparatorFromCompareFunction
_MFGlobalLogFlags
_MFHeaderValueNoDeliveryAccount
_MFIMAPNextUidFromSet
_MFIndexableMailboxesDidChange
_MFInitTrainingIncrement
_MFJunkMailLevelForString
_MFKVCKeySeenMessageAccount
_MFKVCKeySeenMessageDate
_MFKVCKeySeenMessageID
_MFKVCKeySeenMessageIsOnServer
_MFKVCKeySeenMessageShouldDelete
_MFKVSKeyPrefixFlagName
_MFLibraryConversationsChangedNotification
_MFLibraryDeletedMailboxesNotification
_MFLibraryFlagsForMessage
_MFLibraryLoadInReplyTo
_MFLibraryLoadIncludeAllMailboxes
_MFLibraryLoadIncludeConversations
_MFLibraryLoadIncludeToCCInfo
_MFLibraryLoadIsSubquery
_MFLibraryLoadLabels
_MFLibraryLoadReferences
_MFLibraryLoadSender
_MFLibraryLoadSortByDateReceived
_MFLibraryLoadSubject
_MFLibraryLoadTo
_MFLibraryMessageBodyDataBecameAvailableNotification
_MFLibraryMessageColorForFlags
_MFLibraryMessagesAddedNotification
_MFLibraryMessagesCompactedNotification
_MFLibraryMessagesFlagsChangedNotification
_MFLibraryMessagesGmailLabelsChangedNotification
_MFLibraryMessagesUpdatedNotification
_MFLibraryNonContentSmartMailboxLoadedNotification
_MFLibraryStoreFinishedFirstTimeSyncNotification
_MFLocationAttributesDidChangeNotification
_MFLogCategoryEWSOperationActivity
_MFLogCategoryFlagNameSync
_MFLogCategoryLargeDelete
_MFMailAccountFetchCompletedNotification
_MFMailAccountInitializedMailboxListNotification
_MFMailAccountNeedsCheckingNotification
_MFMailAccountPasswordChangedNotification
_MFMailAccountWasAddedNotification
_MFMailAccountWillBeDeletedNotification
_MFMailAccountsDidChangeNotification
_MFMailboxCacheKeyMailboxes
_MFMailboxDidBecomeInvalidNotification
_MFMailboxDisplayCountDidChangeNotification
_MFMailboxKeyIsPublicOrShared
_MFMailboxKeyPathComponent
_MFMailboxKeyUnreadCount
_MFMailboxKeyUnreadMessages
_MFMailboxKeyUnseenCount
_MFMailboxPublicStatusDidChangeNotification
_MFMailboxUserInfoDidChangeNotification
_MFMailboxUserInfoKeyEWSFolderId
_MFMailboxUserInfoKeyName
_MFMailboxUserInfoKeyUUID
_MFMailboxWasRenamedNotification
_MFMailboxWillBecomeInvalidNotification
_MFMarkStringWithJunkMailLevel
_MFMessageChangeKeyColor
_MFMessageChangeKeyFlags
_MFMessageChangeKeyFlagsMask
_MFMessageChangeKeyHighlightText
_MFMessageConsumerOptionInitialResults
_MFMessageRuleDidChangeNotification
_MFMessageRuleNotificationCenterNotification
_MFMessageStoreDidCloseNotification
_MFMessageStoreDidOpenNotification
_MFMessageStoreFinishedLoadingNotification
_MFMessageStoreMessageMetadataChangedNotification
_MFMessageStoreMessagesAddedNotification
_MFMessageStoreMessagesSnippetsUpdatedNotification
_MFMessageStoreStructureChangedNotification
_MFMessageStoreWillOpenNotification
_MFMessageThreadPendingTaskID
_MFMessageTriedToDownloadRemoteContentNotification
_MFNotificationKeyAccount
_MFNotificationKeyAccountStatus
_MFNotificationKeyAccountStatusDetails
_MFNotificationKeyAccountType
_MFNotificationKeyAccountsWereUninitialized
_MFNotificationKeyAddedMailAccounts
_MFNotificationKeyAddedMailbox
_MFNotificationKeyChangedMailAccounts
_MFNotificationKeyConversationsMembers
_MFNotificationKeyCountOfNewUnreadMessagesReceivedInInbox
_MFNotificationKeyDeletedMailAccounts
_MFNotificationKeyEmail
_MFNotificationKeyEmailAddresses
_MFNotificationKeyFlags
_MFNotificationKeyLibraryConversationsAdded
_MFNotificationKeyLibraryConversationsRemoved
_MFNotificationKeyLibraryConversationsUpdated
_MFNotificationKeyLibraryNewConversationsByMessages
_MFNotificationKeyLibraryOldConversationsByMessages
_MFNotificationKeyLibraryOldFlagsByMessage
_MFNotificationKeyMailAccountsConnectionInfoChanged
_MFNotificationKeyMailboxes
_MFNotificationKeyMessages
_MFNotificationKeyMessagesAddedDuringOpen
_MFNotificationKeyNewMailboxChildren
_MFNotificationKeyNewUnreadMessagesReceivedInInbox
_MFNotificationKeyNotificationCenterActionMessages
_MFNotificationKeyOldMailboxChildren
_MFNotificationKeyOutOfOfficeEndTime
_MFNotificationKeyOutOfOfficeError
_MFNotificationKeyOutOfOfficeExternalReply
_MFNotificationKeyOutOfOfficeInternalReply
_MFNotificationKeyOutOfOfficeStartTime
_MFNotificationKeyOutOfOfficeState
_MFNotificationKeyPOPSizeEngineAddedMessages
_MFNotificationKeyPOPSizeEngineChangedMessages
_MFNotificationKeyPOPSizeEngineDeletedMessages
_MFNotificationKeyRenamedMailboxChildren
_MFNotificationKeySelectedMailbox
_MFNotificationKeyShouldPlayNoMailSound
_MFNotificationKeySizeEngineChangedMailbox
_MFNotificationKeySizeEngineChangedQuotaName
_MFNotificationKeySizeEngineNewActivity
_MFNotificationKeySnippetsForMessages
_MFNotificationKeyTotalCountOfMessagesReceived
_MFOutOfOfficeSettingsErrorNotification
_MFOutOfOfficeSettingsReceivedNotification
_MFPOPAccountDeleteMessagesOnServerIntervalDefaultValue
_MFPOPSASLProfileName
_MFPOPSizeInfoKeyDeleted
_MFPOPSizeInfoKeyDownloaded
_MFPOPSizeInfoKeyReceivedDate
_MFPOPSizeInfoKeySender
_MFPOPSizeInfoKeySize
_MFPOPSizeInfoKeySubject
_MFPOPStandardPorts
_MFPOPStandardSSLPorts
_MFParentApprovedEmailAddressesNotification
_MFParentControlModeChangedNotification
_MFParentRejectedEmailAddressesNotification
_MFParentalControlApprovedEmailListChangedNotification
_MFParseEntity
_MFPhotoAvailableNotification
_MFPhotoChangedNotification
_MFRelatedMessagesForWhereFromItems
_MFRemoteStoreAccountCachePolicyStringForEnumValue
_MFResetJunkMailSettingsToDefault
_MFRuleKeyActive
_MFRuleKeyActiveSyncState
_MFRuleKeyIsOneAndOnlyIsOneAndOnlyCalendarRule
_MFRuleKeyIsOneAndOnlyJunkRule
_MFRuleKeyName
_MFRuleKeyRuleVersion
_MFRuleKeyRules
_MFRuleKeyShouldTransferMessage
_MFRuleKeyTimeStamp
_MFRuleKeyUniqueId
_MFRuleKeyVersion
_MFRuleVersionMax
_MFSQLiteException
_MFSaveJunkMailFileToDisk
_MFSearchedMailboxPreferencesDidChangeNotification
_MFSizeEngineDidChangeStatusNotification
_MFSizeEngineDidUpdateNotification
_MFSizeEngineEveryQuotaName
_MFSmartMailboxUserCriteriaCriterionName
_MFSmartMailboxUserInfoChangedNotification
_MFSmartMailboxesDidSaveToDiskNotification
_MFSmartMailboxesWillSaveToDiskNotification
_MFSnippetManagerCalculatedSnippetNotification
_MFSnippetManagerNotificationKeySnippetForMessage
_MFSortOrderColor
_MFSortOrderDateLastViewed
_MFSortOrderDateReceived
_MFSortOrderDateSent
_MFSortOrderFlags
_MFSortOrderLocation
_MFSortOrderNumberOfAttachments
_MFSortOrderReadStatus
_MFSortOrderReceiver
_MFSortOrderSender
_MFSortOrderSize
_MFSortOrderSubject
_MFSortOrderUniqueID
_MFSqliteObjectExists
_MFStoreCacheLock
_MFStringKeyActivityFetchingNewMailFormat
_MFStringKeyAddingSenderToPreviousRecipients
_MFStringKeyAppendingMessagesFormat
_MFStringKeyAppendingSingleMessage
_MFStringKeyAppleNewsRuleName
_MFStringKeyArchiveMailboxName
_MFStringKeyArchivingMessageFormat
_MFStringKeyConnectFailedNoReasonFormat
_MFStringKeyConnectionErrorTitle
_MFStringKeyCopyOfFormat
_MFStringKeyCopyingMessageStatus
_MFStringKeyCopyingMessagesFormat
_MFStringKeyCouldntReplayOfflineOperationsDetail
_MFStringKeyCouldntReplayOfflineOperationsFormat
_MFStringKeyCreateMailboxFailedLocalDescription
_MFStringKeyCreateMailboxFailedLocalFormat
_MFStringKeyDeliveryNoConnection
_MFStringKeyDraftsSpecialMailboxName
_MFStringKeyDuplicateAccountFormat
_MFStringKeyErrorTitle
_MFStringKeyGenericMailboxPluralType
_MFStringKeyGenericMailboxType
_MFStringKeyGetUnreadCountFormat
_MFStringKeyGetUnreadCountsFormat
_MFStringKeyGettingHeadersFormat
_MFStringKeyGettingMailboxHierarchyFormat
_MFStringKeyGettingMailboxSizeStatusFormat
_MFStringKeyGettingMessageBodyFormat
_MFStringKeyIMAPAddingMessages
_MFStringKeyIMAPChangingFlagsTaskName
_MFStringKeyIMAPChangingGmailLabelsTaskName
_MFStringKeyInboxSpecialMailboxName
_MFStringKeyInternalDeliveryErrorFormat
_MFStringKeyInvalidMailboxNameFormat
_MFStringKeyInvalidRuleTitle
_MFStringKeyJunkSpecialMailboxName
_MFStringKeyMailboxDisplayFormat
_MFStringKeyMailboxExistsFormat
_MFStringKeyNoOfflineMailboxRenaming
_MFStringKeyNoRecipients
_MFStringKeyPOPClosingConnection
_MFStringKeyPOPFetchErrorTitle
_MFStringKeyPOPInUse
_MFStringKeyPOPPermanentSystemError
_MFStringKeyPOPSenderUnknown
_MFStringKeyPOPTemporarySystemError
_MFStringKeyQuitButton
_MFStringKeyRecoveredMailboxNameFormat
_MFStringKeyRecoveredToSingleMailbox
_MFStringKeyRemovingAttachmentsFormat
_MFStringKeySentMessagesSpecialMailboxName
_MFStringKeySynchronizingMailboxStatusFormat
_MFStringKeySynchronizingMailboxesTaskName
_MFStringKeySynchronizingWithServerFormat
_MFStringKeyTrashSpecialMailboxName
_MFStringKeyUpdatingJunkMailLevelFormat
_MFStringKeyWritingChangesToDiskFormat
_MFSyncedFileDidChangeNotification
_MFSyncedFileWasDeletedNotification
_MFTestForCommentBegin
_MFTestForCommentEnd
_MFTestForScriptOrStyle
_MFThreadKeyBodyCriterionCache
_MFThreadKeyPerformingTimeMachineRestore
_MFTimeMachineRestoreFinishedNotification
_MFUCKeyNumberOfMessagesEvaluatedAsJunkMail
_MFUCKeyNumberOfMessagesJunkMailFilterEvaluated
_MFUCKeyNumberOfMessagesManuallyMarkedAsJunkMail
_MFUCKeyNumberOfMessagesManuallyMarkedNotJunkMail
_MFUCKeyNumberOfMessagesRouted
_MFURLInfoKeyAccount
_MFURLInfoKeyGenerateConnectionURL
_MFURLInfoKeyGenerateSyncableURL
_MFURLInfoKeyRelativePath
_MFURLInfoKeyUseExternalComponents
_MFUserDefaultsKeyNonFatalMigrationAttachmentErrorLibraryIDs
_MFUserHasDisabledAccountInPreferencesNotification
_MFUserHasEnabledAccountInPreferencesNotification
_MFV2AccountPlistName
_MFVIPSendersDidChangeNotification
_MFWhereFromItemPathKey
_MFWhereFromItemValuesKey
_MFWillRefreshAccountStatusNotification
_MFWillRefreshInternetStatusNotification
_MailAccountInactivatedInsteadOfBeingDeleted
_MailVersionNumber
_MailVersionString
_MailboxDisplayIndexKey
_MailboxIsManuallySortedKey
_OBJC_CLASS_$_MFAccount
_OBJC_CLASS_$_MFAccountStatus
_OBJC_CLASS_$_MFAccountStorage
_OBJC_CLASS_$_MFAddressManager
_OBJC_CLASS_$_MFAosImapAccount
_OBJC_CLASS_$_MFAosSmtpAccount
_OBJC_CLASS_$_MFAttachmentViewController
_OBJC_CLASS_$_MFBackupManager
_OBJC_CLASS_$_MFBehaviorTracker
_OBJC_CLASS_$_MFBerkeleyMbox
_OBJC_CLASS_$_MFCachedMailboxInfo
_OBJC_CLASS_$_MFConversationCalculationContext
_OBJC_CLASS_$_MFConversationCalculator
_OBJC_CLASS_$_MFCriterion
_OBJC_CLASS_$_MFCrossProcessLock
_OBJC_CLASS_$_MFDatabaseRecoverer
_OBJC_CLASS_$_MFDefaults
_OBJC_CLASS_$_MFDeliveryAccount
_OBJC_CLASS_$_MFEWSAccount
_OBJC_CLASS_$_MFEWSConnection
_OBJC_CLASS_$_MFEWSCopyItemsRequestOperation
_OBJC_CLASS_$_MFEWSCopyItemsResponseOperation
_OBJC_CLASS_$_MFEWSCreateEventReplyRequestOperation
_OBJC_CLASS_$_MFEWSCreateEventReplyResponseOperation
_OBJC_CLASS_$_MFEWSCreateFolderRequestOperation
_OBJC_CLASS_$_MFEWSCreateFolderResponseOperation
_OBJC_CLASS_$_MFEWSCreateItemRequestOperation
_OBJC_CLASS_$_MFEWSCreateItemResponseOperation
_OBJC_CLASS_$_MFEWSCreateMessageRequestOperation
_OBJC_CLASS_$_MFEWSDeleteFolderRequestOperation
_OBJC_CLASS_$_MFEWSDeleteItemsRequestOperation
_OBJC_CLASS_$_MFEWSDeliverer
_OBJC_CLASS_$_MFEWSDeliveryAccount
_OBJC_CLASS_$_MFEWSFindItemsRequestOperation
_OBJC_CLASS_$_MFEWSFindItemsResponseOperation
_OBJC_CLASS_$_MFEWSGateway
_OBJC_CLASS_$_MFEWSGetFolderRequestOperation
_OBJC_CLASS_$_MFEWSGetFolderResponseOperation
_OBJC_CLASS_$_MFEWSGetItemDataRequestOperation
_OBJC_CLASS_$_MFEWSGetItemDataResponseOperation
_OBJC_CLASS_$_MFEWSGetItemsRequestOperation
_OBJC_CLASS_$_MFEWSGetItemsResponseOperation
_OBJC_CLASS_$_MFEWSGetUserOofSettingsRequestOperation
_OBJC_CLASS_$_MFEWSGetUserOofSettingsResponseOperation
_OBJC_CLASS_$_MFEWSLibraryUpdateOperation
_OBJC_CLASS_$_MFEWSMessage
_OBJC_CLASS_$_MFEWSMoveFolderRequestOperation
_OBJC_CLASS_$_MFEWSOfflineGateway
_OBJC_CLASS_$_MFEWSRenameFolderRequestOperation
_OBJC_CLASS_$_MFEWSRequestOperation
_OBJC_CLASS_$_MFEWSResponseOperation
_OBJC_CLASS_$_MFEWSSetUserOofSettingsRequestOperation
_OBJC_CLASS_$_MFEWSSetUserOofSettingsResponseOperation
_OBJC_CLASS_$_MFEWSSizeEngine
_OBJC_CLASS_$_MFEWSStore
_OBJC_CLASS_$_MFEWSSuppressReadReceiptsRequestOperation
_OBJC_CLASS_$_MFEWSSyncFolderHierarchyRequestOperation
_OBJC_CLASS_$_MFEWSSyncFolderHierarchyResponseOperation
_OBJC_CLASS_$_MFEWSSyncFolderItemsRequestOperation
_OBJC_CLASS_$_MFEWSSyncFolderItemsResponseOperation
_OBJC_CLASS_$_MFEWSUpdateItemRequestOperation
_OBJC_CLASS_$_MFExchangeIMAPAccount
_OBJC_CLASS_$_MFExchangeIMAPConnection
_OBJC_CLASS_$_MFFilesystemWatcher
_OBJC_CLASS_$_MFGmailLabelStore
_OBJC_CLASS_$_MFHTMLConverter
_OBJC_CLASS_$_MFHTMLParser
_OBJC_CLASS_$_MFIMAPAccount
_OBJC_CLASS_$_MFIMAPAppendMessageOperation
_OBJC_CLASS_$_MFIMAPCopyMessagesOperation
_OBJC_CLASS_$_MFIMAPCreateOperation
_OBJC_CLASS_$_MFIMAPDeleteOperation
_OBJC_CLASS_$_MFIMAPOfflineCopyOnStupidServerOperation
_OBJC_CLASS_$_MFIMAPOperation
_OBJC_CLASS_$_MFIMAPOperationCache
_OBJC_CLASS_$_MFIMAPSizeEngine
_OBJC_CLASS_$_MFIMAPStoreFlagsOperation
_OBJC_CLASS_$_MFIMAPStoreGmailLabelsOperation
_OBJC_CLASS_$_MFIMAPStoreOperation
_OBJC_CLASS_$_MFJunkMail
_OBJC_CLASS_$_MFJunkMailFilter
_OBJC_CLASS_$_MFLibrary
_OBJC_CLASS_$_MFLibraryCalendarEvent
_OBJC_CLASS_$_MFLibraryIMAPMessage
_OBJC_CLASS_$_MFLibraryIMAPStore
_OBJC_CLASS_$_MFLibraryMessage
_OBJC_CLASS_$_MFLibraryQueries
_OBJC_CLASS_$_MFLibraryStore
_OBJC_CLASS_$_MFLibraryStoreMessageConsumer
_OBJC_CLASS_$_MFLibraryThread
_OBJC_CLASS_$_MFLibraryUpgrader
_OBJC_CLASS_$_MFLocalAccount
_OBJC_CLASS_$_MFLocationManager
_OBJC_CLASS_$_MFMailAccount
_OBJC_CLASS_$_MFMailDropPreferencesManager
_OBJC_CLASS_$_MFMailMigrator
_OBJC_CLASS_$_MFMailbox
_OBJC_CLASS_$_MFMailboxDirectoryScanner
_OBJC_CLASS_$_MFMessageAddressee
_OBJC_CLASS_$_MFMessageContext
_OBJC_CLASS_$_MFMessageCounts
_OBJC_CLASS_$_MFMessageCriterion
_OBJC_CLASS_$_MFMessageDeliverer
_OBJC_CLASS_$_MFMessageReplyGenerator
_OBJC_CLASS_$_MFMessageRouter
_OBJC_CLASS_$_MFMessageRouterUtilities
_OBJC_CLASS_$_MFMessageRule
_OBJC_CLASS_$_MFMessageRuleCriterion
_OBJC_CLASS_$_MFMessageSortingInformation
_OBJC_CLASS_$_MFMessageSortingValue
_OBJC_CLASS_$_MFMessageStore
_OBJC_CLASS_$_MFMessageThread
_OBJC_CLASS_$_MFNeXTStore
_OBJC_CLASS_$_MFNetworkLocation
_OBJC_CLASS_$_MFPOPAccount
_OBJC_CLASS_$_MFPOPConnection
_OBJC_CLASS_$_MFPOPMessage
_OBJC_CLASS_$_MFPOPSizeEngine
_OBJC_CLASS_$_MFPOPStore
_OBJC_CLASS_$_MFParentalControlAccount
_OBJC_CLASS_$_MFParentalControlManager
_OBJC_CLASS_$_MFParentalControlSettings
_OBJC_CLASS_$_MFParentalControlStore
_OBJC_CLASS_$_MFPersistenceManager
_OBJC_CLASS_$_MFPreparedStatement
_OBJC_CLASS_$_MFQuoteParser
_OBJC_CLASS_$_MFRecoveredMessage
_OBJC_CLASS_$_MFRecoveredStore
_OBJC_CLASS_$_MFRedundantContentMarkup
_OBJC_CLASS_$_MFRedundantTextIdentifier
_OBJC_CLASS_$_MFRemoteAppendMessagesContext
_OBJC_CLASS_$_MFRemoteAttachmentManager
_OBJC_CLASS_$_MFRemoteStore
_OBJC_CLASS_$_MFRemoteStoreAccount
_OBJC_CLASS_$_MFRemoteStoreSizeEngine
_OBJC_CLASS_$_MFSMTPAccount
_OBJC_CLASS_$_MFSMTPConnection
_OBJC_CLASS_$_MFSMTPDeliverer
_OBJC_CLASS_$_MFSeenMessage
_OBJC_CLASS_$_MFSeenMessagesManager
_OBJC_CLASS_$_MFSizeEngine
_OBJC_CLASS_$_MFSmartMailboxUnreadCountManager
_OBJC_CLASS_$_MFSnippetCalculator
_OBJC_CLASS_$_MFSnippetManager
_OBJC_CLASS_$_MFSpecialMailbox
_OBJC_CLASS_$_MFSpotlightManager
_OBJC_CLASS_$_MFSpotlightResultCollector
_OBJC_CLASS_$_MFSqliteHandle
_OBJC_CLASS_$_MFStringUniquer
_OBJC_CLASS_$_MFSyncedFile
_OBJC_CLASS_$_MFTOCMessage
_OBJC_CLASS_$_MFTableOfContents
_OBJC_CLASS_$_MFUnreadCountQueryObserver
_OBJC_CLASS_$_MFUsageCounter
_OBJC_CLASS_$_MFVIPSendersController
_OBJC_CLASS_$_MFWebMessageDocument
_OBJC_CLASS_$_MailFramework
_OBJC_CLASS_$__IMAPOfflineRestoreContext
_OBJC_CLASS_$__MFAppleScriptHeaderRecord
_OBJC_CLASS_$__MFConversationsMessageCollector
_OBJC_CLASS_$__MFDataCollector
_OBJC_CLASS_$__MFIMAPMailboxDeletionQueueEntry
_OBJC_CLASS_$__MFLibraryThreadRequest
_OBJC_CLASS_$__MFMailboxChildrenEnumerator
_OBJC_CLASS_$__MFMailboxEnumerator
_OBJC_CLASS_$__MFMessageCollector
_OBJC_CLASS_$__MFMessageLoadingContext
_OBJC_CLASS_$__MFMessageSortingValueColor
_OBJC_CLASS_$__MFMessageSortingValueDateLastViewed
_OBJC_CLASS_$__MFMessageSortingValueDateReceived
_OBJC_CLASS_$__MFMessageSortingValueDateSent
_OBJC_CLASS_$__MFMessageSortingValueLibraryID
_OBJC_CLASS_$__MFMessageSortingValueMailbox
_OBJC_CLASS_$__MFMessageSortingValueMessageFlags
_OBJC_CLASS_$__MFMessageSortingValueMessageSize
_OBJC_CLASS_$__MFMessageSortingValueNumberOfAttachments
_OBJC_CLASS_$__MFMessageSortingValueSender
_OBJC_CLASS_$__MFMessageSortingValueSubject
_OBJC_CLASS_$__MFMessageSortingValueTo
_OBJC_CLASS_$__MFNonContentSmartMailboxUnreadCountManager
_OBJC_CLASS_$__MFProgressHandlerMonitorContext
_OBJC_CLASS_$__MFRedundantTextIdentifierAttachmentContext
_OBJC_CLASS_$__MFRedundantTextIdentifierParseContext
_OBJC_CLASS_$__MFRedundantTextIdentifierSolutionContext
_OBJC_CLASS_$__MFRedundantTextIdentifierSolutionGenerator
_OBJC_CLASS_$__MFRootlessMailbox
_OBJC_CLASS_$__MFRoutingDictionaryContext
_OBJC_CLASS_$__MFSMTPEnhancedStatusCode
_OBJC_CLASS_$__MFSeenMessagesStore
_OBJC_CLASS_$__MFSetFlags
_OBJC_CLASS_$__MFSmartMailboxesEnumerator
_OBJC_CLASS_$__MFZipStream
_OBJC_METACLASS_$_MFAccount
_OBJC_METACLASS_$_MFAccountStatus
_OBJC_METACLASS_$_MFAccountStorage
_OBJC_METACLASS_$_MFAddressManager
_OBJC_METACLASS_$_MFAosImapAccount
_OBJC_METACLASS_$_MFAosSmtpAccount
_OBJC_METACLASS_$_MFAttachmentViewController
_OBJC_METACLASS_$_MFBackupManager
_OBJC_METACLASS_$_MFBehaviorTracker
_OBJC_METACLASS_$_MFBerkeleyMbox
_OBJC_METACLASS_$_MFCachedMailboxInfo
_OBJC_METACLASS_$_MFConversationCalculationContext
_OBJC_METACLASS_$_MFConversationCalculator
_OBJC_METACLASS_$_MFCriterion
_OBJC_METACLASS_$_MFCrossProcessLock
_OBJC_METACLASS_$_MFDatabaseRecoverer
_OBJC_METACLASS_$_MFDefaults
_OBJC_METACLASS_$_MFDeliveryAccount
_OBJC_METACLASS_$_MFEWSAccount
_OBJC_METACLASS_$_MFEWSConnection
_OBJC_METACLASS_$_MFEWSCopyItemsRequestOperation
_OBJC_METACLASS_$_MFEWSCopyItemsResponseOperation
_OBJC_METACLASS_$_MFEWSCreateEventReplyRequestOperation
_OBJC_METACLASS_$_MFEWSCreateEventReplyResponseOperation
_OBJC_METACLASS_$_MFEWSCreateFolderRequestOperation
_OBJC_METACLASS_$_MFEWSCreateFolderResponseOperation
_OBJC_METACLASS_$_MFEWSCreateItemRequestOperation
_OBJC_METACLASS_$_MFEWSCreateItemResponseOperation
_OBJC_METACLASS_$_MFEWSCreateMessageRequestOperation
_OBJC_METACLASS_$_MFEWSDeleteFolderRequestOperation
_OBJC_METACLASS_$_MFEWSDeleteItemsRequestOperation
_OBJC_METACLASS_$_MFEWSDeliverer
_OBJC_METACLASS_$_MFEWSDeliveryAccount
_OBJC_METACLASS_$_MFEWSFindItemsRequestOperation
_OBJC_METACLASS_$_MFEWSFindItemsResponseOperation
_OBJC_METACLASS_$_MFEWSGateway
_OBJC_METACLASS_$_MFEWSGetFolderRequestOperation
_OBJC_METACLASS_$_MFEWSGetFolderResponseOperation
_OBJC_METACLASS_$_MFEWSGetItemDataRequestOperation
_OBJC_METACLASS_$_MFEWSGetItemDataResponseOperation
_OBJC_METACLASS_$_MFEWSGetItemsRequestOperation
_OBJC_METACLASS_$_MFEWSGetItemsResponseOperation
_OBJC_METACLASS_$_MFEWSGetUserOofSettingsRequestOperation
_OBJC_METACLASS_$_MFEWSGetUserOofSettingsResponseOperation
_OBJC_METACLASS_$_MFEWSLibraryUpdateOperation
_OBJC_METACLASS_$_MFEWSMessage
_OBJC_METACLASS_$_MFEWSMoveFolderRequestOperation
_OBJC_METACLASS_$_MFEWSOfflineGateway
_OBJC_METACLASS_$_MFEWSRenameFolderRequestOperation
_OBJC_METACLASS_$_MFEWSRequestOperation
_OBJC_METACLASS_$_MFEWSResponseOperation
_OBJC_METACLASS_$_MFEWSSetUserOofSettingsRequestOperation
_OBJC_METACLASS_$_MFEWSSetUserOofSettingsResponseOperation
_OBJC_METACLASS_$_MFEWSSizeEngine
_OBJC_METACLASS_$_MFEWSStore
_OBJC_METACLASS_$_MFEWSSuppressReadReceiptsRequestOperation
_OBJC_METACLASS_$_MFEWSSyncFolderHierarchyRequestOperation
_OBJC_METACLASS_$_MFEWSSyncFolderHierarchyResponseOperation
_OBJC_METACLASS_$_MFEWSSyncFolderItemsRequestOperation
_OBJC_METACLASS_$_MFEWSSyncFolderItemsResponseOperation
_OBJC_METACLASS_$_MFEWSUpdateItemRequestOperation
_OBJC_METACLASS_$_MFExchangeIMAPAccount
_OBJC_METACLASS_$_MFExchangeIMAPConnection
_OBJC_METACLASS_$_MFFilesystemWatcher
_OBJC_METACLASS_$_MFGmailLabelStore
_OBJC_METACLASS_$_MFHTMLConverter
_OBJC_METACLASS_$_MFHTMLParser
_OBJC_METACLASS_$_MFIMAPAccount
_OBJC_METACLASS_$_MFIMAPAppendMessageOperation
_OBJC_METACLASS_$_MFIMAPCopyMessagesOperation
_OBJC_METACLASS_$_MFIMAPCreateOperation
_OBJC_METACLASS_$_MFIMAPDeleteOperation
_OBJC_METACLASS_$_MFIMAPOfflineCopyOnStupidServerOperation
_OBJC_METACLASS_$_MFIMAPOperation
_OBJC_METACLASS_$_MFIMAPOperationCache
_OBJC_METACLASS_$_MFIMAPSizeEngine
_OBJC_METACLASS_$_MFIMAPStoreFlagsOperation
_OBJC_METACLASS_$_MFIMAPStoreGmailLabelsOperation
_OBJC_METACLASS_$_MFIMAPStoreOperation
_OBJC_METACLASS_$_MFJunkMail
_OBJC_METACLASS_$_MFJunkMailFilter
_OBJC_METACLASS_$_MFLibrary
_OBJC_METACLASS_$_MFLibraryCalendarEvent
_OBJC_METACLASS_$_MFLibraryIMAPMessage
_OBJC_METACLASS_$_MFLibraryIMAPStore
_OBJC_METACLASS_$_MFLibraryMessage
_OBJC_METACLASS_$_MFLibraryQueries
_OBJC_METACLASS_$_MFLibraryStore
_OBJC_METACLASS_$_MFLibraryStoreMessageConsumer
_OBJC_METACLASS_$_MFLibraryThread
_OBJC_METACLASS_$_MFLibraryUpgrader
_OBJC_METACLASS_$_MFLocalAccount
_OBJC_METACLASS_$_MFLocationManager
_OBJC_METACLASS_$_MFMailAccount
_OBJC_METACLASS_$_MFMailDropPreferencesManager
_OBJC_METACLASS_$_MFMailMigrator
_OBJC_METACLASS_$_MFMailbox
_OBJC_METACLASS_$_MFMailboxDirectoryScanner
_OBJC_METACLASS_$_MFMessageAddressee
_OBJC_METACLASS_$_MFMessageContext
_OBJC_METACLASS_$_MFMessageCounts
_OBJC_METACLASS_$_MFMessageCriterion
_OBJC_METACLASS_$_MFMessageDeliverer
_OBJC_METACLASS_$_MFMessageReplyGenerator
_OBJC_METACLASS_$_MFMessageRouter
_OBJC_METACLASS_$_MFMessageRouterUtilities
_OBJC_METACLASS_$_MFMessageRule
_OBJC_METACLASS_$_MFMessageRuleCriterion
_OBJC_METACLASS_$_MFMessageSortingInformation
_OBJC_METACLASS_$_MFMessageSortingValue
_OBJC_METACLASS_$_MFMessageStore
_OBJC_METACLASS_$_MFMessageThread
_OBJC_METACLASS_$_MFNeXTStore
_OBJC_METACLASS_$_MFNetworkLocation
_OBJC_METACLASS_$_MFPOPAccount
_OBJC_METACLASS_$_MFPOPConnection
_OBJC_METACLASS_$_MFPOPMessage
_OBJC_METACLASS_$_MFPOPSizeEngine
_OBJC_METACLASS_$_MFPOPStore
_OBJC_METACLASS_$_MFParentalControlAccount
_OBJC_METACLASS_$_MFParentalControlManager
_OBJC_METACLASS_$_MFParentalControlSettings
_OBJC_METACLASS_$_MFParentalControlStore
_OBJC_METACLASS_$_MFPersistenceManager
_OBJC_METACLASS_$_MFPreparedStatement
_OBJC_METACLASS_$_MFQuoteParser
_OBJC_METACLASS_$_MFRecoveredMessage
_OBJC_METACLASS_$_MFRecoveredStore
_OBJC_METACLASS_$_MFRedundantContentMarkup
_OBJC_METACLASS_$_MFRedundantTextIdentifier
_OBJC_METACLASS_$_MFRemoteAppendMessagesContext
_OBJC_METACLASS_$_MFRemoteAttachmentManager
_OBJC_METACLASS_$_MFRemoteStore
_OBJC_METACLASS_$_MFRemoteStoreAccount
_OBJC_METACLASS_$_MFRemoteStoreSizeEngine
_OBJC_METACLASS_$_MFSMTPAccount
_OBJC_METACLASS_$_MFSMTPConnection
_OBJC_METACLASS_$_MFSMTPDeliverer
_OBJC_METACLASS_$_MFSeenMessage
_OBJC_METACLASS_$_MFSeenMessagesManager
_OBJC_METACLASS_$_MFSizeEngine
_OBJC_METACLASS_$_MFSmartMailboxUnreadCountManager
_OBJC_METACLASS_$_MFSnippetCalculator
_OBJC_METACLASS_$_MFSnippetManager
_OBJC_METACLASS_$_MFSpecialMailbox
_OBJC_METACLASS_$_MFSpotlightManager
_OBJC_METACLASS_$_MFSpotlightResultCollector
_OBJC_METACLASS_$_MFSqliteHandle
_OBJC_METACLASS_$_MFStringUniquer
_OBJC_METACLASS_$_MFSyncedFile
_OBJC_METACLASS_$_MFTOCMessage
_OBJC_METACLASS_$_MFTableOfContents
_OBJC_METACLASS_$_MFUnreadCountQueryObserver
_OBJC_METACLASS_$_MFUsageCounter
_OBJC_METACLASS_$_MFVIPSendersController
_OBJC_METACLASS_$_MFWebMessageDocument
_OBJC_METACLASS_$_MailFramework
_OBJC_METACLASS_$__IMAPOfflineRestoreContext
_OBJC_METACLASS_$__MFAppleScriptHeaderRecord
_OBJC_METACLASS_$__MFConversationsMessageCollector
_OBJC_METACLASS_$__MFDataCollector
_OBJC_METACLASS_$__MFIMAPMailboxDeletionQueueEntry
_OBJC_METACLASS_$__MFLibraryThreadRequest
_OBJC_METACLASS_$__MFMailboxChildrenEnumerator
_OBJC_METACLASS_$__MFMailboxEnumerator
_OBJC_METACLASS_$__MFMessageCollector
_OBJC_METACLASS_$__MFMessageLoadingContext
_OBJC_METACLASS_$__MFMessageSortingValueColor
_OBJC_METACLASS_$__MFMessageSortingValueDateLastViewed
_OBJC_METACLASS_$__MFMessageSortingValueDateReceived
_OBJC_METACLASS_$__MFMessageSortingValueDateSent
_OBJC_METACLASS_$__MFMessageSortingValueLibraryID
_OBJC_METACLASS_$__MFMessageSortingValueMailbox
_OBJC_METACLASS_$__MFMessageSortingValueMessageFlags
_OBJC_METACLASS_$__MFMessageSortingValueMessageSize
_OBJC_METACLASS_$__MFMessageSortingValueNumberOfAttachments
_OBJC_METACLASS_$__MFMessageSortingValueSender
_OBJC_METACLASS_$__MFMessageSortingValueSubject
_OBJC_METACLASS_$__MFMessageSortingValueTo
_OBJC_METACLASS_$__MFNonContentSmartMailboxUnreadCountManager
_OBJC_METACLASS_$__MFProgressHandlerMonitorContext
_OBJC_METACLASS_$__MFRedundantTextIdentifierAttachmentContext
_OBJC_METACLASS_$__MFRedundantTextIdentifierParseContext
_OBJC_METACLASS_$__MFRedundantTextIdentifierSolutionContext
_OBJC_METACLASS_$__MFRedundantTextIdentifierSolutionGenerator
_OBJC_METACLASS_$__MFRootlessMailbox
_OBJC_METACLASS_$__MFRoutingDictionaryContext
_OBJC_METACLASS_$__MFSMTPEnhancedStatusCode
_OBJC_METACLASS_$__MFSeenMessagesStore
_OBJC_METACLASS_$__MFSetFlags
_OBJC_METACLASS_$__MFSmartMailboxesEnumerator
_OBJC_METACLASS_$__MFZipStream
__MFLibraryStringSearch
_and64
_cacheSizeForFSAndDBType
_compareChildrenIndexes
_contentsOfDatabaseDefinition
_databaseIsRemote
_findEntity
_fseventsCallback
_getRangeOfMessageFromCacheFileData
_mf_sqlite3_bind_blob
_mf_sqlite3_bind_double
_mf_sqlite3_bind_int
_mf_sqlite3_bind_int64
_mf_sqlite3_bind_null
_mf_sqlite3_bind_parameter_index
_mf_sqlite3_bind_text
_mf_sqlite3_bind_text16
_mf_sqlite3_bind_text_or_null
_mf_sqlite3_exec_printf
_mf_sqlite3_get_table_printf
_numberForSortOrder
_pageSizeForFSType
_sFileSystemPathKey
_sortOrderForNumber
_tablesForBaseTableAndOtherTables
_uuid
_ABExchangeAutodiscoverServerNameKey
_ABExchangeAutodiscoverServerPathKey
_ABExchangeAutodiscoverServerPortNumberKey
_ABExchangeAutodiscoverServerUseSSLKey
_ABExchangeExternalServerNameKey
_ABExchangeExternalServerPathKey
_ABExchangeExternalServerPortNumberKey
_ABExchangeExternalServerUseSSLKey
_ABExchangePortNumberKey
_ABExchangeServerNameKey
_ABExchangeServerPathKey
_ABExchangeUseSSLKey
_AEGetAttributeDesc
_AEGetDescData
_AOSAccountCreate
_AOSKGetQuotaError
_AOSTransactionCancel
_AOSTransactionGetContext
_AOSTransactionGetError
_AOSTransactionGetResult
_AOSTransactionSuccessful
_AudioObjectGetPropertyData
_AudioServicesGetProperty
_BOMCopierCopyWithOptions
_BOMCopierFree
_BOMCopierNew
_BOMCopierSetFatalErrorHandler
_BOMCopierSetFatalFileErrorHandler
_CC_MD5_Final
_CC_MD5_Init
_CC_MD5_Update
_CFAbsoluteTimeGetCurrent
_CFArrayAppendValue
_CFArrayCreate
_CFArrayCreateMutable
_CFArrayGetCount
_CFArrayGetValueAtIndex
_CFArrayRemoveAllValues
_CFBundleGetMainBundle
_CFBundleGetValueForInfoDictionaryKey
_CFCopyDescription
_CFDictionaryCreate
_CFDictionaryGetValue
_CFEqual
_CFErrorGetCode
_CFErrorGetDomain
_CFNetDiagnosticCopyNetworkStatusPassively
_CFNetDiagnosticCreateWithStreams
_CFNetDiagnosticDiagnoseProblemInteractively
_CFNotificationCenterAddObserver
_CFNotificationCenterGetLocalCenter
_CFNotificationCenterRemoveObserver
_CFNumberCreate
_CFPreferencesAppSynchronize
_CFPreferencesCopyAppValue
_CFPreferencesSetAppValue
_CFPropertyListCreateDeepCopy
_CFRelease
_CFRetain
_CFRunLoopAddTimer
_CFRunLoopGetCurrent
_CFRunLoopGetMain
_CFRunLoopPerformBlock
_CFRunLoopTimerCreate
_CFRunLoopTimerInvalidate
_CFStringAppendCString
_CFStringAppendCharacters
_CFStringCompare
_CFStringCompareWithOptions
_CFStringCompareWithOptionsAndLocale
_CFStringConvertEncodingToNSStringEncoding
_CFStringConvertIANACharSetNameToEncoding
_CFStringCreateMutableWithExternalCharactersNoCopy
_CFStringCreateWithFormat
_CFStringCreateWithSubstring
_CFStringFindWithOptions
_CFStringFindWithOptionsAndLocale
_CFStringFold
_CFStringGetCStringPtr
_CFStringGetCharacters
_CFStringGetCharactersPtr
_CFStringGetLength
_CFStringLowercase
_CFStringNormalize
_CFStringSetExternalCharactersNoCopy
_CFStringTrimWhitespace
_CFTreeAppendChild
_CFTreeApplyFunctionToChildren
_CFTreeCreate
_CFTreeFindRoot
_CFTreeGetChildAtIndex
_CFTreeGetChildCount
_CFTreeGetContext
_CFTreeGetFirstChild
_CFTreeGetNextSibling
_CFTreeGetParent
_CFTreeInsertSibling
_CFTreePrependChild
_CFTreeRemove
_CFTreeRemoveAllChildren
_CFURLCreateStringByAddingPercentEscapes
_CFURLCreateWithFileSystemPath
_CFUserNotificationDisplayAlert
_CRAddressKindEmail
_CRRecentsDomainMail
_CSBackupSetItemExcluded
_CalCalendarTypeIMAP
_CalGroupTypeExchange
_EWSExchangeWebServicesErrorDomain
_EWSPropertyNameMessageJunkFlag
_EWSPropertyNameMessageJunkRecordedFlag
_EWSPropertyNameMessageNotJunkFlag
_EWSPropertyNameMessageRedirectedFlag
_EWSPropertySetIdApple
_EWSPropertySetIdNote
_EWSPropertyTag_PR_ADDITIONAL_REN_ENTRYIDS
_EWSPropertyTag_PR_ENTRYID
_EWSPropertyTag_PR_FLAG_STATUS
_EWSPropertyTag_PR_FOLLOWUP_ICON
_EWSPropertyTag_PR_HASATTACH
_EWSPropertyTag_PR_HTML
_EWSPropertyTag_PR_INTERNET_MESSAGE_ID
_EWSPropertyTag_PR_LAST_VERB_EXECUTED
_EWSPropertyTag_PR_MESSAGE_FLAGS
_EWSPropertyTag_PR_MSG_STATUS
_EWSPropertyTag_PR_SEARCH_KEY
_EWSPropertyTag_PR_SENDER_EMAIL_ADDRESS
_EWSPropertyTag_PR_SENDER_NAME
_EWSPropertyTag_PR_TODO_ITEM_FLAGS
_EWSPropertyTag_PR_TRANSPORT_MESSAGE_HEADERS
_FCMailAddToWhiteList
_FCMailRemoveFromWhiteList
_FSEventStreamCopyPathsBeingWatched
_FSEventStreamCreate
_FSEventStreamInvalidate
_FSEventStreamRelease
_FSEventStreamSetDispatchQueue
_FSEventStreamStart
_FSEventStreamStop
_IAAccountCompare
_IAAccountDescriptionKey
_IAAccountTypeKey
_IAAuthSchemeNone
_IAEmailAddressKey
_IAExchangeAutodiscoverURLKey
_IAExchangeDescriptionKey
_IAExchangeEmailKey
_IAExchangeExternalServerURLKey
_IAExchangeFullNameKey
_IAExchangeInternalHostKey
_IAExchangeInternalPortKey
_IAExchangeInternalUseSSLKey
_IAExchangeRootFolderIDKey
_IAExchangeServerURLKey
_IAExchangeUserNameKey
_IAMailAccountDescriptionKey
_IAMailAuthenticationType
_IAMailDeleteOnServerIntervalKey
_IAMailDeletionPolicyKey
_IAMailEmailAddressKey
_IAMailEmailAddressesKey
_IAMailFullNameKey
_IAMailIMAPPathKey
_IAMailInactiveAccountKey
_IAMailIncomingMailServerKey
_IAMailIncomingUseSSLKey
_IAMailOutgoingAuthenticationType
_IAMailOutgoingMailServerKey
_IAMailOutgoingPasswordKey
_IAMailOutgoingPortKey
_IAMailOutgoingTLSCertificate
_IAMailOutgoingUseSSLKey
_IAMailOutgoingUserNameKey
_IAMailPasswordKey
_IAMailPortKey
_IAMailTLSCertificate
_IAMailUserNameKey
_IAPluginIdentifierKey
_IMAPCreateArrayForMessageFlags
_IMAPIdName
_IMAPIdOS
_IMAPIdOSVersion
_IMAPIdVendor
_IMAPIdVersion
_IMAPMailboxKeyAttributes
_IMAPMailboxKeyChildren
_IMAPMailboxUserInfoKeySupportsCustomFlags
_IMAPMessageFlagColorBit0
_IMAPMessageFlagColorBit1
_IMAPMessageFlagColorBit2
_IMAPMessageFlagDollarForwarded
_IMAPMessageFlagDollarJunk
_IMAPMessageFlagDollarNotJunk
_IMAPMessageFlagForwarded
_IMAPMessageFlagJunk
_IMAPMessageFlagNotJunk
_IMAPMessageInfoKeyDestinationUidSet
_IMAPMessageInfoKeySourceUidSet
_IMAPMessageInfoKeyUIDValidity
_IMAPSASLProfileName
_IMAPStandardPorts
_IMAPStandardSSLPorts
_IMAPStatusKeyUidNext
_IMAPStatusKeyUidValidity
_IMAPStringKeyAppendOperation
_IMAPStringKeyCheckOperation
_IMAPStringKeyConnectingFormat
_IMAPStringKeyCreateOperation
_IMAPStringKeyDeleteOperation
_IMAPStringKeyExamineOperation
_IMAPStringKeyExpungeOperation
_IMAPStringKeyFetchOperation
_IMAPStringKeyQuotedFormat
_IMAPStringKeyRemovingCacheFiles
_IMAPStringKeyRenameOperation
_IMAPStringKeyServerStatusFormat
_IMAPStringKeyUidCopyOperation
_IMAPStringKeyUidSearchOperation
_IMAPStringKeyUidStoreOperation
_IOPSGetTimeRemainingEstimate
_LSMMapAddCategory
_LSMMapAddText
_LSMMapAddTextWithWeight
_LSMMapCompile
_LSMMapCreate
_LSMMapCreateFromURL
_LSMMapSetProperties
_LSMMapStartTraining
_LSMMapWriteToURL
_LSMResultCreate
_LSMResultGetCategory
_LSMResultGetScore
_LSMTextAddWords
_LSMTextCreate
_MCAccountAuthenticationScheme
_MCAccountExternalURL
_MCAccountInternalURL
_MCAccountLastUsedAutodiscoverURL
_MCAccountName
_MCAccountPortNumber
_MCAccountProtocol
_MCAccountSSLEnabled
_MCAccountTypeAosIMAP
_MCAccountTypeEWS
_MCAccountTypeIMAP
_MCAccountTypePOP
_MCAccountTypeSMTP
_MCArchiveNameMailDropImages
_MCAttachmentDataDidChangeNotification
_MCAttachmentDidFinishReadingNotification
_MCAuthSchemeAPop
_MCAuthSchemeAppleToken
_MCAuthSchemeClearText
_MCAuthSchemeCramMd5
_MCAuthSchemeExternal
_MCAuthSchemeGSSAPI
_MCAuthSchemeKPop
_MCAuthSchemeKerberos4
_MCAuthSchemeNTLM
_MCAuthSchemeNoAuthentication
_MCConversationAlgorithmTracerIdentifier
_MCCreateFlagChangeDictionary
_MCCreateStringFromHeaderBytes
_MCDebugLog
_MCDescriptionForMessageFlags
_MCErrorKeySSLTrust
_MCExchangeMessageTracerIdentifier
_MCFlagKeyDeleted
_MCFlagKeyEncrypted
_MCFlagKeyFlagColor
_MCFlagKeyFlagged
_MCFlagKeyFontSizeDelta
_MCFlagKeyForwarded
_MCFlagKeyHighlightTextInTOC
_MCFlagKeyIsJunk
_MCFlagKeyIsNotJunk
_MCFlagKeyJunkMailLevel
_MCFlagKeyJunkMailLevelRecorded
_MCFlagKeyMessageColor
_MCFlagKeyMessageColorHasBeenEvaluated
_MCFlagKeyMessageHasBeenViewed
_MCFlagKeyMessageViewedDate
_MCFlagKeyNumberOfAttachments
_MCFlagKeyPriorityLevel
_MCFlagKeyRead
_MCFlagKeyRedirected
_MCFlagKeyReplied
_MCFlagKeySigned
_MCGetNextHeaderFromData
_MCGmailLabelDrafts
_MCGmailLabelImportant
_MCGmailLabelInbox
_MCGmailLabelKeyAddLabels
_MCGmailLabelKeyRemoveLabels
_MCGmailLabelSent
_MCGmailLabelSpam
_MCGmailLabelStarred
_MCGmailLabelTrash
_MCHeaderKeyBcc
_MCHeaderKeyCc
_MCHeaderKeyContentTransferEncoding
_MCHeaderKeyContentType
_MCHeaderKeyDate
_MCHeaderKeyFrom
_MCHeaderKeyFromSpace
_MCHeaderKeyInReplyTo
_MCHeaderKeyListId
_MCHeaderKeyMessageId
_MCHeaderKeyReceived
_MCHeaderKeyReceivedSpf
_MCHeaderKeyReferences
_MCHeaderKeyReplyTo
_MCHeaderKeyResentCc
_MCHeaderKeyResentDate
_MCHeaderKeyResentFrom
_MCHeaderKeyResentMessageId
_MCHeaderKeyResentTo
_MCHeaderKeySender
_MCHeaderKeySubject
_MCHeaderKeyTo
_MCHeaderKeyXForefrontAntispamReport
_MCHeaderKeyXMailCalendarPart
_MCHeaderKeyXMailer
_MCHeaderKeyXPCAddresses
_MCHeaderKeyXPCRequest
_MCHeaderKeyXPCResponse
_MCHeaderKeyXPriority
_MCHeaderKeyXSmtpServer
_MCHeaderKeyXSpamFlag
_MCHeaderKeyXSpamStatus
_MCHeaderKeyXUniversallyUniqueIdentifier
_MCHelpTagConnectionRefused
_MCHelpTagConnectionTimedOut
_MCHelpTagFailedLogin
_MCHelpTagFailedSASL
_MCHelpTagHostUnreachable
_MCHelpTagSSLConnectionFailureFormat
_MCHelpTagTLSNotSupportedFormat
_MCIMAPMessageTracerIdentifier
_MCLogCategoryPreviousRecipients
_MCLogMessage
_MCMailBundleIdentifier
_MCMailErrorDomain
_MCMailboxDoubleSuffixTracerIdentifier
_MCMessageDataSourceMessagesCompactedNotification
_MCMessageDataSourceMessagesDeletedNotification
_MCMessageDataSourceMessagesReadNotification
_MCMessageURLPrefix
_MCMigrationEmlxCountIdentifier
_MCMigrationLostEmlxCountIdentifier
_MCMigrationMessageCountIdentifier
_MCMimeCompleteTypeAttachment
_MCMimeParameterAutoArchive
_MCMimeParameterExpirationDate
_MCMimeParameterFilename
_MCMimeParameterFilesize
_MCMimeParameterICloudImage
_MCMimeParameterMimeType
_MCMimeSubtypeRFC822
_MCMimeSubtypeSigned
_MCMimeTypeMessage
_MCMimeTypeMultipart
_MCMimeValueLocalFile
_MCNetworkConfigurationDidChangeNotification
_MCNonContainerizedHomeDirectory
_MCNonLocalizedForwardPrefixString
_MCNonLocalizedReplyPrefixString
_MCNotificationKeyMessages
_MCRemoteDraftStorageDisabledTracerIdentifier
_MCSignatureAttributeName
_MCSpotlightAttributeAttachmentNames
_MCSpotlightAttributeAttachmentTypes
_MCSpotlightAttributeDateLastViewed
_MCSpotlightAttributeDateReceived
_MCSpotlightAttributeFlagColor
_MCSpotlightAttributeFlagged
_MCSpotlightAttributeGmailLabels
_MCSpotlightAttributeMessageID
_MCSpotlightAttributePriority
_MCSpotlightAttributeRead
_MCSpotlightAttributeRepliedTo
_MCStringKeyAuthNotSupportedFormat
_MCStringKeyConnectingToServerFormat
_MCStringKeyConnectionRefused
_MCStringKeyConnectionRefusedDefaultPorts
_MCStringKeyConnectionTimedOut
_MCStringKeyConnectionTimedOutDefaultPorts
_MCStringKeyFailedLogin
_MCStringKeyFailedSASL
_MCStringKeyGenericConnectFailed
_MCStringKeyGenericConnectFailedDefaultPorts
_MCStringKeyHostUnreachable
_MCStringKeyHostUnreachableDefaultPorts
_MCStringKeyInsecurePasswordDescription
_MCStringKeyInsecurePasswordDialogTitle
_MCStringKeyNoSubject
_MCStringKeyOpeningMailbox
_MCStringKeyPOPLoggingInFormat
_MCStringKeyRebuildingMailboxFormat
_MCStringKeyReplySubjectPrefix
_MCStringKeySSLAlertFormat
_MCStringKeySSLCertExpired
_MCStringKeySSLCertNotYetValid
_MCStringKeySSLCertUntrusted
_MCStringKeySSLConnectionFailureFormat
_MCStringKeySSLConnectionFailureFormatDefaultPorts
_MCStringKeySSLGenericConnectError
_MCStringKeySSLUnknownRootCert
_MCStringKeyTLSNotSupportedFormat
_MCStringKeyTransferringMessages
_MCV2ComplexMigrationTracerExternalIdentifier
_MCV2ComplexMigrationTracerIdentifier
_MCV2SimpleMigrationTracerExternalIdentifier
_MCV2SimpleMigrationTracerIdentifier
_MCWhiteMailboxNameGmail
_MCWhiteMailboxNameGoogleMail
_MCWhiteMailboxNameGoogleSpaceMail
_MDItemCopyAttribute
_MDItemCopyAttributeNames
_MDItemCopyAttributes
_MDItemCopyAttributesBulk
_MDItemCreate
_MDItemSetAttribute
_MDQueryCopyQueryString
_MDQueryCreate
_MDQueryDisableUpdates
_MDQueryEnableUpdates
_MDQueryExecute
_MDQueryGetAttributeValueOfResultAtIndex
_MDQueryGetResultAtIndex
_MDQueryGetResultCount
_MDQueryIsStopped
_MDQuerySetBatchingParameters
_MDQuerySetDispatchQueue
_MDQuerySetMaxCount
_MDQuerySetSearchScope
_MDQueryStop
_NSApp
_NSCalendarIdentifierGregorian
_NSClassFromString
_NSCocoaErrorDomain
_NSDebugEnabled
_NSDecrementExtraRefCountWasZero
_NSDefaultRunLoopMode
_NSDocumentTypeDocumentAttribute
_NSDocumentTypeDocumentOption
_NSEqualSizes
_NSExcludedElementsDocumentAttribute
_NSFileCreationDate
_NSFileHandleOperationException
_NSFileModificationDate
_NSFilePosixPermissions
_NSFileSize
_NSFileSystemFreeSize
_NSFullUserName
_NSGenericException
_NSHTMLTextDocumentType
_NSInternalInconsistencyException
_NSInvalidArgumentException
_NSKeyValueChangeNewKey
_NSLocalizedFileSizeDescription
_NSLog
_NSMapGet
_NSMergeByPropertyObjectTrumpMergePolicy
_NSPOSIXErrorDomain
_NSPersistentStoreTimeoutOption
_NSSQLiteStoreType
_NSSearchPathForDirectoriesInDomains
_NSStreamSocketSecurityLevelNone
_NSStringEncodingDetectionFromWindowsKey
_NSStringEncodingDetectionSuggestedEncodingsKey
_NSStringEncodingDetectionUseOnlySuggestedEncodingsKey
_NSStringFromBOOL
_NSStringFromClass
_NSStringFromRange
_NSStringFromSelector
_NSTemporaryDirectory
_NSURLAuthenticationMethodHTMLForm
_NSURLAuthenticationMethodHTTPBasic
_NSURLAuthenticationMethodHTTPDigest
_NSURLAuthenticationMethodNTLM
_NSURLContentModificationDateKey
_NSURLCreationDateKey
_NSURLEffectiveIconKey
_NSURLErrorDomain
_NSURLErrorFailingURLErrorKey
_NSURLErrorFailingURLPeerTrustErrorKey
_NSURLErrorKey
_NSURLFileResourceTypeKey
_NSURLFileResourceTypeSymbolicLink
_NSURLIsAliasFileKey
_NSURLIsDirectoryKey
_NSURLIsExecutableKey
_NSURLIsHiddenKey
_NSURLIsReadableKey
_NSURLIsSystemImmutableKey
_NSURLIsUserImmutableKey
_NSURLIsWritableKey
_NSURLLinkCountKey
_NSURLNameKey
_NSURLParentDirectoryURLKey
_NSURLQuarantinePropertiesKey
_NSURLTypeIdentifierKey
_NSUbiquitousKeyValueStoreChangeReasonKey
_NSUbiquitousKeyValueStoreChangedKeysKey
_NSUbiquitousKeyValueStoreDidChangeExternallyNotification
_NSUbiquityIdentityDidChangeNotification
_NSUnderlyingErrorKey
_NSUserDefaultsDidChangeNotification
_NSUserName
_NSWebArchiveTextDocumentType
_NSWebPreferencesDocumentOption
_NSZeroSize
_OBJC_CLASS_$_ABAddressBook
_OBJC_CLASS_$_ABDAVQuery
_OBJC_CLASS_$_ABExchangeSetup
_OBJC_CLASS_$_ABGroup
_OBJC_CLASS_$_ABMonogramFactory
_OBJC_CLASS_$_ABMonogramImageLoading
_OBJC_CLASS_$_ABMonogramOptions
_OBJC_CLASS_$_ABMutableMultiValue
_OBJC_CLASS_$_ABPerson
_OBJC_CLASS_$_ABSearchElement
_OBJC_CLASS_$_ABSubscribedPerson
_OBJC_CLASS_$_CDDHistoryWindow
_OBJC_CLASS_$_CDSession
_OBJC_CLASS_$_CRRecentContactsLibrary
_OBJC_CLASS_$_CRSearchQuery
_OBJC_CLASS_$_CalCalendar
_OBJC_CLASS_$_CalCalendarStore
_OBJC_CLASS_$_DOMDocument
_OBJC_CLASS_$_DOMHTMLDocument
_OBJC_CLASS_$_DOMHTMLElement
_OBJC_CLASS_$_EAEmailAddressGenerator
_OBJC_CLASS_$_EAEmailAddressLists
_OBJC_CLASS_$_EAEmailAddressParser
_OBJC_CLASS_$_EANameParser
_OBJC_CLASS_$_EWSAcceptItemType
_OBJC_CLASS_$_EWSBaseFolderType
_OBJC_CLASS_$_EWSCalendarItemType
_OBJC_CLASS_$_EWSCopyItemResponseType
_OBJC_CLASS_$_EWSCopyItemType
_OBJC_CLASS_$_EWSCreateFolderResponseType
_OBJC_CLASS_$_EWSCreateFolderType
_OBJC_CLASS_$_EWSCreateItemResponseType
_OBJC_CLASS_$_EWSCreateItemType
_OBJC_CLASS_$_EWSDeclineItemType
_OBJC_CLASS_$_EWSDeleteFolderType
_OBJC_CLASS_$_EWSDeleteItemFieldType
_OBJC_CLASS_$_EWSDeleteItemType
_OBJC_CLASS_$_EWSDistinguishedFolderIdType
_OBJC_CLASS_$_EWSDuration
_OBJC_CLASS_$_EWSEmailAddress
_OBJC_CLASS_$_EWSEmailAddressType
_OBJC_CLASS_$_EWSExchangeServiceBinding
_OBJC_CLASS_$_EWSExtendedPropertyType
_OBJC_CLASS_$_EWSFindItemResponseType
_OBJC_CLASS_$_EWSFindItemType
_OBJC_CLASS_$_EWSFolderChangeType
_OBJC_CLASS_$_EWSFolderIdType
_OBJC_CLASS_$_EWSFolderInfoResponseMessageType
_OBJC_CLASS_$_EWSFolderResponseShapeType
_OBJC_CLASS_$_EWSFolderType
_OBJC_CLASS_$_EWSGetFolderResponseType
_OBJC_CLASS_$_EWSGetFolderType
_OBJC_CLASS_$_EWSGetItemResponseType
_OBJC_CLASS_$_EWSGetItemType
_OBJC_CLASS_$_EWSGetUserOofSettingsRequestType
_OBJC_CLASS_$_EWSItemChangeType
_OBJC_CLASS_$_EWSItemIdType
_OBJC_CLASS_$_EWSItemResponseShapeType
_OBJC_CLASS_$_EWSItemType
_OBJC_CLASS_$_EWSMeetingResponseMessageType
_OBJC_CLASS_$_EWSMessageType
_OBJC_CLASS_$_EWSMimeContentType
_OBJC_CLASS_$_EWSMoveFolderType
_OBJC_CLASS_$_EWSPathToExtendedFieldType
_OBJC_CLASS_$_EWSPathToUnindexedFieldType
_OBJC_CLASS_$_EWSPostItemType
_OBJC_CLASS_$_EWSRemoveItemType
_OBJC_CLASS_$_EWSReplyBodyType
_OBJC_CLASS_$_EWSRestrictionType
_OBJC_CLASS_$_EWSSetFolderFieldType
_OBJC_CLASS_$_EWSSetItemFieldType
_OBJC_CLASS_$_EWSSetUserOofSettingsRequestType
_OBJC_CLASS_$_EWSSingleRecipientType
_OBJC_CLASS_$_EWSSuppressReadReceiptType
_OBJC_CLASS_$_EWSSyncFolderHierarchyCreateType
_OBJC_CLASS_$_EWSSyncFolderHierarchyDeleteType
_OBJC_CLASS_$_EWSSyncFolderHierarchyResponseType
_OBJC_CLASS_$_EWSSyncFolderHierarchyType
_OBJC_CLASS_$_EWSSyncFolderHierarchyUpdateType
_OBJC_CLASS_$_EWSSyncFolderItemsCreateOrUpdateType
_OBJC_CLASS_$_EWSSyncFolderItemsDeleteType
_OBJC_CLASS_$_EWSSyncFolderItemsReadFlagType
_OBJC_CLASS_$_EWSSyncFolderItemsResponseMessageType
_OBJC_CLASS_$_EWSSyncFolderItemsResponseType
_OBJC_CLASS_$_EWSSyncFolderItemsType
_OBJC_CLASS_$_EWSTargetFolderIdType
_OBJC_CLASS_$_EWSTentativelyAcceptItemType
_OBJC_CLASS_$_EWSUpdateFolderType
_OBJC_CLASS_$_EWSUpdateItemType
_OBJC_CLASS_$_EWSUserOofSettingsType
_OBJC_CLASS_$_IAAccount
_OBJC_CLASS_$_IAAccountCollector
_OBJC_CLASS_$_IAAccountSync
_OBJC_CLASS_$_IAGoogleAuthTokenManager
_OBJC_CLASS_$_IMAPBasicResponse
_OBJC_CLASS_$_IMAPClientFetchBodyDataItem
_OBJC_CLASS_$_IMAPCommandPipeline
_OBJC_CLASS_$_IMAPConnection
_OBJC_CLASS_$_IMAPConnectionPool
_OBJC_CLASS_$_IMAPContinuationResponse
_OBJC_CLASS_$_IMAPDownloadCache
_OBJC_CLASS_$_IMAPFramework
_OBJC_CLASS_$_IMAPGateway
_OBJC_CLASS_$_IMAPMailbox
_OBJC_CLASS_$_IMAPMailboxSyncEngine
_OBJC_CLASS_$_IMAPMessage
_OBJC_CLASS_$_IMAPMessageDetails
_OBJC_CLASS_$_IMAPMessageWithCache
_OBJC_CLASS_$_IMAPQuotaRoot
_OBJC_CLASS_$_MCAccountSetupValidator
_OBJC_CLASS_$_MCActivityAggregate
_OBJC_CLASS_$_MCActivityMonitor
_OBJC_CLASS_$_MCAddressManager
_OBJC_CLASS_$_MCAttachment
_OBJC_CLASS_$_MCAuthScheme
_OBJC_CLASS_$_MCByteSet
_OBJC_CLASS_$_MCCIDURLProtocol
_OBJC_CLASS_$_MCConnection
_OBJC_CLASS_$_MCConnectionBasedAutodiscoverer
_OBJC_CLASS_$_MCDataScanner
_OBJC_CLASS_$_MCDateFormatterFactory
_OBJC_CLASS_$_MCDateParser
_OBJC_CLASS_$_MCDisplayNameManager
_OBJC_CLASS_$_MCEWSAutodiscoverer
_OBJC_CLASS_$_MCError
_OBJC_CLASS_$_MCFileTypeInfo
_OBJC_CLASS_$_MCISPAccountSettingsManager
_OBJC_CLASS_$_MCInvocationQueue
_OBJC_CLASS_$_MCKeychainManager
_OBJC_CLASS_$_MCMessage
_OBJC_CLASS_$_MCMessageBody
_OBJC_CLASS_$_MCMessageGenerator
_OBJC_CLASS_$_MCMessageHeaders
_OBJC_CLASS_$_MCMessageTracer
_OBJC_CLASS_$_MCMimeBody
_OBJC_CLASS_$_MCMimeCharset
_OBJC_CLASS_$_MCMimeDataEncoding
_OBJC_CLASS_$_MCMimeDecodeContext
_OBJC_CLASS_$_MCMimePart
_OBJC_CLASS_$_MCMonitoredInvocation
_OBJC_CLASS_$_MCMonitoredOperation
_OBJC_CLASS_$_MCMutableMessageHeaders
_OBJC_CLASS_$_MCNetworkController
_OBJC_CLASS_$_MCOutgoingMessage
_OBJC_CLASS_$_MCParsedMessage
_OBJC_CLASS_$_MCPriorityInvocation
_OBJC_CLASS_$_MCQOSInvocation
_OBJC_CLASS_$_MCQuotaUsage
_OBJC_CLASS_$_MCRemoteMessage
_OBJC_CLASS_$_MCResultTaskOperation
_OBJC_CLASS_$_MCSSLCertificateTrustPanelManager
_OBJC_CLASS_$_MCSharedPreferencesController
_OBJC_CLASS_$_MCStringRenderContext
_OBJC_CLASS_$_MCSubdata
_OBJC_CLASS_$_MCSubjectParser
_OBJC_CLASS_$_MCTaskOperation
_OBJC_CLASS_$_MCURLifier
_OBJC_CLASS_$_MCWorkerThread
_OBJC_CLASS_$_MUIWebDocument
_OBJC_CLASS_$_MUIWebDocumentView
_OBJC_CLASS_$_MailCoreFramework
_OBJC_CLASS_$_NSAlert
_OBJC_CLASS_$_NSAppleEventDescriptor
_OBJC_CLASS_$_NSAppleEventManager
_OBJC_CLASS_$_NSAppleScript
_OBJC_CLASS_$_NSApplication
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAttributeDescription
_OBJC_CLASS_$_NSAttributedString
_OBJC_CLASS_$_NSBlockOperation
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCache
_OBJC_CLASS_$_NSCalendar
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSColor
_OBJC_CLASS_$_NSCondition
_OBJC_CLASS_$_NSConditionLock
_OBJC_CLASS_$_NSCountedSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateComponents
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSEntityDescription
_OBJC_CLASS_$_NSEnumerator
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFetchRequest
_OBJC_CLASS_$_NSFileCoordinator
_OBJC_CLASS_$_NSFileHandle
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSFileVersion
_OBJC_CLASS_$_NSFileWrapper
_OBJC_CLASS_$_NSHashTable
_OBJC_CLASS_$_NSHost
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSIndexSet
_OBJC_CLASS_$_NSIndexSpecifier
_OBJC_CLASS_$_NSInvocation
_OBJC_CLASS_$_NSInvocationOperation
_OBJC_CLASS_$_NSItemProvider
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSLock
_OBJC_CLASS_$_NSMachBootstrapServer
_OBJC_CLASS_$_NSMachPort
_OBJC_CLASS_$_NSManagedObject
_OBJC_CLASS_$_NSManagedObjectContext
_OBJC_CLASS_$_NSManagedObjectModel
_OBJC_CLASS_$_NSMapTable
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableAttributedString
_OBJC_CLASS_$_NSMutableCharacterSet
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableOrderedSet
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNameSpecifier
_OBJC_CLASS_$_NSNotification
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNotificationQueue
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSNumberFormatter
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperation
_OBJC_CLASS_$_NSOperationQueue
_OBJC_CLASS_$_NSPersistentStoreCoordinator
_OBJC_CLASS_$_NSPointerArray
_OBJC_CLASS_$_NSPortMessage
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSPropertySpecifier
_OBJC_CLASS_$_NSRecursiveLock
_OBJC_CLASS_$_NSRegularExpression
_OBJC_CLASS_$_NSRelationshipDescription
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSRunningApplication
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSScriptClassDescription
_OBJC_CLASS_$_NSScriptCommand
_OBJC_CLASS_$_NSScriptObjectSpecifier
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSSound
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTask
_OBJC_CLASS_$_NSTextAttachment
_OBJC_CLASS_$_NSTextStorage
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimeZone
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSURLCredential
_OBJC_CLASS_$_NSURLCredentialStorage
_OBJC_CLASS_$_NSURLRequest
_OBJC_CLASS_$_NSURLSession
_OBJC_CLASS_$_NSURLSessionConfiguration
_OBJC_CLASS_$_NSUUID
_OBJC_CLASS_$_NSUbiquitousKeyValueStore
_OBJC_CLASS_$_NSUnarchiver
_OBJC_CLASS_$_NSUniqueIDSpecifier
_OBJC_CLASS_$_NSUserAppleScriptTask
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSWorkspace
_OBJC_CLASS_$_NSXPCConnection
_OBJC_CLASS_$_NSXPCInterface
_OBJC_CLASS_$_PDFDocument
_OBJC_CLASS_$_PHXSource
_OBJC_CLASS_$_PKPass
_OBJC_CLASS_$_WebArchive
_OBJC_CLASS_$_WebPreferences
_OBJC_CLASS_$_WebView
_OBJC_EHTYPE_$_NSException
_OBJC_EHTYPE_id
_OBJC_IVAR_$_MCMessage._dateLastViewedInterval
_OBJC_IVAR_$_MCMessage._dateReceivedInterval
_OBJC_IVAR_$_MCMessage._dateSentInterval
_OBJC_IVAR_$_MCMessage._documentID
_OBJC_IVAR_$_MCMessage._flags
_OBJC_IVAR_$_MCMessage._inReplyToHeaderDigest
_OBJC_IVAR_$_MCMessage._messageFlags
_OBJC_IVAR_$_MCMessage._messageIDHeaderDigest
_OBJC_IVAR_$_MCMessage._sender
_OBJC_IVAR_$_MCMessage._subject
_OBJC_IVAR_$_MCMessage._toRecipients
_OBJC_IVAR_$_MCMessage._type
_OBJC_METACLASS_$_IMAPConnection
_OBJC_METACLASS_$_MCConnection
_OBJC_METACLASS_$_MCMessage
_OBJC_METACLASS_$_MCMonitoredOperation
_OBJC_METACLASS_$_MCRemoteMessage
_OBJC_METACLASS_$_NSEnumerator
_OBJC_METACLASS_$_NSManagedObject
_OBJC_METACLASS_$_NSObject
_OSAtomicAdd32
_OSAtomicAdd32Barrier
_OSAtomicAdd64Barrier
_OSAtomicCompareAndSwap32
_OSAtomicCompareAndSwap32Barrier
_SOAPErrorFaultCodeKey
_SOAPErrorHTTPStatusKey
_SOAPWebServicesErrorDomain
_SecIdentityCopyCertificate
_SecIdentityCreateWithCertificate
_SecKeychainItemCopyFromPersistentReference
_SecKeychainItemCreatePersistentReference
_SecTrustGetCertificateCount
_UTTypeConformsTo
_UTTypeEqual
__AOSAccountCreateWithMemberName
__AOSAccountRetrieveMailAliasInfo
__AOSAccountRetrieveMailProperties
__AOSAccountUpdateSharedMailPrefs
__Block_object_assign
__Block_object_dispose
__DefaultRuneLocale
__MDConfigCopyStoreAttributes
__MDConfigCopyStoreInformation
__MDGetAllowedTaskCount
__MDGetCurrentTaskCount
__MDHealthCheckDirectory
__MDImportDirectory
__MDIndexingProgress
__MDItemSetAttributesForAbsolutePathsNoExAttr
__MDQuerySetLabel
__MDSetMailMessageAttributesAtTime
__NSAEDescriptorByConvertingObjectOfTypeInSuite
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__NSFullMethodName
__NSMethodExceptionProem
__SetApplicationDesiresAttention
__Unwind_Resume
___CFConstantStringClassReference
___assert_rtn
___error
___maskrune
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
___stderrp
__dispatch_main_q
__dispatch_queue_attr_concurrent
__kMDItemFileName
__kMDQueryScope
__kUTTypePassBundle
__objc_empty_cache
_abort
_asprintf
_atol
_atoll
_calloc
_ceil
_chmod
_class_getInstanceMethod
_close
_ctime
_deflate
_deflateEnd
_deflateInit2_
_dispatch_after
_dispatch_async
_dispatch_get_global_queue
_dispatch_once
_dispatch_queue_create
_dispatch_sync
_dispatch_time
_exit
_fclose
_fcntl
_feof
_fopen
_fprintf
_fread
_free
_fseek
_fstat$INODE64
_fts_close$INODE64
_fts_open$INODE64
_fts_read$INODE64
_fwrite
_getpid
_getxattr
_inet_ntop
_kABDatabaseChangedExternallyNotification
_kABDatabaseChangedNotification
_kABDeletedRecords
_kABEmailProperty
_kABFirstNameProperty
_kABGroupNameProperty
_kABInsertedRecords
_kABLastNameProperty
_kABMiddleNameProperty
_kABOtherLabel
_kABPersonUIDProperty
_kABSuffixProperty
_kABUpdatedRecords
_kAOSErrorDomain
_kAOSKError1
_kAOSKErrorInfo
_kAOSKErrorType
_kAOSMailAccountKey
_kAOSMailAddressIsVisibleKey
_kAOSMailAddressKey
_kAOSMailAddressesKey
_kAOSMailAliasEditingURLKey
_kAOSMailAliasesKey
_kAOSMailAuthTokenKey
_kAOSMailDefaultAddressKey
_kAOSMailIMAPHostnameKey
_kAOSMailIMAPPortKey
_kAOSMailIMAPRequiresSSLKey
_kAOSMailIsActiveKey
_kAOSMailNameKey
_kAOSMailPersonIDKey
_kAOSMailPrimaryAddressesKey
_kAOSMailSMTPHostnameKey
_kCFAllocatorDefault
_kCFAllocatorNull
_kCFBooleanTrue
_kCFBundleNameKey
_kCFBundleVersionKey
_kCFCopyStringDictionaryKeyCallBacks
_kCFRunLoopCommonModes
_kCFRunLoopDefaultMode
_kCFTypeArrayCallBacks
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kIAExchangePluginID
_kIAICloudPluginID
_kIAMailPluginID
_kIAServiceExchangeMail
_kIAServiceIMAP
_kIAServicePOP
_kMDItemAuthorEmailAddresses
_kMDItemAuthors
_kMDItemContentCreationDate
_kMDItemContentType
_kMDItemContentTypeTree
_kMDItemDisplayName
_kMDItemFSCreationDate
_kMDItemIsLikelyJunk
_kMDItemLastUsedDate
_kMDItemPath
_kMDItemRecipientEmailAddresses
_kMDItemRecipients
_kMDItemSubject
_kMDItemWhereFroms
_kMDQueryDidFinishNotification
_kMDQueryDidUpdateNotification
_kMDQueryProgressNotification
_kMDQueryUpdateAddedItems
_kMDQueryUpdateRemovedItems
_kSecAttrProtocolHTTP
_kSecAttrProtocolIMAP
_kSecAttrProtocolPOP3
_kSecAttrProtocolSMTP
_kUTTypeApplication
_kUTTypeArchive
_kUTTypeAudio
_kUTTypeContent
_kUTTypeData
_kUTTypeImage
_kUTTypeItem
_kUTTypeMessage
_kUTTypeMovie
_kUTTypePDF
_kUTTypeText
_link
_mach_absolute_time
_malloc
_memchr
_memcmp
_memcpy
_method_exchangeImplementations
_mkdtemp
_msgtracer_log_with_keys
_notify_post
_objc_autorelease
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_autoreleaseReturnValue
_objc_begin_catch
_objc_copyWeak
_objc_destroyWeak
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_exception_throw
_objc_getAssociatedObject
_objc_getProperty
_objc_initWeak
_objc_loadWeakRetained
_objc_moveWeak
_objc_msgSend
_objc_msgSendSuper2
_objc_msgSend_stret
_objc_release
_objc_retain
_objc_retainAutorelease
_objc_retainAutoreleaseReturnValue
_objc_retainAutoreleasedReturnValue
_objc_retainBlock
_objc_setAssociatedObject
_objc_setProperty_atomic
_objc_setProperty_atomic_copy
_objc_setProperty_nonatomic
_objc_setProperty_nonatomic_copy
_objc_storeStrong
_objc_storeWeak
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_open
_pthread_create
_pthread_join
_pthread_mutex_init
_pthread_mutex_lock
_pthread_mutex_unlock
_read
_remove
_removexattr
_rename
_scandir$INODE64
_setxattr
_snprintf
_sprintf
_sqlite3_bind_blob
_sqlite3_bind_double
_sqlite3_bind_int
_sqlite3_bind_int64
_sqlite3_bind_null
_sqlite3_bind_parameter_index
_sqlite3_bind_text
_sqlite3_bind_text16
_sqlite3_busy_handler
_sqlite3_busy_timeout
_sqlite3_clear_bindings
_sqlite3_close
_sqlite3_column_blob
_sqlite3_column_bytes
_sqlite3_column_int
_sqlite3_column_int64
_sqlite3_column_text
_sqlite3_column_type
_sqlite3_create_function
_sqlite3_db_handle
_sqlite3_errcode
_sqlite3_errmsg
_sqlite3_exec
_sqlite3_file_control
_sqlite3_finalize
_sqlite3_free
_sqlite3_free_table
_sqlite3_get_table
_sqlite3_last_insert_rowid
_sqlite3_mprintf
_sqlite3_open_v2
_sqlite3_prepare_v2
_sqlite3_progress_handler
_sqlite3_reset
_sqlite3_result_blob
_sqlite3_result_error
_sqlite3_result_int
_sqlite3_result_int64
_sqlite3_result_null
_sqlite3_step
_sqlite3_trace
_sqlite3_user_data
_sqlite3_value_int
_sqlite3_value_int64
_sqlite3_value_text
_sqlite3_vmprintf
_sscanf
_stat$INODE64
_statfs$INODE64
_strchr
_strcmp
_strerror
_strlen
_strncasecmp
_strncmp
_strnstr
_strtol
_strtoll
_strtoul
_strtoumax
_time
_u_strncasecmp
_ucnv_close
_ucnv_open
_ucnv_reset
_ucnv_toUChars
_unlink
dyld_stub_binder
