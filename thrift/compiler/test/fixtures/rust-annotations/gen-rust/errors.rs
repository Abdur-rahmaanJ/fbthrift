// @generated by Thrift for thrift/compiler/test/fixtures/rust-annotations/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift error definitions for `module`.

/// Error definitions for `S1`.
pub mod s1 {

    pub type RError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::s1::RExn> for
        ::std::result::Result<crate::types::T6, RError>
    {
        fn from(e: crate::services::s1::RExn) -> Self {
            match e {
                crate::services::s1::RExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::s1::RExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(RError::ApplicationException(aexn)),
            }
        }
    }

}

/// Error definitions for `S2`.
pub mod s2 {

    pub type RError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::s2::RExn> for
        ::std::result::Result<crate::types::T6, RError>
    {
        fn from(e: crate::services::s2::RExn) -> Self {
            match e {
                crate::services::s2::RExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::s2::RExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(RError::ApplicationException(aexn)),
            }
        }
    }

}

/// Error definitions for `AllMethods`.
pub mod all_methods {

    pub trait AsSomeError {
        fn as_some_error(&self) -> Option<&crate::types::SomeError>;
    }

    impl AsSomeError for ::anyhow::Error {
        fn as_some_error(&self) -> Option<&crate::types::SomeError> {
            for cause in self.chain() {
                if let Some(BarError::se(e)) = cause.downcast_ref::<BarError>() {
                    return Some(e);
                }
            }
            None
        }
    }

    pub type FooError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::all_methods::FooExn> for
        ::std::result::Result<(), FooError>
    {
        fn from(e: crate::services::all_methods::FooExn) -> Self {
            match e {
                crate::services::all_methods::FooExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::all_methods::FooExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(FooError::ApplicationException(aexn)),
            }
        }
    }

    /// Errors for bar (client side).
    #[derive(Debug)]
    pub enum BarError {
        se(crate::types::SomeError),
        ApplicationException(::fbthrift::ApplicationException),
        ThriftError(::anyhow::Error),
    }

    /// Human-readable string representation of the Thrift client error.
    ///
    /// By default, this will not print the full cause chain. If you would like to print the underlying error
    /// cause, either use `format!("{:?}", anyhow::Error::from(client_err))` or print this using the
    /// alternate formatter `{:#}` instead of just `{}`.
    impl ::std::fmt::Display for BarError {
        fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::result::Result<(), ::std::fmt::Error> {
            match self {
                Self::se(inner) => {
                    if f.alternate() {
                        write!(f, "AllMethods::bar failed with variant `se`: {:#}", inner)?;
                    } else {
                        write!(f, "AllMethods::bar failed with se(SomeError)")?;
                    }
                }
                Self::ApplicationException(inner) => {
                    write!(f, "AllMethods::bar failed with ApplicationException")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
                Self::ThriftError(inner) => {
                    write!(f, "AllMethods::bar failed with ThriftError")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
            }

            Ok(())
        }
    }

    impl ::std::error::Error for BarError {
        fn source(&self) -> ::std::option::Option<&(dyn ::std::error::Error + 'static)> {
            match self {
                Self::se(ref inner) => {
                    Some(inner)
                }
                Self::ApplicationException(ref inner) => {
                    Some(inner)
                }
                Self::ThriftError(ref inner) => {
                    Some(inner.as_ref())
                }
            }
        }
    }

    impl ::std::convert::From<crate::types::SomeError> for BarError {
        fn from(e: crate::types::SomeError) -> Self {
            Self::se(e)
        }
    }

    impl AsSomeError for BarError {
        fn as_some_error(&self) -> Option<&crate::types::SomeError> {
            match self {
                Self::se(inner) => Some(inner),
                _ => None,
            }
        }
    }

    impl ::std::convert::From<::anyhow::Error> for BarError {
        fn from(err: ::anyhow::Error) -> Self {
            Self::ThriftError(err)
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for BarError {
        fn from(ae: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(ae)
        }
    }
    impl ::std::convert::From<crate::services::all_methods::BarExn> for
        ::std::result::Result<::std::string::String, BarError>
    {
        fn from(e: crate::services::all_methods::BarExn) -> Self {
            match e {
                crate::services::all_methods::BarExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::all_methods::BarExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(BarError::ApplicationException(aexn)),
                crate::services::all_methods::BarExn::se(exn) =>
                    ::std::result::Result::Err(BarError::se(exn)),
            }
        }
    }

}

/// Error definitions for `OneMethod`.
pub mod one_method {

    pub trait AsSomeError {
        fn as_some_error(&self) -> Option<&crate::types::SomeError>;
    }

    impl AsSomeError for ::anyhow::Error {
        fn as_some_error(&self) -> Option<&crate::types::SomeError> {
            for cause in self.chain() {
                if let Some(BarError::se(e)) = cause.downcast_ref::<BarError>() {
                    return Some(e);
                }
            }
            None
        }
    }

    pub type FooError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::one_method::FooExn> for
        ::std::result::Result<(), FooError>
    {
        fn from(e: crate::services::one_method::FooExn) -> Self {
            match e {
                crate::services::one_method::FooExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::one_method::FooExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(FooError::ApplicationException(aexn)),
            }
        }
    }

    /// Errors for bar (client side).
    #[derive(Debug)]
    pub enum BarError {
        se(crate::types::SomeError),
        ApplicationException(::fbthrift::ApplicationException),
        ThriftError(::anyhow::Error),
    }

    /// Human-readable string representation of the Thrift client error.
    ///
    /// By default, this will not print the full cause chain. If you would like to print the underlying error
    /// cause, either use `format!("{:?}", anyhow::Error::from(client_err))` or print this using the
    /// alternate formatter `{:#}` instead of just `{}`.
    impl ::std::fmt::Display for BarError {
        fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::result::Result<(), ::std::fmt::Error> {
            match self {
                Self::se(inner) => {
                    if f.alternate() {
                        write!(f, "OneMethod::bar failed with variant `se`: {:#}", inner)?;
                    } else {
                        write!(f, "OneMethod::bar failed with se(SomeError)")?;
                    }
                }
                Self::ApplicationException(inner) => {
                    write!(f, "OneMethod::bar failed with ApplicationException")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
                Self::ThriftError(inner) => {
                    write!(f, "OneMethod::bar failed with ThriftError")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
            }

            Ok(())
        }
    }

    impl ::std::error::Error for BarError {
        fn source(&self) -> ::std::option::Option<&(dyn ::std::error::Error + 'static)> {
            match self {
                Self::se(ref inner) => {
                    Some(inner)
                }
                Self::ApplicationException(ref inner) => {
                    Some(inner)
                }
                Self::ThriftError(ref inner) => {
                    Some(inner.as_ref())
                }
            }
        }
    }

    impl ::std::convert::From<crate::types::SomeError> for BarError {
        fn from(e: crate::types::SomeError) -> Self {
            Self::se(e)
        }
    }

    impl AsSomeError for BarError {
        fn as_some_error(&self) -> Option<&crate::types::SomeError> {
            match self {
                Self::se(inner) => Some(inner),
                _ => None,
            }
        }
    }

    impl ::std::convert::From<::anyhow::Error> for BarError {
        fn from(err: ::anyhow::Error) -> Self {
            Self::ThriftError(err)
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for BarError {
        fn from(ae: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(ae)
        }
    }
    impl ::std::convert::From<crate::services::one_method::BarExn> for
        ::std::result::Result<::std::string::String, BarError>
    {
        fn from(e: crate::services::one_method::BarExn) -> Self {
            match e {
                crate::services::one_method::BarExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::one_method::BarExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(BarError::ApplicationException(aexn)),
                crate::services::one_method::BarExn::se(exn) =>
                    ::std::result::Result::Err(BarError::se(exn)),
            }
        }
    }

}

/// Error definitions for `OneMethodOptOut`.
pub mod one_method_opt_out {

    pub trait AsSomeError {
        fn as_some_error(&self) -> Option<&crate::types::SomeError>;
    }

    impl AsSomeError for ::anyhow::Error {
        fn as_some_error(&self) -> Option<&crate::types::SomeError> {
            for cause in self.chain() {
                if let Some(BarError::se(e)) = cause.downcast_ref::<BarError>() {
                    return Some(e);
                }
            }
            None
        }
    }

    pub type FooError = ::fbthrift::NonthrowingFunctionError;

    impl ::std::convert::From<crate::services::one_method_opt_out::FooExn> for
        ::std::result::Result<(), FooError>
    {
        fn from(e: crate::services::one_method_opt_out::FooExn) -> Self {
            match e {
                crate::services::one_method_opt_out::FooExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::one_method_opt_out::FooExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(FooError::ApplicationException(aexn)),
            }
        }
    }

    /// Errors for bar (client side).
    #[derive(Debug)]
    pub enum BarError {
        se(crate::types::SomeError),
        ApplicationException(::fbthrift::ApplicationException),
        ThriftError(::anyhow::Error),
    }

    /// Human-readable string representation of the Thrift client error.
    ///
    /// By default, this will not print the full cause chain. If you would like to print the underlying error
    /// cause, either use `format!("{:?}", anyhow::Error::from(client_err))` or print this using the
    /// alternate formatter `{:#}` instead of just `{}`.
    impl ::std::fmt::Display for BarError {
        fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::result::Result<(), ::std::fmt::Error> {
            match self {
                Self::se(inner) => {
                    if f.alternate() {
                        write!(f, "OneMethodOptOut::bar failed with variant `se`: {:#}", inner)?;
                    } else {
                        write!(f, "OneMethodOptOut::bar failed with se(SomeError)")?;
                    }
                }
                Self::ApplicationException(inner) => {
                    write!(f, "OneMethodOptOut::bar failed with ApplicationException")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
                Self::ThriftError(inner) => {
                    write!(f, "OneMethodOptOut::bar failed with ThriftError")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
            }

            Ok(())
        }
    }

    impl ::std::error::Error for BarError {
        fn source(&self) -> ::std::option::Option<&(dyn ::std::error::Error + 'static)> {
            match self {
                Self::se(ref inner) => {
                    Some(inner)
                }
                Self::ApplicationException(ref inner) => {
                    Some(inner)
                }
                Self::ThriftError(ref inner) => {
                    Some(inner.as_ref())
                }
            }
        }
    }

    impl ::std::convert::From<crate::types::SomeError> for BarError {
        fn from(e: crate::types::SomeError) -> Self {
            Self::se(e)
        }
    }

    impl AsSomeError for BarError {
        fn as_some_error(&self) -> Option<&crate::types::SomeError> {
            match self {
                Self::se(inner) => Some(inner),
                _ => None,
            }
        }
    }

    impl ::std::convert::From<::anyhow::Error> for BarError {
        fn from(err: ::anyhow::Error) -> Self {
            Self::ThriftError(err)
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for BarError {
        fn from(ae: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(ae)
        }
    }
    impl ::std::convert::From<crate::services::one_method_opt_out::BarExn> for
        ::std::result::Result<::std::string::String, BarError>
    {
        fn from(e: crate::services::one_method_opt_out::BarExn) -> Self {
            match e {
                crate::services::one_method_opt_out::BarExn::Success(res) => {
                    ::std::result::Result::Ok(res)
                }
                crate::services::one_method_opt_out::BarExn::ApplicationException(aexn) =>
                    ::std::result::Result::Err(BarError::ApplicationException(aexn)),
                crate::services::one_method_opt_out::BarExn::se(exn) =>
                    ::std::result::Result::Err(BarError::se(exn)),
            }
        }
    }

}

