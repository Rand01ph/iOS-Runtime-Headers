/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface WebUserContentURLPatternPrivate : NSObject {
    struct UserContentURLPattern { 
        /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*m_invalid; 
        struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_scheme; 
        struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_host; 
        struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_path; 
        void*m_matchSubdomains; 
    } pattern;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end